/*
 * XREFs of ?GetContentType@CCompositionSurfaceInfo@@QEBA?AW4BufferContentType@@XZ @ 0x1800076FC
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18004A590 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6270 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVIImageSource@@PEAV-$TMilRect_@MUMil.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceInfo::GetContentType(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 188);
  return result;
}
