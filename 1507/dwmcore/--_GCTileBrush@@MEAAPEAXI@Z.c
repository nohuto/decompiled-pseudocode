/*
 * XREFs of ??_GCTileBrush@@MEAAPEAXI@Z @ 0x1800F96A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTileBrush@@MEAA@XZ @ 0x180085E70 (--1CTileBrush@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CTileBrush *__fastcall CTileBrush::`scalar deleting destructor'(CTileBrush *this, char a2)
{
  CTileBrush::~CTileBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTileBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
