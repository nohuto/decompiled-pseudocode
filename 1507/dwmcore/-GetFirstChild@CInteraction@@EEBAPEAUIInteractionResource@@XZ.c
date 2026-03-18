/*
 * XREFs of ?GetFirstChild@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x18009AA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetFirstChild(CInteraction *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 24);
}
