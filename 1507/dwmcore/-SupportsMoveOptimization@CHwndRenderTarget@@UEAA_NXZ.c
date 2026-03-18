/*
 * XREFs of ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x18004A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CHwndRenderTarget::SupportsMoveOptimization(CHwndRenderTarget *this, __int64 a2)
{
  LOBYTE(a2) = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1032LL) == 1 )
    LOBYTE(a2) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 416LL))(
                   *((_QWORD *)this + 11),
                   a2);
  return a2;
}
