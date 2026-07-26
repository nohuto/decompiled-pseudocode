/*
 * XREFs of ndisMDirectOidRequest @ 0x1C0040AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001EC00 (ndisReferenceOpenByHandle.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     IsOidRequestDirectOid @ 0x1C003EC70 (IsOidRequestDirectOid.c)
 *     ndisDoDirectOidRequest @ 0x1C003FF54 (ndisDoDirectOidRequest.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMDirectOidRequest(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x10u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
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
        ndisMDereferenceOpenUnlocked(a1);
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(17LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, v4);
  return v4;
}
