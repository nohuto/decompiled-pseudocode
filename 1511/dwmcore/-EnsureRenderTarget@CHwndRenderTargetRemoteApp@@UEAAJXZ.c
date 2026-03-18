/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x180114410
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::EnsureRenderTarget(CHwndRenderTargetRemoteApp *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 11);
  *(_OWORD *)((char *)this + 204) = *(_OWORD *)(*((_QWORD *)this + 75) + 24LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 416LL))(v1, 1LL);
  return 0LL;
}
