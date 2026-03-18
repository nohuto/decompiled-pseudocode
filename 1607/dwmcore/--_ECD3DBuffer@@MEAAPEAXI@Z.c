/*
 * XREFs of ??_ECD3DBuffer@@MEAAPEAXI@Z @ 0x18017DE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x1800ACE70 (--1CD3DBuffer@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DBuffer *__fastcall CD3DBuffer::`vector deleting destructor'(CD3DBuffer *this, char a2)
{
  CD3DBuffer::~CD3DBuffer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DBuffer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
