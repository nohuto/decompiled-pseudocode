/*
 * XREFs of ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002D218
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002AFC4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?InferAffineMatrix@CBaseMatrix@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180022A50 (-InferAffineMatrix@CBaseMatrix@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18002AA08 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18002AD28 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18005B580 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSourceWithPartialOcclusion(
        CDrawingContext *this,
        __int64 a2,
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
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v27)(_QWORD, __int64); // [rsp+58h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v32[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v33[64]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v34[2]; // [rsp+160h] [rbp+60h] BYREF
  char v35; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v36[16]; // [rsp+180h] [rbp+80h] BYREF
  char v37; // [rsp+190h] [rbp+90h] BYREF
  char v38; // [rsp+1A0h] [rbp+A0h] BYREF

  v9 = 0LL;
  v27 = 0LL;
  v13 = 0;
  CRectangleShape::CRectangleShape((CRectangleShape *)v30, 0.0, 0.0, 0.0, 0.0);
  `vector constructor iterator'(
    (Mesh::MeshLine *)v36,
    0x10uLL,
    4,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  v14 = *a4;
  v26 = 0;
  v15 = 0;
  v28 = v14;
  v16 = *a3;
  v17 = 0;
  v29 = v16;
  CBaseMatrix::InferAffineMatrix((__int64)v31, (float *)&v29, (float *)&v28);
  v34[1] = &v37;
  v34[0] = v36;
  v18 = &v35;
  v19 = &v38;
  v20 = 2LL;
  do
  {
    *(_QWORD *)v18 = v19;
    v19 += 16;
    v18 += 8;
    --v20;
  }
  while ( v20 );
  if ( !CDrawingContext::CalcPartiallyVisibleRectangleSet((__int64)this, (__int64)&v28, a5, (__int64)v34, &v26) )
    goto LABEL_4;
  v15 = 1;
  CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)v33);
  D2DMatrixMultiply((struct D2DMatrix *)v32, (const struct D2DMatrix *)v31, (const struct D2DMatrix *)v33);
  if ( !v26 )
    goto LABEL_6;
  v25 = CShape::BuildFromRectFs(v36, v26, &v27);
  v13 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x715u);
    v9 = v27;
    goto LABEL_8;
  }
  v9 = v27;
  v22 = v32;
  v17 = 1;
  v21 = v27;
  if ( !v27 )
  {
LABEL_4:
    CRectangleShape::Set((CRectangleShape *)v30, (const struct MilRectF *)&v28);
    v21 = v30;
    v22 = v31;
  }
  v23 = CDrawingContext::FillShapeWithBitmapSource(this, a2, (__int64)v22, (__int64)v21, a6, 0LL, 0, a7, v17);
  v13 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x73Eu);
    goto LABEL_8;
  }
LABEL_6:
  if ( a8 )
    *a8 = v15;
LABEL_8:
  if ( v9 )
    (**v9)(v9, 1LL);
  CRectangleShape::~CRectangleShape((CRectangleShape *)v30);
  return v13;
}
