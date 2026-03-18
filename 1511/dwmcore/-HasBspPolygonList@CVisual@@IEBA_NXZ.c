/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1800F7A20
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)this + 51);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(v1 + 24) != 0;
  return result;
}
