/*
 * XREFs of ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x18005D9C8
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x18005A6C4 (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV4@2PEAH@Z @ 0x18005CA78 (-GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV-$TMilRect_@MUMi.c)
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18005DB98 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall CTileBrushUtils::CalculateTileBrushMapping(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float *a8,
        float *a9,
        unsigned int a10,
        int a11,
        float *a12,
        float *a13,
        _OWORD *a14,
        _OWORD *a15,
        struct D2DMatrix *a16,
        _DWORD *a17)
{
  unsigned __int8 result; // al
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v28; // [rsp+60h] [rbp-89h] BYREF
  __int128 v29; // [rsp+70h] [rbp-79h]
  __int128 v30; // [rsp+80h] [rbp-69h]
  __int128 v31; // [rsp+90h] [rbp-59h]
  _OWORD v32[4]; // [rsp+A0h] [rbp-49h] BYREF

  *a17 = 0;
  result = CTileBrushUtils::GetAbsoluteViewRectangles(a6, a7, a8, a9, a12, (__int64)a13, a17);
  if ( !*a17 )
  {
    *(_QWORD *)((char *)&v31 + 4) = 0LL;
    LODWORD(v31) = 0;
    *(_QWORD *)&v30 = 0LL;
    *((_QWORD *)&v29 + 1) = 0LL;
    LODWORD(v29) = 0;
    v28 = a10;
    DWORD1(v29) = a11;
    *((_QWORD *)&v30 + 1) = 1065353216LL;
    HIDWORD(v31) = 1065353216;
    CTileBrushUtils::CalculateViewboxToViewportMapping(a12, a13, a3, a4, a5, v32);
    D2DMatrixMultiply((struct D2DMatrix *)&v28, (const struct D2DMatrix *)&v28, (const struct D2DMatrix *)v32);
    CBrushTypeUtils::GetBrushTransform(a2, a1, a8, v32);
    result = (unsigned __int8)D2DMatrixMultiply(a16, (const struct D2DMatrix *)&v28, (const struct D2DMatrix *)v32);
    if ( a14 )
    {
      v19 = v29;
      *a14 = v28;
      v20 = v30;
      a14[1] = v19;
      v21 = v31;
      a14[2] = v20;
      a14[3] = v21;
    }
    if ( a15 )
    {
      v22 = v32[1];
      *a15 = v32[0];
      v23 = v32[2];
      a15[1] = v22;
      v24 = v32[3];
      a15[2] = v23;
      a15[3] = v24;
    }
  }
  return result;
}
