/*
 * XREFs of ?GetInteractionNumContacts@CManipulationContext@@UEBAIAEBUIInteractionResource@@K@Z @ 0x180130140
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CManipulationContext::GetInteractionNumContacts(
        CManipulationContext *this,
        const struct IInteractionResource *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(const struct IInteractionResource *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, a3);
}
