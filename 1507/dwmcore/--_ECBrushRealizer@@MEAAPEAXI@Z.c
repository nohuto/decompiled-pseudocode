/*
 * XREFs of ??_ECBrushRealizer@@MEAAPEAXI@Z @ 0x18011A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRealizer@@MEAA@XZ @ 0x180081448 (--1CBrushRealizer@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBrushRealizer *__fastcall CBrushRealizer::`vector deleting destructor'(CBrushRealizer *this, char a2)
{
  CBrushRealizer::~CBrushRealizer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBrushRealizer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
