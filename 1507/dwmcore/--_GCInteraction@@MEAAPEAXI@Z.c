/*
 * XREFs of ??_GCInteraction@@MEAAPEAXI@Z @ 0x18005A494
 * Callers:
 *     ??_ECInteraction@@O7EAAPEAXI@Z @ 0x18009AA10 (--_ECInteraction@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteraction@@MEAA@XZ @ 0x18005A3DC (--1CInteraction@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CInteraction *__fastcall CInteraction::`scalar deleting destructor'(CInteraction *this, char a2)
{
  CInteraction::~CInteraction(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CInteraction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
