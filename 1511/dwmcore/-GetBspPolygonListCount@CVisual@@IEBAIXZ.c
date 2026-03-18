/*
 * XREFs of ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x18012027C
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBspPolygonListCount(CVisual *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 51);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 24);
  return result;
}
