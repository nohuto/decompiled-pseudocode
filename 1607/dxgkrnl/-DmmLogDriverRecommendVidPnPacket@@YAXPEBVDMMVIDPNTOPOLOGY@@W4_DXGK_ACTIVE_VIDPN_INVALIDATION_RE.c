/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C01A0CAC
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01A0F9C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_ACTIVE_VIDPN_INVALIDATION_REASON a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edi
  char *v6; // rax
  char *v7; // rbx
  signed int v8; // eax

  v2 = *((_DWORD *)a1 + 10);
  v5 = 136 * v2 + 56;
  v6 = (char *)operator new(v5, 0x4E506456u, PagedPool);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 136 * v2 + 56);
    *((_DWORD *)v7 + 10) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *(_DWORD *)v7 = 14;
    *((_DWORD *)v7 + 1) = v5;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_DWORD *)v7 + 12) = a2;
    *((_DWORD *)v7 + 13) = v2;
    v8 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v2, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR *)(v7 + 56));
    if ( v8 < 0 || (v8 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7), v8 < 0) )
      DxgkLogCodePointPacket(0x38u, v8, 0, 0);
    operator delete(v7);
  }
  else
  {
    DxgkLogCodePointPacket(0x38u, 0xC0000017, 0, 0);
  }
}
