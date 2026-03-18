/*
 * XREFs of ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801714B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::ProcessInput(
        CInteractionRoot *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  return CInteractionProcessor::ProcessInput((CInteractionRoot *)((char *)this + 32), a2, a3, a4, a5);
}
