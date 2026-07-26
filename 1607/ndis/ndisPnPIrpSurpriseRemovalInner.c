/*
 * XREFs of ndisPnPIrpSurpriseRemovalInner @ 0x1C009E2D4
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009E0B4 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisQueuedPnPIrpSurpriseRemoval @ 0x1C00D4690 (ndisQueuedPnPIrpSurpriseRemoval.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C006761C (ndisReturnQueuedLowPowerNbls.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009C88C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPowerSaveStop @ 0x1C009E190 (ndisPowerSaveStop.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C009E398 (ndisPnPRemoveDeviceEx.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A3B24 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPIrpSurpriseRemovalInner(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _BYTE v2[8]; // [rsp+30h] [rbp-C8h] BYREF
  int v3; // [rsp+38h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x26u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (__int64)a1);
  ndisPowerSaveStop(a1, 3);
  KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_q(0x27u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (__int64)a1);
    if ( (a1->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls((__int64)a1, 1);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
    ndisIssueNetEventSetPowerEvent(a1, 1);
  }
  ndisInitializeNetPnPEvent(v2, 0LL);
  v3 = 2;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)v2);
  a1->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  ndisPnPRemoveDeviceEx(a1);
  ndisDereferenceMiniport((__int64)a1);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x28u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (__int64)a1);
}
