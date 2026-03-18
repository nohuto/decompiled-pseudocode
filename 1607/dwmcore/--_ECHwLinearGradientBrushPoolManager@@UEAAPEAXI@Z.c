/*
 * XREFs of ??_ECHwLinearGradientBrushPoolManager@@UEAAPEAXI@Z @ 0x1800B68A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800B6954 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
