/*
 * XREFs of ndisFNotifyDetach @ 0x1C00CF314
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ndisReferenceRef @ 0x1C001900C (ndisReferenceRef.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C009B544 (ndisFForwardNetPnPEventToFilter.c)
 */

char __fastcall ndisFNotifyDetach(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  struct _NET_PNP_EVENT_NOTIFICATION v5; // [rsp+20h] [rbp-C8h] BYREF

  v5.PortNumber = 0;
  v5.Header = (_NDIS_OBJECT_HEADER)10748288;
  v5.NetPnPEvent.NetEvent = NetEventFilterPreDetach;
  memset(&v5.NetPnPEvent.Buffer, 0, 160);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE *)(v2 + 100);
  if ( (v3 > 6u || v3 == 6 && *(_BYTE *)(v2 + 101) >= 0x1Eu) && (*(_DWORD *)(a1 + 56) & 0x10000) == 0 )
  {
    LOBYTE(v2) = ndisReferenceRef((PKSPIN_LOCK)(a1 + 312), 0x15u);
    if ( (_BYTE)v2 )
    {
      ndisFForwardNetPnPEventToFilter((_QWORD *)a1, &v5);
      LOBYTE(v2) = ndisDereferenceRef((PKSPIN_LOCK)(a1 + 312), 0x15u);
    }
  }
  *(_DWORD *)(a1 + 56) |= 0x10000u;
  return v2;
}
