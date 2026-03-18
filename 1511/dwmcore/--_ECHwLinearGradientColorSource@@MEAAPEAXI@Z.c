/*
 * XREFs of ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x1801514B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Destroy@CHwVidMemTextureManager@@AEAAXXZ @ 0x180151868 (-Destroy@CHwVidMemTextureManager@@AEAAXXZ.c)
 */

CHwLinearGradientColorSource *__fastcall CHwLinearGradientColorSource::`vector deleting destructor'(
        CHwLinearGradientColorSource *this,
        char a2)
{
  *(_QWORD *)this = &CHwLinearGradientColorSource::`vftable';
  CHwVidMemTextureManager::Destroy((CHwLinearGradientColorSource *)((char *)this + 128));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwLinearGradientColorSource *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
