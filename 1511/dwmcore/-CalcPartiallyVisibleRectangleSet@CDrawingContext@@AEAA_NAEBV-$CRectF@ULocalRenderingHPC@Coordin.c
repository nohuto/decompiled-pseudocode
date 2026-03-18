/*
 * XREFs of ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003F908
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@PEAI@Z @ 0x18003F7B0 (-CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x180042618 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800550FC (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  CBaseMatrixStack *v10; // r8
  CBaseMatrix *v11; // rax
  __int64 v12; // rdx
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
  int v24; // r9d
  __int64 v25; // rcx
  float *v27; // rax
  __int64 v28; // rcx
  float v29; // xmm0_4
  _BYTE v30[8]; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-59h] BYREF
  float v32; // [rsp+58h] [rbp-51h]
  float v33; // [rsp+5Ch] [rbp-4Dh]
  __int64 v34; // [rsp+60h] [rbp-49h] BYREF
  float v35; // [rsp+68h] [rbp-41h]
  float v36; // [rsp+6Ch] [rbp-3Dh]
  float v37[3]; // [rsp+70h] [rbp-39h] BYREF
  char v38; // [rsp+7Ch] [rbp-2Dh] BYREF

  v8 = 0;
  TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(a1 + 456));
  if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(TopByReference) )
  {
    v11 = CBaseMatrixStack::GetTopByReference(v10);
    v13 = *(float *)(v12 + 4);
    v14 = *(float *)(v12 + 8);
    v15 = *(float *)(v12 + 12);
    LODWORD(v31) = *(_DWORD *)v12;
    *((float *)&v31 + 1) = v13;
    v32 = v14;
    v33 = v15;
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
        (struct MilPoint2F *const)v37);
      v27 = (float *)&v38;
      v34 = *(_QWORD *)v37;
      v28 = 3LL;
      v21 = v37[1];
      v20 = v37[0];
      v31 = *(_QWORD *)v37;
      v19 = v37[1];
      v18 = v37[0];
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
    v33 = v21;
    v32 = v20;
    v31 = __PAIR64__(LODWORD(v19), LODWORD(v18));
    CScopedClipStack::GetTopClipBoundsInScope(a1 + 680, &v34);
    if ( *(float *)&v34 > v23 )
    {
      v23 = *(float *)&v34;
      LODWORD(v31) = v34;
    }
    if ( *((float *)&v34 + 1) > v22 )
    {
      v22 = *((float *)&v34 + 1);
      HIDWORD(v31) = HIDWORD(v34);
    }
    if ( v20 > v35 )
    {
      v20 = v35;
      v32 = v35;
    }
    if ( v21 > v36 )
    {
      v21 = v36;
      v33 = v36;
    }
    if ( v20 <= v23 || v21 <= v22 )
    {
      v33 = 0.0;
      v32 = 0.0;
      v31 = 0LL;
    }
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v31) )
    {
      *a5 = 0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 5967) )
        return v8;
      v25 = *(_QWORD *)(a1 + 5776);
      if ( !v25 )
        return v8;
      LOBYTE(v24) = *(_BYTE *)(a1 + 5640) == 0;
      v30[0] = 0;
      if ( (int)COcclusionContext::ComputeVisibleRegion(v25, (unsigned int)&v31, a3, v24, (__int64)v30, a4, (__int64)a5) < 0
        || !v30[0] )
      {
        return v8;
      }
    }
    return 1;
  }
  return v8;
}
