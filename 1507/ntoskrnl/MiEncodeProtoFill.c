/*
 * XREFs of MiEncodeProtoFill @ 0x140081B8C
 * Callers:
 *     MiInitializePrototypePtes @ 0x1404B24A0 (MiInitializePrototypePtes.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 i; // rdx
  unsigned int v7; // edi
  unsigned __int64 v8; // rdi

  v3 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = &v3[a2 >> 12];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FE40);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(dword_14034FE40, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FE40);
    for ( i = (unsigned int)dword_14034FE40[0];
          (dword_14034FE40[0] & 0xBFFFFFFF) != 0x80000000;
          i = (unsigned int)dword_14034FE40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FE40, i | 0x40000000, i);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  if ( v3 < v4 )
  {
    i = a3;
    v8 = (unsigned __int64)(v3 + 0x12090482600LL);
    do
    {
      *v3 = i;
      if ( v8 <= 0x7F8 )
      {
        MiWritePteShadow(v3, i);
        i = a3;
      }
      ++v3;
      v8 += 8LL;
    }
    while ( v3 < v4 );
  }
  LOBYTE(i) = CurrentIrql;
  return MiUnlockWorkingSetExclusive(dword_14034FE40, i);
}
