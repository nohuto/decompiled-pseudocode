/*
 * XREFs of ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800256E0
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003451C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::OnSizeChanged(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CTopLevelWindow3D::OnWindowSizeUpdated((CTopLevelWindow3D *)((char *)this - 264));
}
