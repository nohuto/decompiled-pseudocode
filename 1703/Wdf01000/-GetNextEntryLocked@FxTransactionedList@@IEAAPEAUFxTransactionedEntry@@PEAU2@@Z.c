/*
 * XREFs of ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C002CC18
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C001322C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001FD3C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0024C28 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002C520 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C00656C4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0085A7C (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00975D0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C0097A40 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C009B3C0 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C009F6CC (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A3610 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 *     ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C00A3640 (-ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z.c)
 * Callees:
 *     <none>
 */

FxTransactionedEntry *__fastcall FxTransactionedList::GetNextEntryLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry)
{
  FxTransactionedEntry *result; // rax
  FxTransactionedEntry *p_m_ListHead; // rcx

  if ( !Entry )
    Entry = (FxTransactionedEntry *)&this->m_ListHead;
  result = (FxTransactionedEntry *)Entry->m_ListLink.Flink;
  p_m_ListHead = (FxTransactionedEntry *)&this->m_ListHead;
  while ( result != p_m_ListHead )
  {
    if ( result->m_Transaction == FxTransactionActionNothing )
      return result;
    result = (FxTransactionedEntry *)result->m_ListLink.Flink;
  }
  return 0LL;
}
