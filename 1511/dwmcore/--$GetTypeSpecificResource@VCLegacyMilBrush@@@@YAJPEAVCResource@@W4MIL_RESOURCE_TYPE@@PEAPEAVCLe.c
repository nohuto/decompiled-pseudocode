/*
 * XREFs of ??$GetTypeSpecificResource@VCLegacyMilBrush@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAVCLegacyMilBrush@@@Z @ 0x18005D8B0
 * Callers:
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037CC0 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180058BC0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005A520 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall GetTypeSpecificResource<CLegacyMilBrush>(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v6)(__int64, __int64); // rsi
  char v7; // al

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL);
    if ( (char *)v6 == (char *)CSolidColorLegacyMilBrush::IsOfType )
    {
      v7 = CSolidColorLegacyMilBrush::IsOfType(a1, 70);
    }
    else if ( (char *)v6 == (char *)CImageLegacyMilBrush::IsOfType )
    {
      v7 = CImageLegacyMilBrush::IsOfType(a1, 70);
    }
    else
    {
      v7 = v6(a1, 70LL);
    }
    if ( v7 )
    {
      *a3 = a1;
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    }
  }
  return v3;
}
