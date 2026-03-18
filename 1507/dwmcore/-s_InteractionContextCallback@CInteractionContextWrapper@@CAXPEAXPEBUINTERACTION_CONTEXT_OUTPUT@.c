/*
 * XREFs of ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18012F460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CInteractionContextWrapper::s_InteractionContextCallback(
        const GUID *a1,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  CInteractionContextWrapper::InteractionContextCallback(a1, a2);
}
