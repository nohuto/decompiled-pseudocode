/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1801450C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x180021FD0 (--1CD2DContext@@UEAA@XZ.c)
 */

CD2DContext *__fastcall CD2DContext::`scalar deleting destructor'(CD2DContext *this, char a2)
{
  CD2DContext::~CD2DContext(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
