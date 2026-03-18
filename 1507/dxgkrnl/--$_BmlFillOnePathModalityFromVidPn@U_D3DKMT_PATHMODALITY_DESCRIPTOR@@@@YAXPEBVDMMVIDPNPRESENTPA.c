/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C009C19C
 * Callers:
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C009C02C (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0002F84 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<_D3DKMT_PATHMODALITY_DESCRIPTOR>(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  DMMVIDPNSOURCEMODE *v7; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // xmm1_8
  int v15; // ecx
  int v16; // eax
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
      if ( *(_DWORD *)(a2 + 84) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 88) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_DWORD *)a2 &= ~0x800000u;
      }
    }
    else
    {
      *(_DWORD *)a2 &= ~0x800000u;
    }
    v8 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v6 + 144));
    *(_OWORD *)(a2 + 84) = *(_OWORD *)&v8->PrimSurfSize.cx;
    v9 = *(_OWORD *)&v8->Stride;
    *(_DWORD *)a2 |= 0x100u;
    *(_OWORD *)(a2 + 100) = v9;
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
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(v13 + 72);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(v13 + 88);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(v13 + 104);
    v14 = *(_QWORD *)(v13 + 120);
    *(_DWORD *)a2 |= 0x87u;
    *(_QWORD *)(a2 + 72) = v14;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 88));
  v15 = *(_DWORD *)(a1 + 116);
  if ( v15 && (unsigned int)(v15 - 254) > 1 )
  {
    *(_DWORD *)a2 |= 0x200u;
    *(_DWORD *)(a2 + 120) = v15;
  }
  v16 = *(_DWORD *)(a1 + 112);
  if ( v16 && v16 != 254 )
  {
    *(_DWORD *)a2 |= 0x400u;
    *(_DWORD *)(a2 + 124) = v16;
  }
  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 72LL);
  *(_DWORD *)a2 |= 0x8000u;
  *(_DWORD *)(a2 + 80) = result;
  return result;
}
