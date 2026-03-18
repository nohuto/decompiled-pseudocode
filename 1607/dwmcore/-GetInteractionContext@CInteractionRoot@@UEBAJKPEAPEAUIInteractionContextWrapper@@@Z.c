/*
 * XREFs of ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180145290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetInteractionContext(
        CInteractionRoot *this,
        unsigned int a2,
        struct IInteractionContextWrapper **a3)
{
  return CInteractionProcessor::GetInteractionContext((CInteractionRoot *)((char *)this + 32), a2, a3);
}
