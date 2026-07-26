/*
 * XREFs of ndisFForwardNetPnPEventToFilter @ 0x1C009B544
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C009B450 (ndisFNetPnPEventInternal.c)
 *     ndisFNotifyDetach @ 0x1C00CF314 (ndisFNotifyDetach.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x1C000F0B0 (NdisFNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ndisFInvokeNetPnPEvent @ 0x1C009B5DC (ndisFInvokeNetPnPEvent.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00A1A00 (ndisShallowCopyNetPnPEvent.c)
 */

NDIS_STATUS __fastcall ndisFForwardNetPnPEventToFilter(_QWORD *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // cl
  __int16 v6; // ax
  char v7; // [rsp+20h] [rbp-C8h] BYREF
  char v8; // [rsp+21h] [rbp-C7h]
  __int16 v9; // [rsp+22h] [rbp-C6h]
  int v10; // [rsp+C0h] [rbp-28h]

  if ( !*(_QWORD *)(a1[2] + 280LL) )
    return NdisFNetPnPEvent(a1, a2);
  ndisShallowCopyNetPnPEvent(&v7, a2);
  v5 = *(_BYTE *)(v3 + 100);
  if ( v5 > 6u || v5 == 6 && *(_BYTE *)(v3 + 101) >= 0x32u )
  {
    v8 = 2;
    v6 = 172;
  }
  else
  {
    v10 |= 4u;
    v6 = 164;
    v8 = 1;
  }
  v9 = v6;
  return ndisFInvokeNetPnPEvent(v4, &v7);
}
