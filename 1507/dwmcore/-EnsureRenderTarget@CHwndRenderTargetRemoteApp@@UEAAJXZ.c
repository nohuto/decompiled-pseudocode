/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x1800FA4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::EnsureRenderTarget(CHwndRenderTargetRemoteApp *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 11);
  *(_OWORD *)((char *)this + 204) = *(_OWORD *)(*((_QWORD *)this + 76) + 24LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 408LL))(v1, 1LL);
  return 0LL;
}
