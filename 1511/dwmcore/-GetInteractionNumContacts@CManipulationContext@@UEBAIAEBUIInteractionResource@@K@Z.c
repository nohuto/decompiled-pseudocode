/*
 * XREFs of ?GetInteractionNumContacts@CManipulationContext@@UEBAIAEBUIInteractionResource@@K@Z @ 0x1800A7460
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CManipulationContext::GetInteractionNumContacts(
        CManipulationContext *this,
        const struct IInteractionResource *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(const struct IInteractionResource *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, a3);
}
