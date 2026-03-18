/*
 * XREFs of ?GetFirstChild@CInteractionRoot@@UEBAPEAUIInteractionResource@@XZ @ 0x18010CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct IInteractionResource *__fastcall CInteractionRoot::GetFirstChild(CInteractionRoot *this)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 16LL))(*((_QWORD *)this + 52));
}
