/*
 * XREFs of ndisMDirectOidRequest @ 0x1C0045CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C0018A98 (ndisReferenceOpenByHandle.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     IsOidRequestDirectOid @ 0x1C0043FBC (IsOidRequestDirectOid.c)
 *     ndisDoDirectOidRequest @ 0x1C0045154 (ndisDoDirectOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMDirectOidRequest(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x10u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
  if ( IsOidRequestDirectOid(*(_DWORD *)(a2 + 32)) )
  {
    if ( ndisReferenceOpenByHandle(a1, 6u) )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 872LL) )
        goto LABEL_10;
      if ( (*(_DWORD *)(v5 + 3736) & 0x400) == 0 )
        *(_BYTE *)(a2 + 232) = 1;
      memset((void *)(a2 + 72), 0, 0x60uLL);
      *(_DWORD *)(a2 + 88) |= 0x200020u;
      *(_QWORD *)(a2 + 96) = 0LL;
      *(_QWORD *)(a2 + 104) = a1;
      v4 = ndisDoDirectOidRequest(a2, v5, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_10:
        ndisMDereferenceOpenUnlocked(a1, 6u);
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
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(17LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, v4);
  return v4;
}
