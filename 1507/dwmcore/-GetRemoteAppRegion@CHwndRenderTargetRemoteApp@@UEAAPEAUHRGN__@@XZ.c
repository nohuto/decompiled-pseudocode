/*
 * XREFs of ?GetRemoteAppRegion@CHwndRenderTargetRemoteApp@@UEAAPEAUHRGN__@@XZ @ 0x18009A410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRGN __fastcall CHwndRenderTargetRemoteApp::GetRemoteAppRegion(CHwndRenderTargetRemoteApp *this)
{
  return *(HRGN *)(*((_QWORD *)this + 76) + 40LL);
}
