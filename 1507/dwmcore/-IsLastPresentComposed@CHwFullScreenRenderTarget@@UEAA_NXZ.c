/*
 * XREFs of ?IsLastPresentComposed@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x180140340
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CHwFullScreenRenderTarget::IsLastPresentComposed(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 152LL))(*((_QWORD *)this + 4));
  else
    return 0;
}
