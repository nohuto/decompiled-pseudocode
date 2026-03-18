/*
 * XREFs of ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111CC4
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800BC9F0 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111D5C (-NewContentRendered@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801530A8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 */

__int64 __fastcall CComposeTop::FullRender(CComposeTop *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  int v8; // eax

  v3 = 0;
  if ( *((_QWORD *)a1 + 2) && (v7 = CComposeTop::NewContentRendered(a1), v3 = v7, v7 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x16Au);
  }
  else if ( *((_QWORD *)a1 + 20) )
  {
    v8 = CComposeTop::RenderWorker(a1, a2, a3);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x174u);
  }
  return v3;
}
