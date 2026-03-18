/*
 * XREFs of ??_ECD3DBuffer@@MEAAPEAXI@Z @ 0x180146260
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x1800A9870 (--1CD3DBuffer@@MEAA@XZ.c)
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
