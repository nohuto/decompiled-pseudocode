/*
 * XREFs of ndisFForwardNetPnPEventToFilter @ 0x1C0098194
 * Callers:
 *     ndisFNetPnPEventInternal @ 0x1C00980A0 (ndisFNetPnPEventInternal.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNotifyDetach @ 0x1C00C8724 (ndisFNotifyDetach.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x1C00128B0 (NdisFNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ndisFInvokeNetPnPEvent @ 0x1C009822C (ndisFInvokeNetPnPEvent.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00A5754 (ndisShallowCopyNetPnPEvent.c)
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
