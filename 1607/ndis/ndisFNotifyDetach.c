/*
 * XREFs of ndisFNotifyDetach @ 0x1C009CD48
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C009CE00 (ndisFForwardNetPnPEventToFilter.c)
 */

char __fastcall ndisFNotifyDetach(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  _DWORD v5[44]; // [rsp+20h] [rbp-C8h] BYREF

  v5[1] = 0;
  v5[0] = 10748288;
  v5[2] = 15;
  memset(&v5[4], 0, 0xA0uLL);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE *)(v2 + 100);
  if ( (v3 > 6u || v3 == 6 && *(_BYTE *)(v2 + 101) >= 0x1Eu) && (*(_DWORD *)(a1 + 56) & 0x10000) == 0 )
  {
    LOBYTE(v2) = ndisReferenceRef((PKSPIN_LOCK)(a1 + 312), 0x15u);
    if ( (_BYTE)v2 )
    {
      ndisFForwardNetPnPEventToFilter(a1, v5);
      LOBYTE(v2) = ndisDereferenceRef((PKSPIN_LOCK)(a1 + 312), 0x15u);
    }
  }
  *(_DWORD *)(a1 + 56) |= 0x10000u;
  return v2;
}
