/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C00D39A8
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C00D3A3C (ndisPnPCancelStopDevice.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00D49C4 (ndisPnPIrpCancelRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A6A98 (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+20h] [rbp-C8h] BYREF
  int v4; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x53u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)a1);
  ndisInitializeNetPnPEvent(&v3, 0LL);
  v4 = 3;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, v2, (__int64)&v3);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x54u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)a1);
}
