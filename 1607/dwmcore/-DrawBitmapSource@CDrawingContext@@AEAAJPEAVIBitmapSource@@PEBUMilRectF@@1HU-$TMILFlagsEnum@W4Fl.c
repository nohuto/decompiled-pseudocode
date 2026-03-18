/*
 * XREFs of ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006979C
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800698B8 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006AFA0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006B140 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006ADCC (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18006B2DC (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180097968 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSource(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v10; // rcx
  const struct MilRectF *v11; // r9
  bool v12; // r8
  int v13; // eax
  int v15; // eax
  __int64 v16; // rcx
  _BYTE v17[64]; // [rsp+40h] [rbp-88h] BYREF

  v8 = 0;
  if ( (float)(a4[2] - *a4) >= 2.220446e-16 && (float)(a4[3] - a4[1]) >= 2.220446e-16 )
  {
    if ( CDrawingContext::IsBounding(this) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v17, v11);
      v13 = CDrawingContext::FillShapeForBounds(this, (struct CShape *)v17, v12);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xE4Du);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v10, &EVTDESC_ETWGUID_DRAWEVENT_Start, 0LL, *(unsigned int *)(v10 + 6480));
      v15 = CDrawingContext::DrawBitmapSourceWithPartialOcclusion(this, a5, a6, a7, a8);
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xE44u);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        Template_qq(v16, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 0LL, *((unsigned int *)this + 1620));
      }
    }
  }
  return v8;
}
