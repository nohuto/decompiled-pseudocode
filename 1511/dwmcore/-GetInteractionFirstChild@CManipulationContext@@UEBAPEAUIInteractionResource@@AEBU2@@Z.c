/*
 * XREFs of ?GetInteractionFirstChild@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z @ 0x1800053C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionFirstChild(
        CManipulationContext *this,
        const struct IInteractionResource *a2)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(const struct IInteractionResource *))(*(_QWORD *)a2 + 96LL))(a2);
}
