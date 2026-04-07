/*
 * XREFs of ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180012FB0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::OnSWRInvalidated(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)((char *)this - 344), 128);
}
