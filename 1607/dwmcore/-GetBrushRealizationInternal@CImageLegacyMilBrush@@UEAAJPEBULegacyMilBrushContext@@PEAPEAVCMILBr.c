/*
 * XREFs of ?GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800327D0
 * Callers:
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18002EF68 (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetBrushRealizationInternal(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int BrushRealizationInternal; // eax
  unsigned int v6; // ebx

  BrushRealizationInternal = CTileLegacyMilBrush::GetBrushRealizationInternal(this, a2, a3);
  v6 = BrushRealizationInternal;
  if ( BrushRealizationInternal < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationInternal, 0x5Bu);
  }
  else if ( !*((_DWORD *)this + 110) )
  {
    *((_OWORD *)this + 28) = *((_OWORD *)a2 + 9);
  }
  return v6;
}
