/*
 * XREFs of ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18011C270
 * Callers:
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180124FC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18012C014 (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetIntersectingRedrawRects(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  *(_DWORD *)(a3 + 24) = 0;
  result = DynArrayImpl<0>::ShrinkToSize(a3, 0x10u);
  v7 = *(_QWORD *)(a1 + 184);
  if ( v7 )
    return CDirtyRegion::GetIntersectingRedrawRects(v7, a2, a3);
  return result;
}
