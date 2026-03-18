/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CD90
 * Callers:
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WBHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDE80 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WBHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDE90 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE080 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE090 (-QueryInterface@CHwTextureRenderTarget@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::QueryInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHwTextureRenderTarget *)((char *)this + 120), a2, a3);
}
