/*
 * XREFs of ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180131EF0
 * Callers:
 *     ?QueryInterface@CCoRenderVisualProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFF40 (-QueryInterface@CCoRenderVisualProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFFD0 (-QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFFE0 (-QueryInterface@CRenderTargetImageSource@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFFF0 (-QueryInterface@CRenderTargetImageSource@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoRenderVisualProxy::QueryInterface(CCoRenderVisualProxy *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCoRenderVisualProxy *)((char *)this + 8), a2, a3);
}
