/*
 * XREFs of ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800F3D6C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800B8CE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801063B8 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007C120 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CHwndRenderTarget::NotifyRenderedRect(__int64 a1, const struct MilRectF *a2, char a3)
{
  const struct MilRectF *v3; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF

  v3 = a2;
  if ( a2 && a3 )
  {
    CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, a2, &v8);
    v3 = (const struct MilRectF *)&v8;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct MilRectF *))(**(_QWORD **)(a1 + 88) + 208LL))(
         *(_QWORD *)(a1 + 88),
         v3);
  v6 = v5;
  if ( v5 >= 0 )
    *(_BYTE *)(a1 + 557) = 1;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x9C0u);
  return v6;
}
