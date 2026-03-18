/*
 * XREFs of ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18002AD28
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@PEAI@Z @ 0x18002ABCC (-CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002D218 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18001F304 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcPartiallyVisibleRectangleSet(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5)
{
  char v8; // bl
  CBaseMatrix *TopByReference; // rax
  CBaseMatrixStack *v10; // r9
  CBaseMatrix *v11; // rax
  __int64 v12; // r8
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float *v16; // rcx
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  __int64 v24; // rcx
  char v25; // r9
  float *v27; // rax
  __int64 v28; // rcx
  float v29; // xmm0_4
  _BYTE v30[8]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v31; // [rsp+50h] [rbp-59h] BYREF
  __int64 v32; // [rsp+60h] [rbp-49h] BYREF
  float v33; // [rsp+68h] [rbp-41h]
  float v34; // [rsp+6Ch] [rbp-3Dh]
  __int64 v35; // [rsp+70h] [rbp-39h] BYREF
  char v36; // [rsp+7Ch] [rbp-2Dh] BYREF

  v8 = 0;
  TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(a1 + 456));
  if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(TopByReference) )
  {
    v11 = CBaseMatrixStack::GetTopByReference(v10);
    v13 = *(float *)(v12 + 4);
    v14 = *(float *)(v12 + 8);
    v15 = *(float *)(v12 + 12);
    LODWORD(v31) = *(_DWORD *)v12;
    *(_QWORD *)((char *)&v31 + 4) = __PAIR64__(LODWORD(v14), LODWORD(v13));
    *((float *)&v31 + 3) = v15;
    if ( CBaseMatrix::IsExactlyPureTranslate(v11) )
    {
      v18 = v16[12] + v17;
      v19 = v16[13] + v13;
      v20 = v16[12] + v14;
      v21 = v16[13] + v15;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v16,
        (const struct MilRectF *)&v31,
        (struct MilPoint2F *const)&v35);
      v27 = (float *)&v36;
      v32 = v35;
      v28 = 3LL;
      v21 = *((float *)&v35 + 1);
      LODWORD(v20) = v35;
      *(_QWORD *)&v31 = v35;
      v19 = *((float *)&v35 + 1);
      LODWORD(v18) = v35;
      do
      {
        v29 = *(v27 - 1);
        if ( v18 > v29 )
          v18 = *(v27 - 1);
        if ( v19 > *v27 )
          v19 = *v27;
        if ( v29 > v20 )
          v20 = *(v27 - 1);
        if ( *v27 > v21 )
          v21 = *v27;
        v27 += 2;
        --v28;
      }
      while ( v28 );
    }
    *((_QWORD *)&v31 + 1) = __PAIR64__(LODWORD(v21), LODWORD(v20));
    *(_QWORD *)&v31 = __PAIR64__(LODWORD(v19), LODWORD(v18));
    CScopedClipStack::GetTopClipBoundsInScope(a1 + 680, &v32);
    if ( *(float *)&v32 > v23 )
    {
      v23 = *(float *)&v32;
      LODWORD(v31) = v32;
    }
    if ( *((float *)&v32 + 1) > v22 )
    {
      v22 = *((float *)&v32 + 1);
      DWORD1(v31) = HIDWORD(v32);
    }
    if ( v20 > v33 )
    {
      v20 = v33;
      *((float *)&v31 + 2) = v33;
    }
    if ( v21 > v34 )
    {
      v21 = v34;
      *((float *)&v31 + 3) = v34;
    }
    if ( v20 <= v23 || v21 <= v22 )
      v31 = 0uLL;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v31) )
    {
      *a5 = 0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 5931) )
        return v8;
      v24 = *(_QWORD *)(a1 + 5744);
      if ( !v24 )
        return v8;
      v25 = *(_BYTE *)(a1 + 5608) == 0;
      v30[0] = 0;
      if ( (int)COcclusionContext::ComputeVisibleRegion(v24, &v31, a3, v25, (__int64)v30, a4, a5) < 0 || !v30[0] )
        return v8;
    }
    return 1;
  }
  return v8;
}
