/*
 * XREFs of ??_GCTreeEffect@@QEAAPEAXI@Z @ 0x180137DE4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CTreeEffect *__fastcall CTreeEffect::`scalar deleting destructor'(CTreeEffect *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTreeEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
