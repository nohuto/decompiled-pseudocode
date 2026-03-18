/*
 * XREFs of ?IsDesktopContent@COverlayContext@@QEAA_NXZ @ 0x1800EA398
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18004A590 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x1800F7080 (-IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::IsDesktopContent(COverlayContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( **((_DWORD **)this + 93) )
    return *((_BYTE *)this + 740) == 0;
  return v1;
}
