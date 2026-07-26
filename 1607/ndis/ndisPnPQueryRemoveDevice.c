/*
 * XREFs of ndisPnPQueryRemoveDevice @ 0x1C00D2F48
 * Callers:
 *     ndisPnPIrpQueryRemove @ 0x1C00D4368 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPQueryStopDevice @ 0x1C00F5548 (ndisPnPQueryStopDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+20h] [rbp-C8h] BYREF
  int v5; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x51u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)a1, a1->UserModeOpenReferences);
  if ( (a1->Flags & 0x40000000) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    ndisInitializeNetPnPEvent(&v4, 0LL);
    v5 = 2;
    v2 = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v4);
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x52u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)a1, v2);
  return v2;
}
