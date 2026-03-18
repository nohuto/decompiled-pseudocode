/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C0334
 * Callers:
 *     sub_1C00BFFB8 @ 0x1C00BFFB8 (sub_1C00BFFB8.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01775D0 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR>(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  DMMVIDPNSOURCEMODE *v7; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  __int64 result; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  v2 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v2 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(DMMVIDPNSOURCEMODE **)(v6 + 144);
  if ( v7 )
  {
    if ( (*(_DWORD *)a2 & 0x100) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v7);
      if ( *(_DWORD *)(a2 + 76) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 80) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_DWORD *)a2 &= ~0x800000u;
      }
    }
    else
    {
      *(_DWORD *)a2 &= ~0x800000u;
    }
    v8 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v6 + 144));
    *(_OWORD *)(a2 + 76) = *(_OWORD *)&v8->PrimSurfSize.cx;
    v9 = *(_OWORD *)&v8->Stride;
    *(_DWORD *)a2 |= 0x100u;
    *(_OWORD *)(a2 + 92) = v9;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  v10 = *(_QWORD *)(a1 + 96);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(v12 + 144);
  if ( v13 )
  {
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(v13 + 72);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(v13 + 76);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v13 + 84);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v13 + 92);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v13 + 100);
    *(_QWORD *)(a2 + 24) = *(unsigned int *)(v13 + 112);
    *(_DWORD *)(a2 + 68) = (int)(*(_DWORD *)(v13 + 120) << 29) >> 29;
    *(_DWORD *)a2 |= 0x87u;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 88));
  v14 = *(_DWORD *)(a1 + 116);
  if ( v14 && (unsigned int)(v14 - 254) > 1 )
  {
    *(_DWORD *)a2 |= 0x200u;
    *(_DWORD *)(a2 + 108) = v14;
  }
  v15 = *(_DWORD *)(a1 + 112);
  if ( v15 && v15 != 254 )
  {
    *(_DWORD *)a2 |= 0x400u;
    *(_DWORD *)(a2 + 112) = v15;
  }
  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 72LL);
  *(_DWORD *)a2 |= 0x8000u;
  *(_DWORD *)(a2 + 72) = result;
  return result;
}
