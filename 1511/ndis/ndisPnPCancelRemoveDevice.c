/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C00CD138
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C00CD1CC (ndisPnPCancelStopDevice.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00CE154 (ndisPnPIrpCancelRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+20h] [rbp-C8h] BYREF
  int v4; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x53u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)a1);
  ndisInitializeNetPnPEvent(&v3, 0LL);
  v4 = 3;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, v2, (__int64)&v3);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x54u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)a1);
}
