/*
 * XREFs of ?HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ @ 0x18009AA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::HandledDeltaCurrentInteraction(CInteraction *this)
{
  return (*((unsigned __int8 *)this + 604) >> 1) & 1;
}
