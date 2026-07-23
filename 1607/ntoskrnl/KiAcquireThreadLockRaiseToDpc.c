/*
 * XREFs of KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14009553C (KeQueryTotalCycleTimeThread.c)
 *     KeAttachProcess @ 0x1400AC4A0 (KeAttachProcess.c)
 *     KeRemoveQueueApc @ 0x1400AD8E4 (KeRemoveQueueApc.c)
 *     KeRequestTerminationThread @ 0x1400C7C80 (KeRequestTerminationThread.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KiFlushQueueApc @ 0x1400C99F4 (KiFlushQueueApc.c)
 *     KeTestAlertThread @ 0x1400CAF2C (KeTestAlertThread.c)
 *     KeStackAttachProcess @ 0x1400CAFB0 (KeStackAttachProcess.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KeUpdateThreadTag @ 0x14010D73C (KeUpdateThreadTag.c)
 *     KeQueryActualAffinityThread @ 0x1401D2ACC (KeQueryActualAffinityThread.c)
 *     KeEnumerateQueueApc @ 0x1401D6518 (KeEnumerateQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1401D74C4 (KeQueryCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8180 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireThreadLockRaiseToDpc(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  *a2 = result;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v4);
      result = *(_QWORD *)(a1 + 64);
    }
    while ( result );
  }
  return result;
}
