/*
 * XREFs of ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x180012340
 * Callers:
 *     <none>
 * Callees:
 *     ??1COverlayContext@@MEAA@XZ @ 0x180012AE0 (--1COverlayContext@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

COverlayContext *__fastcall COverlayContext::`vector deleting destructor'(COverlayContext *this, char a2)
{
  COverlayContext::~COverlayContext(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, COverlayContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
