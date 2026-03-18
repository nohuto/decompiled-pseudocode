/*
 * XREFs of ?AssignDbgRedrawRects@CDrawingContext@@QEAAXPEBUMilRectF@@I@Z @ 0x18010B318
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ @ 0x1800371D4 (-ResetDbgRedrawRects@CDrawingContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CDrawingContext::AssignDbgRedrawRects(CDrawingContext *this, const struct MilRectF *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int128 v8; // xmm0

  CDrawingContext::ResetDbgRedrawRects(this);
  if ( v2 )
  {
    v5 = v4 + 8;
    v6 = v2;
    v7 = v3 - v4;
    do
    {
      v8 = *(_OWORD *)(v5 - 8);
      v5 += 16LL;
      *(_OWORD *)(v7 + v5 + 5808) = v8;
      --v6;
    }
    while ( v6 );
  }
}
