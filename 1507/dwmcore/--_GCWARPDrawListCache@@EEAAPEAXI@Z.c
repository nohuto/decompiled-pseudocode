/*
 * XREFs of ??_GCWARPDrawListCache@@EEAAPEAXI@Z @ 0x1800FEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Invalidate@CWARPDrawListCache@@QEAAXXZ @ 0x1800FEE4C (-Invalidate@CWARPDrawListCache@@QEAAXXZ.c)
 */

CWARPDrawListCache *__fastcall CWARPDrawListCache::`scalar deleting destructor'(CWARPDrawListCache *this, char a2)
{
  *(_QWORD *)this = &CWARPDrawListCache::`vftable';
  CWARPDrawListCache::Invalidate(this);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWARPDrawListCache *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
