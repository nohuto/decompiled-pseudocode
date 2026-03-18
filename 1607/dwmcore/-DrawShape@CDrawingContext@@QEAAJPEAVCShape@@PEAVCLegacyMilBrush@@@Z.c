/*
 * XREFs of ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006B5F4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18006B6F0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006BA60 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x180122980 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180140714 (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C8E0 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18006B2DC (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18006B420 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawShape(CDrawingContext *this, struct CShape *a2, struct CLegacyMilBrush *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  int TightBoundsNoBadNumber; // eax
  int v12; // eax
  __int64 v13[2]; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
  {
    v12 = CDrawingContext::FillShapeForBounds(this, a2);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4E5u);
    goto LABEL_7;
  }
  if ( !a3 )
    return v3;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CLegacyMilBrush *, char *))(*(_QWORD *)a3 + 152LL))(
          a3,
          (char *)this + 3264) )
  {
    *(_OWORD *)v13 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_6;
  }
  TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a2, (__m128 *)v13);
  v9 = TightBoundsNoBadNumber;
  if ( TightBoundsNoBadNumber >= 0 )
  {
LABEL_6:
    v8 = CDrawingContext::FillOrStrokeShape(this, v7, (__int64)a2, v13, (float *)v13, a3);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4FDu);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBoundsNoBadNumber, 0x4F1u);
LABEL_7:
  if ( v9 == -2003304438 )
    return 0;
  return v9;
}
