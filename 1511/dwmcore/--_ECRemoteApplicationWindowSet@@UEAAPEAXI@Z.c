/*
 * XREFs of ??_ECRemoteApplicationWindowSet@@UEAAPEAXI@Z @ 0x180138B70
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CRemoteApplicationWindowSet@@UEAA@XZ @ 0x180138B34 (--1CRemoteApplicationWindowSet@@UEAA@XZ.c)
 */

void **__fastcall CRemoteApplicationWindowSet::`vector deleting destructor'(void **this, char a2)
{
  CRemoteApplicationWindowSet::~CRemoteApplicationWindowSet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
