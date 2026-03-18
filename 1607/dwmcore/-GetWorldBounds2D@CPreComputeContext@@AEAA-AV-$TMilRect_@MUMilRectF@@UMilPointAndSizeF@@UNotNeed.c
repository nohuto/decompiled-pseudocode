/*
 * XREFs of ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180112130
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058F60 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Top@CBaseClipStack@@IEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A37D8 (-Top@CBaseClipStack@@IEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

float *__fastcall CPreComputeContext::GetWorldBounds2D(__int64 a1, float *a2, __int64 a3, float a4)
{
  __int64 v6; // r10
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  _OWORD v11[4]; // [rsp+28h] [rbp-89h] BYREF
  int v12; // [rsp+68h] [rbp-49h]
  _OWORD v13[4]; // [rsp+78h] [rbp-39h] BYREF
  int v14; // [rsp+B8h] [rbp+7h]
  float v15[6]; // [rsp+C0h] [rbp+Fh] BYREF

  v12 = 0;
  CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 112), (struct CMILMatrix *)v11);
  v13[0] = v11[0];
  v14 = v12;
  v13[1] = v11[1];
  v13[2] = v11[2];
  v13[3] = v11[3];
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v13, v6, v15);
  *(_OWORD *)a2 = *(_OWORD *)v15;
  if ( a4 > 0.0 && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v7 = a2[1] - a4;
    *a2 = *a2 - a4;
    v8 = a4 + a2[2];
    v9 = a4 + a2[3];
    a2[1] = v7;
    a2[2] = v8;
    a2[3] = v9;
  }
  if ( *(_DWORD *)(a1 + 152) )
  {
    CBaseClipStack::Top(a1 + 144, v15);
    if ( v15[0] > *a2 )
      *a2 = v15[0];
    if ( v15[1] > a2[1] )
      a2[1] = v15[1];
    if ( a2[2] > v15[2] )
      a2[2] = v15[2];
    if ( a2[3] > v15[3] )
      a2[3] = v15[3];
    if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    {
      a2[3] = 0.0;
      a2[2] = 0.0;
      a2[1] = 0.0;
      *a2 = 0.0;
    }
  }
  return a2;
}
