/*
 * XREFs of ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18002D784
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002AFC4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18002B104 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180022D40 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x180043F90 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Transform3DBounds@@YAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@W4Enum@MilBitmapBorderMode@@PEAV1@@Z @ 0x180125448 (-Transform3DBounds@@YAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 */

__int64 __fastcall CDrawingContext::FillShapeForBounds(CDrawingContext *this, struct CShape *a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r10
  int v8; // r12d
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, _QWORD, unsigned __int64, char *, char *, struct CShape *, _QWORD, __int64, int); // r15
  int v13; // eax
  int v15; // eax
  int v16; // eax
  _QWORD v17[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v19[32]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v20[64]; // [rsp+90h] [rbp-88h] BYREF

  CRectangleShape::CRectangleShape((CRectangleShape *)v19, 0.0, 0.0, 0.0, 0.0);
  v4 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 56)) )
  {
    v15 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v17, 0LL);
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x567u);
      goto LABEL_9;
    }
    CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)v20);
    Transform3DBounds(v17, v20, *((unsigned int *)this + 62), v18);
    CRectangleShape::Set((CRectangleShape *)v19, (const struct MilRectF *)v18);
    a2 = (struct CShape *)v19;
    v16 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&IdentityMatrix, 0, 1);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x581u);
      goto LABEL_9;
    }
    v4 = 1;
  }
  v5 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x585u);
  }
  else
  {
    v7 = *((_QWORD *)this + 47);
    v8 = *((_DWORD *)this + 68);
    v9 = *((_QWORD *)this + 328);
    v17[0] = v7;
    v10 = ((unsigned __int64)this + 56) & -(__int64)(this != 0LL);
    v11 = *((_QWORD *)this + 44);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *, char *, struct CShape *, _QWORD, __int64, int))(*(_QWORD *)v11 + 80LL);
    if ( (char *)v12 == (char *)CSwRenderTargetGetBounds::DrawPath )
      v13 = CSwRenderTargetGetBounds::DrawPath(v11, v7, v10, (char *)this + 72, (char *)this + 2784, a2, 0LL, v9, v8);
    else
      v13 = v12(v11, v17[0], v10, (char *)this + 72, (char *)this + 2784, a2, 0LL, v9, v8);
    v6 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x592u);
  }
  if ( v4 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_9:
  CRectangleShape::~CRectangleShape((CRectangleShape *)v19);
  return v6;
}
