/*
 * XREFs of ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x180083450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRealizer@@MEAA@XZ @ 0x180081448 (--1CBrushRealizer@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBrushResourceRealizer *__fastcall CBrushResourceRealizer::`vector deleting destructor'(
        CBrushResourceRealizer *this,
        char a2)
{
  *(_QWORD *)this = &CBrushResourceRealizer::`vftable';
  CBrushRealizer::~CBrushRealizer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBrushResourceRealizer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
