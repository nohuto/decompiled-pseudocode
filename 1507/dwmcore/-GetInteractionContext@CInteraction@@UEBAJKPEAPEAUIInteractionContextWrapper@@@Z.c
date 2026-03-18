/*
 * XREFs of ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18010CF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetInteractionContext(
        CInteraction *this,
        unsigned int a2,
        struct IInteractionContextWrapper **a3)
{
  return CInteractionProcessor::GetInteractionContext((CInteraction *)((char *)this + 224), a2, a3);
}
