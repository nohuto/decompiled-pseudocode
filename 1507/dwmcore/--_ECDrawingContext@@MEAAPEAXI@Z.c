/*
 * XREFs of ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x18002E5A4
 * Callers:
 *     ??_ECDrawingContext@@O7EAAPEAXI@Z @ 0x180099ED0 (--_ECDrawingContext@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002E3D4 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(CDrawingContext *this, char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDrawingContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
