/*
 * XREFs of ?GetWorldTransform4x4@CDrawingContext@@EEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x180123FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 */

void __fastcall CDrawingContext::GetWorldTransform4x4(CDrawingContext *this, struct D2D_MATRIX_4X4_F *a2)
{
  struct _D3DMATRIX *TopByReference; // rax
  struct _D3DMATRIX *D3DMatrix; // rax
  struct _D3DMATRIX *v4; // r8
  struct _D3DMATRIX v5; // [rsp+20h] [rbp-48h] BYREF

  TopByReference = (struct _D3DMATRIX *)CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
  D3DMatrix = CMILMatrix::GetD3DMatrix(TopByReference, &v5);
  *v4 = *D3DMatrix;
}
