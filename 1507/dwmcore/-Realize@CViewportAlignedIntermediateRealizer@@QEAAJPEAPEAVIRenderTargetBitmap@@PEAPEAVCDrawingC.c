/*
 * XREFs of ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x180122C84
 * Callers:
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBUBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18012164C (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBUBrushContext@@PEBVCMILMatrix@@1PEBV-$TMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@000PEAHPEAUMilRectF@@2@Z @ 0x1801225E4 (-CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@0.c)
 *     ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x18012294C (-CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPE.c)
 *     ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x180122AA8 (-CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEA.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180122B38 (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 *     MatrixPrependTranslate2D @ 0x180123B78 (MatrixPrependTranslate2D.c)
 *     ?DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z @ 0x180124EF4 (-DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z.c)
 */

__int64 __fastcall CViewportAlignedIntermediateRealizer::Realize(
        const struct CMILMatrix **this,
        struct IRenderTargetBitmap **a2,
        struct CDrawingContext **a3,
        struct CMILMatrix *a4,
        int *a5)
{
  unsigned int v9; // r15d
  CMILMatrix *v10; // rcx
  CViewportAlignedIntermediateRealizer *v11; // rcx
  CViewportAlignedIntermediateRealizer *v12; // rcx
  int SurfaceAndContext; // eax
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  float v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+64h] [rbp-9Ch]
  __int64 v20; // [rsp+6Ch] [rbp-94h]
  float v21; // [rsp+74h] [rbp-8Ch]
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  int v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+94h] [rbp-6Ch]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  _BYTE v30[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[16]; // [rsp+B0h] [rbp-50h] BYREF
  float v32[5]; // [rsp+C0h] [rbp-40h] BYREF
  float v33; // [rsp+D4h] [rbp-2Ch]
  float v34; // [rsp+F0h] [rbp-10h]
  float v35; // [rsp+F4h] [rbp-Ch]
  _BYTE v36[64]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v37[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v38[64]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v39[64]; // [rsp+1C0h] [rbp+C0h] BYREF

  v9 = 0;
  *a5 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  CMILMatrix::DecomposeMatrixIntoScaleAndRest(
    (const struct CMILMatrix *)((char *)*this + 4),
    (struct CMILMatrix *)v36,
    (struct CMILMatrix *)v39,
    (int *)&v15);
  if ( v15
    && ((v10 = this[2]) == 0LL
     || (CMILMatrix::DecomposeMatrixIntoScaleAndRest(
           v10,
           (struct CMILMatrix *)v37,
           (struct CMILMatrix *)v38,
           (int *)&v15),
         v15)) )
  {
    CViewportAlignedIntermediateRealizer::CalculateIdealSurfaceSpaceBaseTile(
      (CViewportAlignedIntermediateRealizer *)this,
      (const struct CMILMatrix *)((unsigned __int64)v37 & -(__int64)(this[2] != 0LL)),
      (const struct CMILMatrix *)((unsigned __int64)v38 & -(__int64)(this[2] != 0LL)),
      (const struct CMILMatrix *)v36,
      (const struct CMILMatrix *)((char *)*this + 4),
      a5,
      (struct MilRectF *)v31,
      (struct MilRectF *)v30);
    if ( !*a5 )
    {
      CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
        v11,
        (struct MilRectF *)v31,
        (struct MilRectF *)v30,
        a5,
        &v16,
        &v15,
        (struct CMILMatrix *)v32,
        (struct CMilPoint2F *)&v17);
      if ( !*a5 )
      {
        v25 = 0;
        v28 = 0;
        v19 = 0LL;
        v20 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 1065353216;
        v29 = 1065353216;
        v26 = COERCE_UNSIGNED_INT(v34 / v32[0]) ^ _xmm;
        v27 = COERCE_UNSIGNED_INT(v35 / v33) ^ _xmm;
        v21 = 1.0 / v33;
        v18 = 1.0 / v32[0];
        MatrixPrependTranslate2D((struct D2DMatrix *)&v18);
        CViewportAlignedIntermediateRealizer::CalculateSurfaceToWorldMapping(
          v12,
          (const struct CMILMatrix *)&v18,
          (const struct CMILMatrix *)((unsigned __int64)v38 & -(__int64)(this[2] != 0LL)),
          (const struct CMILMatrix *)v36,
          a4);
        SurfaceAndContext = CViewportAlignedIntermediateRealizer::CreateSurfaceAndContext(
                              (CViewportAlignedIntermediateRealizer *)this,
                              this[1],
                              (const struct CMILMatrix *)((unsigned __int64)v37 & -(__int64)(this[2] != 0LL)),
                              (const struct CMILMatrix *)v36,
                              (const struct CMILMatrix *)v32,
                              v16,
                              v15,
                              a2,
                              a3);
        v9 = SurfaceAndContext;
        if ( SurfaceAndContext < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SurfaceAndContext, 0xCFu);
          if ( *a2 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
            *a2 = 0LL;
          }
          if ( *a3 )
          {
            CMILCOMBase::InternalRelease((struct CDrawingContext *)((char *)*a3 + 8));
            *a3 = 0LL;
          }
        }
      }
    }
  }
  else
  {
    *a5 = 1;
  }
  return v9;
}
