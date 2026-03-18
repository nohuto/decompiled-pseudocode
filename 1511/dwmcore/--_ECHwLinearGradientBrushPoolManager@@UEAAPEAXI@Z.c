/*
 * XREFs of ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800B32A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800B3364 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 */

CHwLinearGradientBrushPoolManager *__fastcall CHwLinearGradientBrushPoolManager::`vector deleting destructor'(
        CHwLinearGradientBrushPoolManager *this,
        char a2)
{
  *(_QWORD *)this = &CHwBrushPoolManager::`vftable';
  CHwBrushPoolManager::ReleaseUnusedBrushes(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwLinearGradientBrushPoolManager *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
