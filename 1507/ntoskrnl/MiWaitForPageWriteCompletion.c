/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x140126218
 * Callers:
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v9; // edi
  signed __int32 v10; // eax
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  __int16 v14; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+32h] [rbp-1Eh]
  int v16; // [rsp+34h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]

  v16 = 0;
  v4 = (volatile signed __int32 *)(a2 + 72);
  v17[1] = v17;
  v13 = 8;
  v17[0] = v17;
  v14 = 263;
  v15 = 6;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2 + 72);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a2 + 72));
    while ( 1 )
    {
      v10 = *v4;
      if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  v12 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = &v12;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(a3, a4);
  return KeWaitForGate(&v14, 18LL);
}
