/*
 * XREFs of ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x1801194F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x180119450 (--1CExpressionManager@@UEAA@XZ.c)
 */

void **__fastcall CExpressionManager::`vector deleting destructor'(void **this, char a2)
{
  CExpressionManager::~CExpressionManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
