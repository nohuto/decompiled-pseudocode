/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180104290
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x18014CA14 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)this + 53);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(v1 + 24) != 0;
  return result;
}
