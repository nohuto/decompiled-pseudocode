/*
 * XREFs of ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18002AA08
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18002B104 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002D218 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180016178 (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800161AC (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008138C (-SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CBrushRealizer@@MEAA@XZ @ 0x180081448 (--1CBrushRealizer@@MEAA@XZ.c)
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x180085114 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapSource(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        char a9)
{
  char v12; // r12
  struct CMILBrush *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v20; // eax
  _QWORD v21[2]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v22[14]; // [rsp+60h] [rbp-B8h] BYREF

  LocalMILObject<CImmediateBrushRealizer>::LocalMILObject<CImmediateBrushRealizer>(v22);
  v12 = 0;
  if ( a9 )
  {
    v20 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&IdentityMatrix, 0, 1);
    v16 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xF2Bu);
      goto LABEL_12;
    }
    v12 = 1;
  }
  CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(v21, *((_QWORD *)this + 415), a2);
  v13 = (struct CMILBrush *)*((_QWORD *)this + 415);
  if ( v13 )
    v13 = (struct CMILBrush *)((char *)v13 + 24);
  CBrushRealizer::SetRealizedBrush((CBrushRealizer *)v22, v13, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v14, &EVTDESC_ETWGUID_DRAWEVENT_Start, 1LL, *((unsigned int *)this + 1438));
  v15 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF44u);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64, _QWORD, _QWORD *, int))(**((_QWORD **)this + 44) + 80LL))(
            *((_QWORD *)this + 44),
            *((_QWORD *)this + 47),
            (char *)this + 56,
            (char *)this + 72,
            (char *)this + 2784,
            a4,
            0LL,
            v22,
            a8);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF4Du);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v18, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 1LL, *((unsigned int *)this + 1438));
    }
  }
  CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)v21);
  if ( v12 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_12:
  v22[0] = &CImmediateBrushRealizer::`vftable';
  CBrushRealizer::~CBrushRealizer((CBrushRealizer *)v22);
  return v16;
}
