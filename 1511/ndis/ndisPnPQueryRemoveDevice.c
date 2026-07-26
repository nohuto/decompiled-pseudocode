/*
 * XREFs of ndisPnPQueryRemoveDevice @ 0x1C00CD218
 * Callers:
 *     ndisPnPIrpQueryRemove @ 0x1C00CE3A8 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPQueryStopDevice @ 0x1C00EE8B8 (ndisPnPQueryStopDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-C8h] BYREF
  int v6; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x51u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)a1, a1->UserModeOpenReferences);
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
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x52u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)a1, v2);
  return v2;
}
