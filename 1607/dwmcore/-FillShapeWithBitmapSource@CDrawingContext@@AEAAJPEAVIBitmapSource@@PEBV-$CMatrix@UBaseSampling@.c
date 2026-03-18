/*
 * XREFs of ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18006948C
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x180004A08 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006ADCC (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800226EC (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x18002271C (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18002E9F4 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18002EA8C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x1800AF874 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
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
  char v11; // si
  struct CMILBrush *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  int v19; // eax
  _QWORD v20[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[14]; // [rsp+60h] [rbp-A8h] BYREF

  LocalMILObject<CImmediateBrushRealizer>::LocalMILObject<CImmediateBrushRealizer>(v21);
  v11 = 0;
  if ( a9 )
  {
    v19 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v15 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF19u);
      goto LABEL_12;
    }
    v11 = 1;
  }
  CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(v20, *((_QWORD *)this + 477));
  v12 = (struct CMILBrush *)*((_QWORD *)this + 477);
  if ( v12 )
    v12 = (struct CMILBrush *)((char *)v12 + 24);
  CLegacyMilBrushRealizer::SetRealizedBrush((CLegacyMilBrushRealizer *)v21, v12, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 1LL, *((unsigned int *)this + 1620));
  v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF32u);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64, _QWORD, _QWORD *, int))(**((_QWORD **)this + 54) + 80LL))(
            *((_QWORD *)this + 54),
            *((_QWORD *)this + 57),
            (char *)this + 128,
            (char *)this + 144,
            (char *)this + 3264,
            a4,
            0LL,
            v21,
            a8);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xF3Bu);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 1LL, *((unsigned int *)this + 1620));
    }
  }
  CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)v20);
  if ( v11 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_12:
  v21[0] = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v21);
  return v15;
}
