/*
 * XREFs of ndisMDirectOidRequest @ 0x1C00421E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B444 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001AC44 (ndisReferenceOpenByHandle.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     IsOidRequestDirectOid @ 0x1C0040468 (IsOidRequestDirectOid.c)
 *     ndisDoDirectOidRequest @ 0x1C0041654 (ndisDoDirectOidRequest.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMDirectOidRequest(struct _NDIS_OPEN_BLOCK *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 MiniportHandle; // rbp

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x10u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2);
  if ( IsOidRequestDirectOid(*(_DWORD *)(a2 + 32)) )
  {
    if ( ndisReferenceOpenByHandle(a1, 6u) )
    {
      MiniportHandle = (__int64)a1->MiniportHandle;
      if ( !a1->ProtocolHandle->DirectOidRequestCompleteHandler )
        goto LABEL_10;
      if ( (*(_DWORD *)(MiniportHandle + 3736) & 0x400) == 0 )
        *(_BYTE *)(a2 + 232) = 1;
      memset((void *)(a2 + 72), 0, 0x60uLL);
      *(_DWORD *)(a2 + 88) |= 0x200020u;
      *(_QWORD *)(a2 + 96) = 0LL;
      *(_QWORD *)(a2 + 104) = a1;
      v4 = ndisDoDirectOidRequest(a2, MiniportHandle, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_10:
        ndisMDereferenceOpenUnlocked((__int64)a1, 6u);
    }
    else
    {
      v4 = -1073676286;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(17LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2, v4);
  return v4;
}
