/*
 * XREFs of ?GetInteractionFirstChild@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z @ 0x1801300C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionFirstChild(
        CManipulationContext *this,
        const struct IInteractionResource *a2)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(const struct IInteractionResource *))(*(_QWORD *)a2 + 96LL))(a2);
}
