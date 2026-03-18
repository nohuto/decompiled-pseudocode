/*
 * XREFs of ?GetFirstChild@CInteractionRoot@@UEBAPEAUIInteractionResource@@XZ @ 0x1800BA240
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

struct IInteractionResource *__fastcall CInteractionRoot::GetFirstChild(CInteractionRoot *this)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 85) + 16LL))(*((_QWORD *)this + 85));
}
