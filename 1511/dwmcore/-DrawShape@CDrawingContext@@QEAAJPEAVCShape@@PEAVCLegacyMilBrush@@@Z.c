/*
 * XREFs of ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18
 * Callers:
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180042F10 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800433A0 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180123E1C (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x180042B20 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x180042C98 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DDE4 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawShape(CDrawingContext *this, struct CShape *a2, struct CLegacyMilBrush *a3)
{
  unsigned int v6; // esi
  struct CShape *v7; // rdx
  CDrawingContext *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  int TightBoundsNoBadNumber; // eax
  int v15; // eax
  __int64 v16[2]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    v15 = CDrawingContext::FillShapeForBounds(v8, v7);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x4E0u);
    goto LABEL_6;
  }
  if ( !v9 )
    return v6;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CLegacyMilBrush *, char *))(*(_QWORD *)v9 + 144LL))(
          a3,
          (char *)this + 2816) )
  {
    *(_OWORD *)v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_5;
  }
  TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a2, v16, 0LL);
  v12 = TightBoundsNoBadNumber;
  if ( TightBoundsNoBadNumber >= 0 )
  {
LABEL_5:
    v11 = CDrawingContext::FillOrStrokeShape(this, v10, (__int64)a2, v16, (float *)v16, a3);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4F8u);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBoundsNoBadNumber, 0x4ECu);
LABEL_6:
  if ( v12 == -2003304438 )
    return 0;
  return v12;
}
