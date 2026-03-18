/*
 * XREFs of ?GetRenderParameter@CComposition@@QEAA_NW4Enum@MilVisualRenderParameterType@@PEAPEAUMilVisualRenderParameter@@@Z @ 0x180067EA0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?IsScreenReadback@CDrawingContext@@QEAA_NXZ @ 0x180022DB8 (-IsScreenReadback@CDrawingContext@@QEAA_NXZ.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsScreenReadback@CCachedVisualImage@@AEAA_NXZ @ 0x180053294 (-IsScreenReadback@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::GetRenderParameter(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = 0LL;
  v4 = a1 + 32 * (a2 + 27LL);
  if ( *(_DWORD *)v4 )
  {
    result = 1LL;
    *a3 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8LL * (unsigned int)(*(_DWORD *)v4 - 1));
  }
  return result;
}
