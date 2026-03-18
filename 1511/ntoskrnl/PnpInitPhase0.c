/*
 * XREFs of PnpInitPhase0 @ 0x140771408
 * Callers:
 *     PpInitSystem @ 0x1407713DC (PpInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400909E4 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 */

char PnpInitPhase0()
{
  ExInitializeResourceLite(&PnpRegistryDeviceResource);
  PnpDeviceReferenceTableLock.Count = 1;
  PnpDeviceReferenceTableLock.Owner = 0LL;
  PnpDeviceReferenceTableLock.Contention = 0;
  PnpDeviceReferenceTableLock.Event.Header.SignalState = 0;
  PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Blink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
  PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Flink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
  LOWORD(PnpDeviceReferenceTableLock.Event.Header.Lock) = 1;
  PnpDeviceReferenceTableLock.Event.Header.Size = 6;
  RtlInitializeGenericTableAvl(
    &PnpDeviceReferenceTable,
    (PRTL_AVL_COMPARE_ROUTINE)PnpCompareInstancePath,
    (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
    0LL);
  return 1;
}
