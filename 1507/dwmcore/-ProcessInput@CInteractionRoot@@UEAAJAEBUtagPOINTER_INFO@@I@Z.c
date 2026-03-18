/*
 * XREFs of ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x180130B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::ProcessInput(
        CInteractionRoot *this,
        const struct tagPOINTER_INFO *a2,
        unsigned int a3)
{
  return CInteractionProcessor::ProcessInput((CInteractionRoot *)((char *)this + 32), a2, a3);
}
