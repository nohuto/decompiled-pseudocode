/*
 * XREFs of ?CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@000PEAHPEAUMilRectF@@2@Z @ 0x180137B50
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801381F0 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036E98 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800476D8 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CViewportAlignedIntermediateRealizer::CalculateIdealSurfaceSpaceBaseTile(
        CViewportAlignedIntermediateRealizer *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        const struct CMILMatrix *a5,
        int *a6,
        struct MilRectF *a7,
        struct MilRectF *a8)
{
  __int64 v9; // rcx
  const struct CBaseMatrix *v13; // rdx
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm2_4
  __int128 v19; // [rsp+20h] [rbp-71h] BYREF
  __int128 v20; // [rsp+30h] [rbp-61h] BYREF
  _BYTE v21[64]; // [rsp+40h] [rbp-51h] BYREF

  v9 = *(_QWORD *)this;
  v20 = *(_OWORD *)(v9 + 152);
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(v9 + 168)) )
  {
    if ( !CBaseMatrix::Invert((CBaseMatrix *)v21, v13) )
      goto LABEL_21;
    CBaseMatrix::Transform2DBounds(
      (CBaseMatrix *)v21,
      (const struct MilRectF *)(*(_QWORD *)this + 168LL),
      (struct MilRectF *)&v19);
    v14 = *(float *)&v20;
    if ( *(float *)&v19 > *(float *)&v20 )
    {
      v14 = *(float *)&v19;
      LODWORD(v20) = v19;
    }
    v15 = *((float *)&v20 + 1);
    if ( *((float *)&v19 + 1) > *((float *)&v20 + 1) )
    {
      v15 = *((float *)&v19 + 1);
      DWORD1(v20) = DWORD1(v19);
    }
    v16 = *((float *)&v20 + 2);
    if ( *((float *)&v20 + 2) > *((float *)&v19 + 2) )
    {
      v16 = *((float *)&v19 + 2);
      DWORD2(v20) = DWORD2(v19);
    }
    v17 = *((float *)&v20 + 3);
    if ( *((float *)&v20 + 3) > *((float *)&v19 + 3) )
    {
      v17 = *((float *)&v19 + 3);
      HIDWORD(v20) = HIDWORD(v19);
    }
    if ( v16 <= v14 || v17 <= v15 )
      goto LABEL_21;
  }
  if ( a3 )
  {
    if ( !CBaseMatrix::Invert((CBaseMatrix *)v21, a3) )
    {
LABEL_21:
      *a6 = 1;
      return;
    }
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v21, (const struct MilRectF *)&v20, (struct MilRectF *)&v20);
  }
  if ( a2 )
    CBaseMatrix::Transform2DBounds(
      a2,
      (CViewportAlignedIntermediateRealizer *)((char *)this + 24),
      (struct MilRectF *)&v19);
  else
    v19 = *(_OWORD *)((char *)this + 24);
  CBaseMatrix::Transform2DBounds(a4, (const struct MilRectF *)&v19, a7);
  CBaseMatrix::Transform2DBounds(a4, (const struct MilRectF *)&v20, a8);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a7 + 2) - *(float *)a7)) & _xmm) <= 0.0000011920929 )
    goto LABEL_21;
  v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a7 + 3) - *((float *)a7 + 1))) & _xmm);
  if ( v18 <= 0.0000011920929 )
    goto LABEL_21;
}
