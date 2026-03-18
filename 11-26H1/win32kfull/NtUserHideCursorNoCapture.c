/*
 * XREFs of NtUserHideCursorNoCapture @ 0x14024C100
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 */

__int64 NtUserHideCursorNoCapture()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx

  EnterCrit(0LL, 0LL);
  v1 = *((_QWORD *)PtiCurrent(v0) + 58);
  if ( !*(_QWORD *)(v1 + 112) && (GetAppCompatFlags2(1024LL) & 0x100) == 0 )
  {
    v1 = *(_DWORD *)(W32GetUserSessionState(v1, v2) + 66796) & 0x80010000;
    if ( (_DWORD)v1 == -2147418112 )
      zzzSetCursor(0LL);
  }
  UserSessionSwitchLeaveCrit(v1);
  return 0LL;
}
