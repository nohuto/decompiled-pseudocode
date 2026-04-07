/*
 * XREFs of ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800339C0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017220 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800176F8 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::OnSWRInvalidated(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CVisual::SetDirtyFlags((CTopLevelWindow3D *)((char *)this - 264), 128);
}
