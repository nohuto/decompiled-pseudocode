/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x18012D930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::EnsureRenderTarget(CHwndRenderTargetRemoteApp *this)
{
  *(_OWORD *)((char *)this + 348) = *(_OWORD *)(*((_QWORD *)this + 99) + 24LL);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 152LL))(*((_QWORD *)this + 20), 1LL);
  return 0LL;
}
