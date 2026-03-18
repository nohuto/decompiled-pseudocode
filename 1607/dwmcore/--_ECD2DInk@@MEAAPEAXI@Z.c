/*
 * XREFs of ??_ECD2DInk@@MEAAPEAXI@Z @ 0x18017DBD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x18017DB68 (--1CD2DInk@@MEAA@XZ.c)
 */

CD2DInk *__fastcall CD2DInk::`vector deleting destructor'(CD2DInk *this, char a2)
{
  CD2DInk::~CD2DInk(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DInk *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
