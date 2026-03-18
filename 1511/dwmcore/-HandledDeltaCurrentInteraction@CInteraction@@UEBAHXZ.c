/*
 * XREFs of ?HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ @ 0x1800BD6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::HandledDeltaCurrentInteraction(CInteraction *this)
{
  return *((_BYTE *)this + 588) & 1;
}
