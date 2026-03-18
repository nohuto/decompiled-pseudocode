/*
 * XREFs of ?GetDisplayRect@CHwndRenderTarget@@AEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180073B48
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::GetDisplayRect(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 152);
  if ( v1 )
    return v1 + 104;
  else
    return a1 + 384;
}
