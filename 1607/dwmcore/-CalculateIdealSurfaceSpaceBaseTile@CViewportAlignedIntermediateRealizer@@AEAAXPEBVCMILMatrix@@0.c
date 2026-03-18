/*
 * XREFs of ?CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@000PEAHPEAUMilRectF@@2@Z @ 0x180160BB4
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801612C0 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B91C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
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
  __int128 v12; // xmm0
  float *v13; // rcx
  __int64 v14; // r9
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  _BYTE v20[64]; // [rsp+20h] [rbp-79h] BYREF
  int v21; // [rsp+60h] [rbp-39h]
  __int128 v22; // [rsp+70h] [rbp-29h] BYREF
  __int128 v23; // [rsp+80h] [rbp-19h] BYREF

  v12 = *(_OWORD *)(*(_QWORD *)this + 160LL);
  v13 = (float *)(*(_QWORD *)this + 176LL);
  v23 = v12;
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v13) )
  {
    v21 = 0;
    if ( !CMILMatrix::SetToInverse((CMILMatrix *)v20, a5) )
      goto LABEL_21;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v20, v14, (float *)&v22);
    v15 = *(float *)&v23;
    if ( *(float *)&v22 > *(float *)&v23 )
    {
      v15 = *(float *)&v22;
      LODWORD(v23) = v22;
    }
    v16 = *((float *)&v23 + 1);
    if ( *((float *)&v22 + 1) > *((float *)&v23 + 1) )
    {
      v16 = *((float *)&v22 + 1);
      DWORD1(v23) = DWORD1(v22);
    }
    v17 = *((float *)&v23 + 2);
    if ( *((float *)&v23 + 2) > *((float *)&v22 + 2) )
    {
      v17 = *((float *)&v22 + 2);
      DWORD2(v23) = DWORD2(v22);
    }
    v18 = *((float *)&v23 + 3);
    if ( *((float *)&v23 + 3) > *((float *)&v22 + 3) )
    {
      v18 = *((float *)&v22 + 3);
      HIDWORD(v23) = HIDWORD(v22);
    }
    if ( v17 <= v15 || v18 <= v16 )
      goto LABEL_21;
  }
  if ( a3 )
  {
    v21 = 0;
    if ( !CMILMatrix::SetToInverse((CMILMatrix *)v20, a3) )
    {
LABEL_21:
      *a6 = 1;
      return;
    }
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v20, (__int64)&v23, (float *)&v23);
  }
  if ( a2 )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a2, (__int64)this + 24, (float *)&v22);
  else
    v22 = *(_OWORD *)((char *)this + 24);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)a4, (__int64)&v22, (float *)a7);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)a4, (__int64)&v23, (float *)a8);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a7 + 2) - *(float *)a7)) & _xmm) <= 0.0000011920929 )
    goto LABEL_21;
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a7 + 3) - *((float *)a7 + 1))) & _xmm);
  if ( v19 <= 0.0000011920929 )
    goto LABEL_21;
}
