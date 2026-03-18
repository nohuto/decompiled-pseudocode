/*
 * XREFs of ?GetInteractionNextSibling@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z @ 0x1801437B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionNextSibling(
        CManipulationContext *this,
        const struct IInteractionResource *a2)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(const struct IInteractionResource *))(*(_QWORD *)a2 + 104LL))(a2);
}
