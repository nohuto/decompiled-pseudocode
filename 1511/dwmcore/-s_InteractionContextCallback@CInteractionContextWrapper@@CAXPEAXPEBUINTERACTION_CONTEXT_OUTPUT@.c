/*
 * XREFs of ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800BA2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CInteractionContextWrapper::s_InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        const GUID *a3,
        const GUID *a4)
{
  CInteractionContextWrapper::InteractionContextCallback(this, a2, a3, a4);
}
