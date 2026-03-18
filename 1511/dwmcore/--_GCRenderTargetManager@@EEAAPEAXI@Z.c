/*
 * XREFs of ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180104AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x180104A5C (--1CRenderTargetManager@@EEAA@XZ.c)
 */

void **__fastcall CRenderTargetManager::`scalar deleting destructor'(void **this, char a2)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
