/*
 * XREFs of ndisIssueNetEventSetPowerEvent @ 0x1C009C88C
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00114C4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009E2D4 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisIssueNetEventSetPowerEvent(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  int v3; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v4[8]; // [rsp+30h] [rbp-C8h] BYREF
  int v5; // [rsp+38h] [rbp-C0h]
  int *v6; // [rsp+40h] [rbp-B8h]
  int v7; // [rsp+48h] [rbp-B0h]

  v3 = a2;
  ndisInitializeNetPnPEvent(v4, 0LL);
  v5 = 0;
  v6 = &v3;
  v7 = 4;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, v3 == 1);
}
