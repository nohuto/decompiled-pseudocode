/*
 * XREFs of ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801424B4
 * Callers:
 *     ??_ECHwLinearGradientBrush@@W7EAAPEAXI@Z @ 0x18009B6A0 (--_ECHwLinearGradientBrush@@W7EAAPEAXI@Z.c)
 *     ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180142510 (-CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPE.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CHwLinearGradientBrush@@UEAA@XZ @ 0x180142AF0 (--1CHwLinearGradientBrush@@UEAA@XZ.c)
 */

CHwLinearGradientBrush *__fastcall CHwLinearGradientBrush::`vector deleting destructor'(
        CHwLinearGradientBrush *this,
        char a2)
{
  CHwLinearGradientBrush::~CHwLinearGradientBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwLinearGradientBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
