/*
 * XREFs of ?SetCompositionMode@CGdiSpriteBitmap@@WEA@EAAXW4BufferCompositionMode@@_N@Z @ 0x18009A810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::SetCompositionMode(__int64 a1)
{
  Components::Animations::ConstantInput::OnAnimationStop((Components::Animations::ConstantInput *)(a1 - 64));
}
