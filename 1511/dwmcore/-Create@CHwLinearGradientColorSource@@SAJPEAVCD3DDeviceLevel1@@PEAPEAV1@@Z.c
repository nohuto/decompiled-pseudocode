/*
 * XREFs of ?Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180012A10
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012F00 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ??0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x180012F70 (--0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHwLinearGradientColorSource **a2)
{
  unsigned int v4; // esi
  CHwLinearGradientColorSource *v5; // rax
  struct CHwLinearGradientColorSource *v6; // rdi

  v4 = 0;
  v5 = (CHwLinearGradientColorSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         296LL);
  if ( v5 )
    v6 = CHwLinearGradientColorSource::CHwLinearGradientColorSource(v5, a1);
  else
    v6 = 0LL;
  *a2 = v6;
  if ( v6 )
  {
    (**(void (__fastcall ***)(struct CHwLinearGradientColorSource *))v6)(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
  }
  return v4;
}
