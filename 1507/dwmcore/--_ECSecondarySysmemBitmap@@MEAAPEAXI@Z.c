/*
 * XREFs of ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x180152B60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x180152ABC (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::`vector deleting destructor'(
        CSecondarySysmemBitmap *this,
        char a2)
{
  CSecondarySysmemBitmap::~CSecondarySysmemBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSecondarySysmemBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
