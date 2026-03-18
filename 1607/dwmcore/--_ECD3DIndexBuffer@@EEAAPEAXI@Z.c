/*
 * XREFs of ??_ECD3DIndexBuffer@@EEAAPEAXI@Z @ 0x1800ACDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x1800ACE70 (--1CD3DBuffer@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DIndexBuffer *__fastcall CD3DIndexBuffer::`vector deleting destructor'(CD3DIndexBuffer *this, char a2)
{
  *(_QWORD *)this = &CD3DIndexBuffer::`vftable';
  CD3DBuffer::~CD3DBuffer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DIndexBuffer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
