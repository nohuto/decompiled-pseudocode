/*
 * XREFs of ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x180181B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@CHwVidMemTextureManager@@AEAAXXZ @ 0x180181E6C (-Destroy@CHwVidMemTextureManager@@AEAAXXZ.c)
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
