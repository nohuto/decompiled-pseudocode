/*
 * XREFs of ?Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801430F0
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180142E70 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x180142FCC (--0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z.c)
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
