/*
 * XREFs of ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x180042618
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18003FC14 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18003F628 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003F908 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?InferAffineMatrix@CBaseMatrix@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180047700 (-InferAffineMatrix@CBaseMatrix@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800659B0 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSourceWithPartialOcclusion(
        struct CMILBrush **this,
        int a2,
        __int128 *a3,
        __int128 *a4,
        int a5,
        int a6,
        int a7,
        char *a8)
{
  void (__fastcall ***v9)(_QWORD, __int64); // rsi
  unsigned int v13; // r14d
  __int128 v14; // xmm0
  char v15; // bl
  __int128 v16; // xmm0
  char v17; // di
  char *v18; // rax
  char *v19; // rcx
  __int64 v20; // rdx
  _BYTE *v21; // r9
  _BYTE *v22; // r8
  int v23; // eax
  int v25; // eax
  int v26; // [rsp+30h] [rbp-D0h]
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v28)(_QWORD, __int64); // [rsp+58h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v31[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v34[64]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v35[2]; // [rsp+160h] [rbp+60h] BYREF
  char v36; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v37[16]; // [rsp+180h] [rbp+80h] BYREF
  char v38; // [rsp+190h] [rbp+90h] BYREF
  char v39; // [rsp+1A0h] [rbp+A0h] BYREF

  v9 = 0LL;
  v28 = 0LL;
  v13 = 0;
  CRectangleShape::CRectangleShape((CRectangleShape *)v31, 0.0, 0.0, 0.0, 0.0);
  `vector constructor iterator'(
    (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v37,
    0x10uLL,
    4,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  v14 = *a4;
  v27 = 0;
  v15 = 0;
  v29 = v14;
  v16 = *a3;
  v17 = 0;
  v30 = v16;
  CBaseMatrix::InferAffineMatrix(v32, &v30, &v29);
  v35[1] = &v38;
  v35[0] = v37;
  v18 = &v36;
  v19 = &v39;
  v20 = 2LL;
  do
  {
    *(_QWORD *)v18 = v19;
    v19 += 16;
    v18 += 8;
    --v20;
  }
  while ( v20 );
  if ( !CDrawingContext::CalcPartiallyVisibleRectangleSet((__int64)this, (__int64)&v29, a5, (__int64)v35, &v27) )
    goto LABEL_4;
  v15 = 1;
  CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 57), (struct CBaseMatrix *)v34);
  D2DMatrixMultiply((struct D2DMatrix *)v33, (const struct D2DMatrix *)v32, (const struct D2DMatrix *)v34);
  if ( !v27 )
    goto LABEL_6;
  v25 = CShape::BuildFromRectFs(v37, v27, &v28);
  v13 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x71Cu);
    v9 = v28;
    goto LABEL_8;
  }
  v9 = v28;
  v22 = v33;
  v17 = 1;
  v21 = v28;
  if ( !v28 )
  {
LABEL_4:
    CRectangleShape::Set((CRectangleShape *)v31, (const struct MilRectF *)&v29);
    v21 = v31;
    v22 = v32;
  }
  v23 = CDrawingContext::FillShapeWithBitmapSource(this, a2, (__int64)v22, (__int64)v21, a6, 0LL, v26, a7, v17);
  v13 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x745u);
    goto LABEL_8;
  }
LABEL_6:
  if ( a8 )
    *a8 = v15;
LABEL_8:
  if ( v9 )
    (**v9)(v9, 1LL);
  CRectangleShape::~CRectangleShape((CRectangleShape *)v31);
  return v13;
}
