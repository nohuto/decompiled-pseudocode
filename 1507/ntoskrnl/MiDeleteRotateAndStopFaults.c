/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x140135C44
 * Callers:
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _KPROCESS *Process; // rsi
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v10; // eax
  _BYTE v12[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  memset(v12, 0, sizeof(v12));
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    while ( 1 )
    {
      v10 = *v8;
      if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v8, v10 | 0x40000000, v10);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
  }
  *a3 = Process[1].Affinity.Bitmap[9];
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiDeleteVirtualAddresses(a1, a2, 0, CurrentIrql, (__int64)v12);
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], CurrentIrql);
}
