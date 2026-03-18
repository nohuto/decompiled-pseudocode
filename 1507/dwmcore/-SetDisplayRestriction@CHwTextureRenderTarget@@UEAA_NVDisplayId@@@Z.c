/*
 * XREFs of ?SetDisplayRestriction@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x18013B420
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SetDisplayRestriction(__int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 176) + 184LL))(a1 - 176, a2);
}
