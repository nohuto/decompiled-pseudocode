/*
 * XREFs of ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037CC0
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x180042C98 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18005D660 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     ??$GetTypeSpecificResource@VCLegacyMilBrush@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAVCLegacyMilBrush@@@Z @ 0x18005D8B0 (--$GetTypeSpecificResource@VCLegacyMilBrush@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAVCLe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::GetBrushRealizer(
        CDrawingContext *this,
        struct CResource *a2,
        const struct LegacyMilBrushContext *a3,
        struct CLegacyMilBrushRealizer **a4)
{
  struct CLegacyMilBrushRealizer *v4; // rdi
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int TypeSpecific; // eax
  int Realizer; // eax
  struct CLegacyMilBrushRealizer *v13; // [rsp+30h] [rbp-18h] BYREF
  CLegacyMilBrush *v14; // [rsp+38h] [rbp-10h] BYREF

  v4 = 0LL;
  v6 = 0;
  v13 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    if ( !v8 )
      goto LABEL_6;
LABEL_9:
    v4 = *(struct CLegacyMilBrushRealizer **)(v9 + 2624);
    (**(void (__fastcall ***)(struct CLegacyMilBrushRealizer *))v4)(v4);
    goto LABEL_6;
  }
  if ( !v8 )
    goto LABEL_9;
  TypeSpecific = GetTypeSpecificResource<CLegacyMilBrush>(v8, v8, &v14);
  v6 = TypeSpecific;
  if ( TypeSpecific < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TypeSpecific, 0x22A0u);
    return v6;
  }
  Realizer = CLegacyMilBrush::GetRealizer(v14, a3, &v13);
  v6 = Realizer;
  if ( Realizer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Realizer, 0x22A2u);
    return v6;
  }
  v4 = v13;
LABEL_6:
  *a4 = v4;
  return v6;
}
