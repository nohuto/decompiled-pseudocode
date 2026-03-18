/*
 * XREFs of ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x180109B0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  __int64 v4; // rax
  __m128i v6; // [rsp+40h] [rbp-18h] BYREF

  if ( *((_DWORD *)a3 + 6) )
  {
    *((_BYTE *)this + 153) |= 0x40u;
    v6 = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
    v4 = v6.m128i_i64[0] - *(_QWORD *)&`CVisual::SetHeatMapColor'::`2'::sc_defaultValue.r;
    if ( v6.m128i_i64[0] == *(_QWORD *)&`CVisual::SetHeatMapColor'::`2'::sc_defaultValue.r )
      v4 = v6.m128i_i64[1] - *(_QWORD *)&`CVisual::SetHeatMapColor'::`2'::sc_defaultValue.b;
    if ( v4 )
      CSparseStorage::SetData((char **)this + 34, 6, 0x10u, &v6);
    else
      *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x4000000u;
  }
  else
  {
    *((_BYTE *)this + 153) &= ~0x40u;
  }
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
