/*
 * XREFs of ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x180149D00
 * Callers:
 *     ??_ECHwStereoFullScreenRenderTarget@@OHI@EAAPEAXI@Z @ 0x1800BDE10 (--_ECHwStereoFullScreenRenderTarget@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x180074424 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x18014F0FC (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

CHwStereoFullScreenRenderTarget *__fastcall CHwStereoFullScreenRenderTarget::`scalar deleting destructor'(
        CHwStereoFullScreenRenderTarget *this,
        char a2)
{
  __int64 v4; // rcx
  CMILPoolResource *v5; // rcx

  *(_QWORD *)this = &CHwStereoFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 15) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CHwFullScreenRenderTarget'};
  *((_QWORD *)this + 46) = &CHwStereoFullScreenRenderTarget::`vftable'{for `IRenderTargetStereo'};
  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(this);
  v5 = *(CMILPoolResource **)(v4 + 392);
  if ( v5 )
    CMILPoolResource::Release(v5);
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwStereoFullScreenRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
