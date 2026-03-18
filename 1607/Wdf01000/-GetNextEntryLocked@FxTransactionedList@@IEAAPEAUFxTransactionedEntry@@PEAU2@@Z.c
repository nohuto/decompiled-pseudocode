/*
 * XREFs of ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0022A68
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0012F94 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001F684 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C00255F0 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0034100 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C00626E8 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C008161C (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00932E0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C0093710 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0097014 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C009AC84 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C009E7CC (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 *     ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C009E7F0 (-ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z.c)
 * Callees:
 *     <none>
 */

FxTransactionedEntry *__fastcall FxTransactionedList::GetNextEntryLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry)
{
  FxTransactionedEntry *result; // rax
  FxTransactionedEntry *p_m_ListHead; // rcx

  if ( Entry )
    result = (FxTransactionedEntry *)Entry->m_ListLink.Flink;
  else
    result = (FxTransactionedEntry *)this->m_ListHead.Flink;
  p_m_ListHead = (FxTransactionedEntry *)&this->m_ListHead;
  while ( result != p_m_ListHead )
  {
    if ( result->m_Transaction == FxTransactionActionNothing )
      return result;
    result = (FxTransactionedEntry *)result->m_ListLink.Flink;
  }
  return 0LL;
}
