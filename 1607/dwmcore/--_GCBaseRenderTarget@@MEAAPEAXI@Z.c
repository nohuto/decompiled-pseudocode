/*
 * XREFs of ??_GCBaseRenderTarget@@MEAAPEAXI@Z @ 0x18017B2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBaseRenderTarget *__fastcall CBaseRenderTarget::`scalar deleting destructor'(CBaseRenderTarget *this, char a2)
{
  *(_QWORD *)this = &CBaseRenderTarget::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
