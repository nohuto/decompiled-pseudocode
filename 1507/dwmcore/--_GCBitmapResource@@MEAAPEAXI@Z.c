/*
 * XREFs of ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x180082A3C
 * Callers:
 *     ??_ECBitmapResource@@OBA@EAAPEAXI@Z @ 0x18009A590 (--_ECBitmapResource@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapResource@@MEAA@XZ @ 0x1800829F8 (--1CBitmapResource@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBitmapResource *__fastcall CBitmapResource::`scalar deleting destructor'(CBitmapResource *this, char a2)
{
  CBitmapResource::~CBitmapResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
