/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180109880
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18004FD80 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 */

_BOOL8 __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // r10
  _BOOL8 result; // rax

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  result = 0LL;
  if ( BspPolygonList )
    return *(_DWORD *)(BspPolygonList + 24) != 0;
  return result;
}
