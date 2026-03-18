/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x180173350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DContext@@UEAA@XZ @ 0x18007E3D4 (--1CD2DContext@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD2DContext *__fastcall CD2DContext::`scalar deleting destructor'(CD2DContext *this, unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CD2DContext::~CD2DContext(this, a2);
  if ( (v2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
