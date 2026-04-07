/*
 * XREFs of ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800256C0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800346BC (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::OnSWRInvalidated(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CVisual::SetDirtyFlags((CTopLevelWindow3D *)((char *)this - 264), 128);
}
