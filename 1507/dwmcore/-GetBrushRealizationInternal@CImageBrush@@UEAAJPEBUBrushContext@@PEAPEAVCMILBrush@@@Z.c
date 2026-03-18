/*
 * XREFs of ?GetBrushRealizationInternal@CImageBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180085990
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBrushRealizationInternal@CTileBrush@@MEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180085EA0 (-GetBrushRealizationInternal@CTileBrush@@MEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 */

__int64 __fastcall CImageBrush::GetBrushRealizationInternal(
        CImageBrush *this,
        const struct BrushContext *a2,
        struct CMILBrush **a3)
{
  int BrushRealizationInternal; // eax
  unsigned int v6; // ebx

  BrushRealizationInternal = CTileBrush::GetBrushRealizationInternal(this, a2, a3);
  v6 = BrushRealizationInternal;
  if ( BrushRealizationInternal < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationInternal, 0x5Bu);
  }
  else if ( !*((_DWORD *)this + 90) )
  {
    *((_OWORD *)this + 23) = *(_OWORD *)((char *)a2 + 136);
  }
  return v6;
}
