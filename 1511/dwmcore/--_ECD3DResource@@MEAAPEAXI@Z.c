/*
 * XREFs of ??_ECD3DResource@@MEAAPEAXI@Z @ 0x1801487E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD3DResource@@MEAA@XZ @ 0x180027D28 (--1CD3DResource@@MEAA@XZ.c)
 */

CD3DResource *__fastcall CD3DResource::`vector deleting destructor'(CD3DResource *this, char a2)
{
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
