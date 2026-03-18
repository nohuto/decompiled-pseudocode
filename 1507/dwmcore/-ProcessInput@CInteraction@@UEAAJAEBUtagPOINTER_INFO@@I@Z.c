/*
 * XREFs of ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x18010D2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessInput(CInteraction *this, const struct tagPOINTER_INFO *a2, unsigned int a3)
{
  return CInteractionProcessor::ProcessInput((CInteraction *)((char *)this + 224), a2, a3);
}
