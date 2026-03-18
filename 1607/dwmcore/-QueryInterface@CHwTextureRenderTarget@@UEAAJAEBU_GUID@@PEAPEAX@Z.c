/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DA00
 * Callers:
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1600 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1610 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C18F0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1900 (-QueryInterface@CHwTextureRenderTarget@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1910 (-QueryInterface@CHwTextureRenderTarget@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1920 (-QueryInterface@CHwTextureRenderTarget@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::QueryInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHwTextureRenderTarget *)((char *)this + 128), a2, a3);
}
