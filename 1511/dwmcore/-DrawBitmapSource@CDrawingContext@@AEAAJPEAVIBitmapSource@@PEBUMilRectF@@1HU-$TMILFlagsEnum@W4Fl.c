/*
 * XREFs of ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18003FC14
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18003FE38 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800427B4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x180042970 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x180042618 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x180042B20 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
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
  float v10; // xmm2_4
  float v11; // xmm1_4
  unsigned int *v12; // rcx
  bool v13; // r8
  unsigned int v14; // xmm4_4
  unsigned int v15; // xmm5_4
  int v16; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int128 v20; // [rsp+40h] [rbp-40h]
  void **v21; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+68h] [rbp-18h]

  v8 = 0;
  if ( (float)(a4[2] - *a4) >= 2.220446e-16 )
  {
    v10 = a4[3];
    v11 = a4[1];
    if ( (float)(v10 - v11) >= 2.220446e-16 )
    {
      if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
      {
        v23 = 0LL;
        *(_QWORD *)&v20 = __PAIR64__(LODWORD(v11), v14);
        *((_QWORD *)&v20 + 1) = __PAIR64__(LODWORD(v10), v15);
        v21 = &CRectangleShape::`vftable';
        v22 = v20;
        v16 = CDrawingContext::FillShapeForBounds((CDrawingContext *)v12, (struct CShape *)&v21, v13);
        v8 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xE57u);
        CRectangleShape::~CRectangleShape((CRectangleShape *)&v21);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Start, 0LL, v12[1446]);
        v18 = CDrawingContext::DrawBitmapSourceWithPartialOcclusion(this, a5, a6, a7, a8);
        v8 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xE4Eu);
        }
        else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          Template_qq(v19, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 0LL, *((unsigned int *)this + 1446));
        }
      }
    }
  }
  return v8;
}
