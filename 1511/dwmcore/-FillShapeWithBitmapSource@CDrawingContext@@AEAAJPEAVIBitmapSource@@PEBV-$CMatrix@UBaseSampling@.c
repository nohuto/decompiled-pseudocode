/*
 * XREFs of ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18003F628
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18003FD48 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x180042618 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008A4AC (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18008A57C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x1800AC364 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800ACCBC (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800ACCF0 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapSource(
        struct CMILBrush **this,
        int a2,
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
  _BYTE v21[16]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v22[14]; // [rsp+60h] [rbp-B8h] BYREF

  LocalMILObject<CImmediateBrushRealizer>::LocalMILObject<CImmediateBrushRealizer>(v22);
  v12 = 0;
  if ( a9 )
  {
    v20 = CDrawingContext::PushTransformInternal(
            (CDrawingContext *)this,
            0LL,
            (const struct CMILMatrix *)&IdentityMatrix,
            0,
            1);
    v16 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xF63u);
      goto LABEL_12;
    }
    v12 = 1;
  }
  CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(
    (unsigned int)v21,
    (unsigned int)this[419],
    a2,
    a5,
    a6);
  v13 = this[419];
  if ( v13 )
    v13 = (struct CMILBrush *)((char *)v13 + 24);
  CLegacyMilBrushRealizer::SetRealizedBrush((CLegacyMilBrushRealizer *)v22, v13, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v14, &EVTDESC_ETWGUID_DRAWEVENT_Start, 1LL, *((unsigned int *)this + 1446));
  v15 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF7Cu);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(struct CMILBrush *, struct CMILBrush *, char *, char *, char *, __int64, _QWORD, _QWORD *, int))(*(_QWORD *)this[44] + 80LL))(
            this[44],
            this[47],
            (char *)this + 56,
            (char *)this + 72,
            (char *)this + 2816,
            a4,
            0LL,
            v22,
            a8);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF85u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v18, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 1LL, *((unsigned int *)this + 1446));
    }
  }
  CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)v21);
  if ( v12 )
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
LABEL_12:
  v22[0] = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v22);
  return v16;
}
