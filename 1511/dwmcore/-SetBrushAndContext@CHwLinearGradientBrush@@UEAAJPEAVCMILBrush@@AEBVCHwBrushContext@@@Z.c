/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012F00
 * Callers:
 *     ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1800128C0 (-CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPE.c)
 * Callees:
 *     ?Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180012A10 (-Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012C44 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwLinearGradientBrush::SetBrushAndContext(
        struct CD3DDeviceLevel1 **this,
        struct CMILBrush *a2,
        const struct CBaseMatrix **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax

  if ( this[12] || (v9 = CHwLinearGradientColorSource::Create(this[5], this + 12), v7 = v9, v9 >= 0) )
  {
    v6 = CHwLinearGradientBrush::SetBrushAndContextInternal((CHwLinearGradientBrush *)this, a2, a3);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xDAu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD1u);
  }
  return v7;
}
