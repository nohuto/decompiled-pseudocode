/*
 * XREFs of ?NotifyTreeDirtyRegion@CRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1800DC500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::NotifyTreeDirtyRegion(
        CRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  CResource::NotifyOnChanged((_DWORD *)this - 12, 0, 0LL);
}
