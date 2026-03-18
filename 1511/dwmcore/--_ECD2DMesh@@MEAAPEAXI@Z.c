/*
 * XREFs of ??_ECD2DMesh@@MEAAPEAXI@Z @ 0x18014DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD2DMesh@@MEAA@XZ @ 0x18014DF34 (--1CD2DMesh@@MEAA@XZ.c)
 */

CD2DMesh *__fastcall CD2DMesh::`vector deleting destructor'(CD2DMesh *this, char a2)
{
  CD2DMesh::~CD2DMesh(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DMesh *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
