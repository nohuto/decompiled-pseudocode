/*
 * XREFs of ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801453D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessInput(
        CInteraction *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  return CInteractionProcessor::ProcessInput((CInteraction *)((char *)this + 408), a2, a3, a4, a5);
}
