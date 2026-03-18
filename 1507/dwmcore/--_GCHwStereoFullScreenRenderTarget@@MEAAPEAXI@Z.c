/*
 * XREFs of ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x180139090
 * Callers:
 *     ??_ECHwStereoFullScreenRenderTarget@@OHI@EAAPEAXI@Z @ 0x18009B150 (--_ECHwStereoFullScreenRenderTarget@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x18008ADD8 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x18013FEEC (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
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
