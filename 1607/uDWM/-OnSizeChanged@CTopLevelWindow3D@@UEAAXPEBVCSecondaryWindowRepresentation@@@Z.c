/*
 * XREFs of ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800281D0
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180034D34 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::OnSizeChanged(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CTopLevelWindow3D::OnWindowSizeUpdated((CTopLevelWindow3D *)((char *)this - 264));
}
