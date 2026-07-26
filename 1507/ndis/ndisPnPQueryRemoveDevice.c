/*
 * XREFs of ndisPnPQueryRemoveDevice @ 0x1C00D3A88
 * Callers:
 *     ndisPnPIrpQueryRemove @ 0x1C00D4C18 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPQueryStopDevice @ 0x1C00F4758 (ndisPnPQueryStopDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A6A98 (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-C8h] BYREF
  int v6; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x51u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)a1, a1->UserModeOpenReferences);
  if ( (a1->Flags & 0x40000000) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    ndisInitializeNetPnPEvent(&v5, 0LL);
    v6 = 2;
    v2 = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, v3, (__int64)&v5);
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x52u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)a1, v2);
  return v2;
}
