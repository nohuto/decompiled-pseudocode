/*
 * XREFs of MiSetTrimWhileAgingState @ 0x140025D74
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x140025D5C (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14016EFB8 (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetTrimWhileAgingState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // edi
  int v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  v2 = *(_QWORD *)(a1 + 5256);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
    while ( (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034FD40[0] & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FD40, dword_14034FD40[0] | 0x40000000, dword_14034FD40[0]);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  if ( !(_BYTE)v6 )
  {
    *(_QWORD *)(v2 + 80) = 0LL;
    goto LABEL_11;
  }
  switch ( (unsigned __int8)v6 )
  {
    case 1u:
      *(_QWORD *)(v2 + 72) = -1LL;
      *(_QWORD *)(v2 + 80) = 204800LL;
      break;
    case 2u:
      *(_QWORD *)(v2 + 80) = 204800LL;
      *(_QWORD *)(v2 + 72) = 51200LL;
      break;
    case 3u:
      *(_QWORD *)(v2 + 80) = 204800LL;
      *(_QWORD *)(v2 + 72) = 12800LL;
      break;
    case 4u:
      *(_QWORD *)(v2 + 80) = 384000LL;
LABEL_11:
      *(_QWORD *)(v2 + 72) = 0LL;
      break;
  }
  *(_DWORD *)(v2 + 88) = (unsigned __int8)v6;
  LOBYTE(a2) = CurrentIrql;
  *(_WORD *)(v2 + 2362) = *(_WORD *)((char *)&v6 + 1);
  return MiUnlockWorkingSetExclusive(dword_14034FD40, a2);
}
