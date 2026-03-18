/*
 * XREFs of ??_ECD3DVertexBuffer@@EEAAPEAXI@Z @ 0x1800ACE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x1800ACE70 (--1CD3DBuffer@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DVertexBuffer *__fastcall CD3DVertexBuffer::`vector deleting destructor'(CD3DVertexBuffer *this, char a2)
{
  *(_QWORD *)this = &CD3DVertexBuffer::`vftable';
  CD3DBuffer::~CD3DBuffer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DVertexBuffer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
