/*
 * XREFs of ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x1801052E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180105064 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

CLegacySurfaceManager *__fastcall CLegacySurfaceManager::`vector deleting destructor'(
        CLegacySurfaceManager *this,
        char a2)
{
  CLegacySurfaceManager::~CLegacySurfaceManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLegacySurfaceManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
