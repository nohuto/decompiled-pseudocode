/*
 * XREFs of ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x18014D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18014D57C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::`vector deleting destructor'(
        CSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSectionBitmapRealization *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
