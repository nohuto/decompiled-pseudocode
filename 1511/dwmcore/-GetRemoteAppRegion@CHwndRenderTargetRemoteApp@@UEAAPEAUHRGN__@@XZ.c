/*
 * XREFs of ?GetRemoteAppRegion@CHwndRenderTargetRemoteApp@@UEAAPEAUHRGN__@@XZ @ 0x1800BD080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRGN __fastcall CHwndRenderTargetRemoteApp::GetRemoteAppRegion(CHwndRenderTargetRemoteApp *this)
{
  return *(HRGN *)(*((_QWORD *)this + 75) + 40LL);
}
