/*
 * XREFs of ?GetWorldTransform4x4@CDrawingContext@@EEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x18010DB90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?GetD2D1Matrix4x4@CBaseMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x1800BCC08 (-GetD2D1Matrix4x4@CBaseMatrix@@QEBA-AUD2D_MATRIX_4X4_F@@XZ.c)
 */

void __fastcall CDrawingContext::GetWorldTransform4x4(CDrawingContext *this, struct D2D_MATRIX_4X4_F *a2)
{
  struct D2D_MATRIX_4X4_F *TopByReference; // rax
  struct D2D_MATRIX_4X4_F *D2D1Matrix4x4; // rax
  struct D2D_MATRIX_4X4_F *v4; // r8
  struct D2D_MATRIX_4X4_F v5; // [rsp+20h] [rbp-48h] BYREF

  TopByReference = (struct D2D_MATRIX_4X4_F *)CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
  D2D1Matrix4x4 = CBaseMatrix::GetD2D1Matrix4x4(TopByReference, &v5);
  *v4 = *D2D1Matrix4x4;
}
