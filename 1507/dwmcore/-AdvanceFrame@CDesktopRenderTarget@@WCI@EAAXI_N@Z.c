/*
 * XREFs of ?AdvanceFrame@CDesktopRenderTarget@@WCI@EAAXI_N@Z @ 0x180099CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopRenderTarget::AdvanceFrame(__int64 a1)
{
  Components::Animations::ConstantInput::OnAnimationStop((Components::Animations::ConstantInput *)(a1 - 40));
}
