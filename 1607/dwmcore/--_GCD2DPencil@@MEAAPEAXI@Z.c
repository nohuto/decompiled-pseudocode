/*
 * XREFs of ??_GCD2DPencil@@MEAAPEAXI@Z @ 0x18017DD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CD2DPencil@@MEAA@XZ @ 0x18017DD18 (--1CD2DPencil@@MEAA@XZ.c)
 */

CD2DPencil *__fastcall CD2DPencil::`scalar deleting destructor'(CD2DPencil *this, char a2)
{
  CD2DPencil::~CD2DPencil(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DPencil *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
