/*
 * XREFs of ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18006B2DC
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x180004A08 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006979C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006B5F4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18006F230 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18008FEF0 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x180162644 (-Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 */

__int64 __fastcall CDrawingContext::FillShapeForBounds(CDrawingContext *this, struct CShape *a2)
{
  unsigned __int64 v2; // r15
  char v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, __int64, __int64, char *, char *, struct CShape *, _QWORD, __int64, int); // rax
  int v13; // eax
  const struct CMILMatrix *TopByReference; // r14
  int v16; // eax
  int v17; // eax
  char *v18; // [rsp+20h] [rbp-69h]
  __int64 v19; // [rsp+38h] [rbp-51h]
  int v20; // [rsp+40h] [rbp-49h]
  _QWORD v21[3]; // [rsp+50h] [rbp-39h] BYREF
  int v22; // [rsp+68h] [rbp-21h]
  int v23; // [rsp+6Ch] [rbp-1Dh]
  int v24; // [rsp+70h] [rbp-19h]
  _BYTE v25[16]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v26; // [rsp+88h] [rbp-1h]
  _BYTE v27[16]; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v28[16]; // [rsp+A0h] [rbp+17h] BYREF

  v24 = 0;
  v26 = 0LL;
  v2 = (unsigned __int64)this + 128;
  v21[0] = &CRectanglesShape::`vftable';
  v22 = 1;
  v21[1] = v25;
  v23 = 1;
  v21[2] = v25;
  v5 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 128)) )
  {
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
    v16 = (*(__int64 (__fastcall **)(struct CShape *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v27, 0LL);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x573u);
      goto LABEL_9;
    }
    CMILMatrix::Transform2DBoundsWithBorderMode(TopByReference, v27, *((unsigned int *)this + 82), v28);
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v21, (const struct MilRectF *)v28);
    a2 = (struct CShape *)v21;
    v17 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v7 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x58Au);
      goto LABEL_9;
    }
    v5 = 1;
  }
  v6 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x58Eu);
  }
  else
  {
    v8 = *((_QWORD *)this + 54);
    v9 = (char *)this + 144;
    v20 = *((_DWORD *)this + 88);
    v10 = *((_QWORD *)this + 57);
    v19 = *((_QWORD *)this + 382);
    v11 = v2 & -(__int64)(this != 0LL);
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, char *, char *, struct CShape *, _QWORD, __int64, int))(*(_QWORD *)v8 + 80LL);
    v18 = (char *)this + 3264;
    if ( (char *)v12 == (char *)CSwRenderTargetGetBounds::DrawPath )
      v13 = CSwRenderTargetGetBounds::DrawPath(v8, v10, v11, v9, v18, a2, 0LL, v19, v20);
    else
      v13 = v12(v8, v10, v11, v9, v18, a2, 0LL, v19, v20);
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x59Bu);
  }
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_9:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
  return v7;
}
