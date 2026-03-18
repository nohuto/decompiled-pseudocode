/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteraction@@UEAAXXZ @ 0x1800A7950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandledDeltaCurrentInteraction(CInteraction *this)
{
  *((_BYTE *)this + 588) |= 1u;
}
