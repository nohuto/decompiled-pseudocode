/*
 * XREFs of ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006ADCC
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006979C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B2EC (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18006948C (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18006960C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800A2C98 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSourceWithPartialOcclusion(
        CDrawingContext *this,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        unsigned __int32 a5,
        int a6,
        int a7,
        char *a8)
{
  void (__fastcall ***v8)(_QWORD, __int64); // rsi
  unsigned int v13; // r14d
  __int128 v14; // xmm0
  char v15; // bl
  __int128 v16; // xmm0
  char v17; // di
  char *v18; // rax
  char *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r9
  _BYTE *v22; // r8
  int v23; // eax
  int v25; // eax
  int v26; // [rsp+30h] [rbp-D0h]
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v28)(_QWORD, __int64); // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v32; // [rsp+F0h] [rbp-10h]
  _BYTE v33[64]; // [rsp+100h] [rbp+0h] BYREF
  int v34; // [rsp+140h] [rbp+40h]
  __int128 v35; // [rsp+150h] [rbp+50h] BYREF
  __int128 v36; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v37[3]; // [rsp+170h] [rbp+70h] BYREF
  int v38; // [rsp+188h] [rbp+88h]
  int v39; // [rsp+18Ch] [rbp+8Ch]
  int v40; // [rsp+190h] [rbp+90h]
  _BYTE v41[16]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v42; // [rsp+1A8h] [rbp+A8h]
  _QWORD v43[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v44; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v45[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v46; // [rsp+1E0h] [rbp+E0h] BYREF
  char v47; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = 0LL;
  v37[0] = &CRectanglesShape::`vftable';
  v40 = 0;
  v42 = 0LL;
  v37[1] = v41;
  v28 = 0LL;
  v37[2] = v41;
  v38 = 1;
  v39 = 1;
  v13 = 0;
  `vector constructor iterator'(
    (TemporaryConfiguration *)v45,
    0x10uLL,
    4uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  v14 = *a4;
  v27 = 0;
  v30 = 0;
  v35 = v14;
  v15 = 0;
  v16 = *a3;
  v17 = 0;
  v36 = v16;
  CMILMatrix::InferAffineMatrix((__int64)v29, (float *)&v36, (float *)&v35);
  v43[1] = &v46;
  v43[0] = v45;
  v18 = &v44;
  v19 = &v47;
  v20 = 2LL;
  do
  {
    *(_QWORD *)v18 = v19;
    v19 += 16;
    v18 += 8;
    --v20;
  }
  while ( v20 );
  if ( !CDrawingContext::CalcPartiallyVisibleRectangleSet((__int64)this, (__int64)&v35, a5, (__int64)v43, &v27) )
    goto LABEL_4;
  v32 = 0;
  v34 = 0;
  v15 = 1;
  CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 536), (struct CMILMatrix *)v31);
  CMILMatrix::Multiply((const struct CMILMatrix *)v29, (const struct CMILMatrix *)v31, (struct CMILMatrix *)v33);
  if ( !v27 )
    goto LABEL_6;
  v25 = CShape::BuildFromRectFs(v45, v27, &v28);
  v13 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x719u);
    v8 = v28;
    goto LABEL_8;
  }
  v8 = v28;
  v22 = v33;
  v17 = 1;
  v21 = v28;
  if ( !v28 )
  {
LABEL_4:
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v37, (const struct MilRectF *)&v35);
    v21 = v37;
    v22 = v29;
  }
  v23 = CDrawingContext::FillShapeWithBitmapSource(this, a2, (__int64)v22, (__int64)v21, a6, 0LL, v26, a7, v17);
  v13 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x742u);
    goto LABEL_8;
  }
LABEL_6:
  if ( a8 )
    *a8 = v15;
LABEL_8:
  if ( v8 )
    (**v8)(v8, 1LL);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v37);
  return v13;
}
