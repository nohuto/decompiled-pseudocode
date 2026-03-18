/*
 * XREFs of ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x180086DE0
 * Callers:
 *     ??_ECCompositionSurfaceBitmap@@OEA@EAAPEAXI@Z @ 0x18009A120 (--_ECCompositionSurfaceBitmap@@OEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800873C8 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::`scalar deleting destructor'(
        CCompositionSurfaceBitmap *this,
        char a2)
{
  CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompositionSurfaceBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
