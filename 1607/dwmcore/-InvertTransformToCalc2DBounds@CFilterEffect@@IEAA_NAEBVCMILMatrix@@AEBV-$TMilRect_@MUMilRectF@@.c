/*
 * XREFs of ?InvertTransformToCalc2DBounds@CFilterEffect@@IEAA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18014CB44
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@1PEAV3@2@Z @ 0x180014CA0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@1PEAV3@2@Z @ 0x180156EB0 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180110B1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

char __fastcall CFilterEffect::InvertTransformToCalc2DBounds(
        __int64 a1,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  char v5; // bl
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  float *v10; // r9
  __int64 v11; // r10
  __int128 v13; // [rsp+20h] [rbp-49h]
  __int128 v14; // [rsp+50h] [rbp-19h]
  __int128 v15; // [rsp+70h] [rbp+7h] BYREF
  __int128 v16; // [rsp+80h] [rbp+17h]
  __int128 v17; // [rsp+90h] [rbp+27h]
  __int128 v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+B0h] [rbp+47h]

  v3 = *(_OWORD *)a2;
  v4 = *(_OWORD *)(a2 + 16);
  v5 = 1;
  v19 = *(_DWORD *)(a2 + 64);
  v15 = v3;
  v6 = *(_OWORD *)(a2 + 32);
  v16 = v4;
  v7 = *(_OWORD *)(a2 + 48);
  v17 = v6;
  LODWORD(v6) = *(_DWORD *)(a2 + 32);
  v18 = v7;
  if ( *(float *)&v6 == 0.0 && *(float *)(a2 + 36) == 0.0 && *(float *)(a2 + 40) == 0.0 && *(float *)(a2 + 44) == 0.0 )
  {
    v8 = *(_OWORD *)a2;
    v19 = 0;
    v13 = v8;
    v9 = *(_OWORD *)(a2 + 16);
    v17 = _xmm;
    v14 = *(_OWORD *)(a2 + 48);
    v16 = v9;
    v15 = v13;
    v18 = v14;
  }
  if ( !CMILMatrix::Invert((CMILMatrix *)&v15, a2, a3) )
    return 0;
  CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v15, v11, v10);
  return v5;
}
