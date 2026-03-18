/*
 * XREFs of ??_ECD3DIndexBuffer@@EEAAPEAXI@Z @ 0x1800A97B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x1800A9870 (--1CD3DBuffer@@MEAA@XZ.c)
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
