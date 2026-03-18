/*
 * XREFs of MiMarkPteDirty @ 0x1400539D4
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 i; // rdx
  unsigned int v6; // edi
  __int64 PteShadow; // rax
  __int64 v8; // rax

  result = *a1;
  v2 = (unsigned __int64)(a1 + 0x12090482600LL);
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    result = MiReadPteShadow(a1, *a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
    }
    else
    {
      v6 = 0;
      if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
      for ( i = (unsigned int)dword_14034FD40[0];
            (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000;
            i = (unsigned int)dword_14034FD40[0] )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(dword_14034FD40, i | 0x40000000, i);
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
    }
    PteShadow = *a1;
    if ( v2 <= 0x7F8 )
      PteShadow = MiReadPteShadow(a1, *a1);
    if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) == 0 && (PteShadow & 0x800) != 0 )
    {
      v8 = PteShadow | 0x62;
      *a1 = v8;
      if ( v2 <= 0x7F8 )
        MiWritePteShadow(a1, v8);
    }
    LOBYTE(i) = CurrentIrql;
    return MiUnlockWorkingSetExclusive(dword_14034FD40, i);
  }
  return result;
}
