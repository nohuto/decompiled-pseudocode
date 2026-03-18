/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x1404738D4
 * Callers:
 *     PfpPrefetchSharedStart @ 0x140458AC8 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140458F0C (PfpPrefetchSharedCleanup.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14047329C (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN v2; // bl
  __int16 v3; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = (BYTE4(CurrentThread[1].Queue) & 0x40) != 0;
  BYTE4(CurrentThread[1].Queue) ^= (BYTE4(CurrentThread[1].Queue) ^ (Prefetching << 6)) & 0x40;
  v3 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v3;
  if ( !v3 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v2;
}
