/*
 * XREFs of ?GetRemoteAppBounds@CHwndRenderTargetRemoteApp@@UEAAJPEAUtagRECT@@@Z @ 0x18009A400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::GetRemoteAppBounds(CHwndRenderTargetRemoteApp *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 204);
  return result;
}
