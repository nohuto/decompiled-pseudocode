/*
 * XREFs of ?IsBackfaced@CVisual@@IEBA_NXZ @ 0x18010432C
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000A900 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800364E0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800F3BC0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

bool __fastcall CVisual::IsBackfaced(CVisual *this)
{
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax

  Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
  if ( Transform3DEffectNoRef )
  {
    Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef);
    LOBYTE(Transform3DEffectNoRef) = !CMILMatrix::IsFacingUser(Matrix);
  }
  return (char)Transform3DEffectNoRef;
}
