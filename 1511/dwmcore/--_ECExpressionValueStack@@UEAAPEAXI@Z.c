/*
 * XREFs of ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x180119550
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x1801194D4 (--1CExpressionValueStack@@UEAA@XZ.c)
 */

void **__fastcall CExpressionValueStack::`vector deleting destructor'(void **this, char a2)
{
  CExpressionValueStack::~CExpressionValueStack(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
