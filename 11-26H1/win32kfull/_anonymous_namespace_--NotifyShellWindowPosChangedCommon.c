/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1402DB564
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402DC0C4 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1402DC3E4 (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1401D6970 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401D6BB8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

bool __fastcall anonymous_namespace_::NotifyShellWindowPosChangedCommon(
        const struct tagWND *a1,
        char a2,
        char a3,
        int a4)
{
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-78h] BYREF
  int v12; // [rsp+28h] [rbp-70h]
  BOOL v13; // [rsp+30h] [rbp-68h]
  int WindowTrackState; // [rsp+34h] [rbp-64h]
  _BYTE v15[56]; // [rsp+38h] [rbp-60h] BYREF

  memset_0(&v11, 0, 0x50uLL);
  v11 = *(_QWORD *)a1;
  v12 = a4;
  v13 = a2 != 0;
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a3);
  v9 = PtiCurrent(v8);
  TransformRectBetweenCoordinateSpaces(v15, *((_QWORD *)a1 + 5) + 88LL, *(_QWORD *)(*((_QWORD *)v9 + 61) + 328LL), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent((__int64)&v11, 0);
}
