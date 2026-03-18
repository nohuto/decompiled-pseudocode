/*
 * XREFs of ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18000D9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CompleteInteraction(CInteraction *this)
{
  *((_BYTE *)this + 256) = *((_BYTE *)this + 256) & 0xF3 | (2 * (*((_BYTE *)this + 256) & 2));
  return CInteractionProcessor::CompleteInteraction(
           (CInteraction *)((char *)this + 408),
           *((struct IManipulationResource **)this + 42));
}
