/*
 * XREFs of ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x18008A770
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x18008A7D0 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
