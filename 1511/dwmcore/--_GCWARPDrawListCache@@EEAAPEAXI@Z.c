/*
 * XREFs of ??_GCWARPDrawListCache@@EEAAPEAXI@Z @ 0x180117890
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Invalidate@CWARPDrawListCache@@QEAAXXZ @ 0x180117C18 (-Invalidate@CWARPDrawListCache@@QEAAXXZ.c)
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
