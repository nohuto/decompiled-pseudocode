/*
 * XREFs of ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C009E7CC
 * Callers:
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0074320 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C00921F8 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0096D00 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0022A68 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

FxTransactionedEntry *__fastcall FxRelatedDeviceList::GetNextEntry(FxRelatedDeviceList *this, FxRelatedDevice *Entry)
{
  FxTransactionedEntry *result; // rax

  if ( Entry )
    Entry = (FxRelatedDevice *)((char *)Entry + 104);
  result = FxTransactionedList::GetNextEntryLocked(this, (FxTransactionedEntry *)Entry);
  if ( result )
    return (FxTransactionedEntry *)((char *)result - 104);
  return result;
}
