/*
 * XREFs of ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18000CD00
 * Callers:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x18000C3F4 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 *     ?CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@PEAI@Z @ 0x18002ABCC (-CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV-$TMilRect_@MUMilRectF@.c)
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800E0B70 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 * Callees:
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18000CEA8 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall MILMatrix3x2::Transform2DBounds(MILMatrix3x2 *this, const struct MilRectF *a2, struct MilRectF *a3)
{
  int v3; // xmm2_4
  int v4; // xmm1_4
  __int64 v5; // r9
  float v6; // xmm2_4
  float *v7; // rcx
  int v8; // xmm4_4
  int v9; // edx
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // [rsp+20h] [rbp-30h] BYREF
  float v13; // [rsp+24h] [rbp-2Ch]
  int v14; // [rsp+28h] [rbp-28h]
  _DWORD v15[2]; // [rsp+2Ch] [rbp-24h] BYREF
  int v16; // [rsp+34h] [rbp-1Ch]
  int v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+3Ch] [rbp-14h]

  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 2);
  v13 = *((float *)a2 + 1);
  *(float *)v15 = v13;
  v16 = *((_DWORD *)a2 + 3);
  v18 = v16;
  v12 = v3;
  v14 = v4;
  v15[1] = v3;
  v17 = v4;
  MILMatrix3x2::TransformPoints(this, (const struct MilPoint2F *)&v12, (struct MilPoint2F *)&v12, (unsigned int)a3);
  v6 = v13;
  v7 = (float *)v15;
  v8 = v12;
  v9 = 1;
  *(float *)(v5 + 4) = v13;
  *(float *)(v5 + 12) = v6;
  *(_DWORD *)v5 = v8;
  *(_DWORD *)(v5 + 8) = v8;
  do
  {
    v10 = *(v7 - 1);
    if ( *(float *)v5 > v10 )
    {
      *(float *)v5 = v10;
    }
    else if ( v10 > *(float *)(v5 + 8) )
    {
      *(float *)(v5 + 8) = v10;
    }
    v11 = *v7;
    if ( v6 > *v7 )
    {
      v6 = *v7;
    }
    else if ( v11 > *(float *)(v5 + 12) )
    {
      *(float *)(v5 + 12) = v11;
    }
    ++v9;
    v7 += 2;
  }
  while ( (unsigned __int64)v9 < 4 );
  *(float *)(v5 + 4) = v6;
}
