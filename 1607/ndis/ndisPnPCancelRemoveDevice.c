/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C00D2E68
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C00D2EFC (ndisPnPCancelStopDevice.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00D4114 (ndisPnPIrpCancelRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+20h] [rbp-C8h] BYREF
  int v3; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x53u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)a1);
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v3 = 3;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v2);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x54u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)a1);
}
