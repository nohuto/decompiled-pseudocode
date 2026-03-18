/*
 * XREFs of ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x180105280
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCompositionSurfaceManager@@MEAA@XZ @ 0x18010501C (--1CCompositionSurfaceManager@@MEAA@XZ.c)
 */

CCompositionSurfaceManager *__fastcall CCompositionSurfaceManager::`scalar deleting destructor'(
        CCompositionSurfaceManager *this,
        char a2)
{
  CCompositionSurfaceManager::~CCompositionSurfaceManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompositionSurfaceManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
