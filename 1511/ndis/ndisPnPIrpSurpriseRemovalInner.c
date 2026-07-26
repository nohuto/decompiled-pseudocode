/*
 * XREFs of ndisPnPIrpSurpriseRemovalInner @ 0x1C0098598
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00984BC (ndisPnPIrpSurpriseRemoval.c)
 *     ndisQueuedPnPIrpSurpriseRemoval @ 0x1C00CE6D0 (ndisQueuedPnPIrpSurpriseRemoval.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C00126D0 (ndisReturnQueuedLowPowerNbls.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C0097EE8 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C009865C (ndisPnPRemoveDeviceEx.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisPowerSaveStop @ 0x1C0099100 (ndisPowerSaveStop.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A6AD0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisPnPIrpSurpriseRemovalInner(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _BYTE v2[8]; // [rsp+30h] [rbp-C8h] BYREF
  int v3; // [rsp+38h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x26u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1);
  ndisPowerSaveStop(a1, NdisSSDeviceSurpriseRemove);
  KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    if ( (unsigned __int8)byte_1C0083714 >= 4u )
      WPP_SF_q(0x27u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1);
    if ( (a1->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls((__int64)a1, 1);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
    ndisIssueNetEventSetPowerEvent(a1, 1);
  }
  ndisInitializeNetPnPEvent(v2, 0LL);
  v3 = 2;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
  a1->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  ndisPnPRemoveDeviceEx(a1);
  ndisDereferenceMiniport((__int64)a1, 0x1Bu);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x28u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1);
}
