/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x14005E9E0
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     NtUserShowCursor @ 0x14005E9A0 (NtUserShowCursor.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzShowCursor(__int64 a1)
{
  char v1; // bl
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v1 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1);
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 58);
  UserSessionState = W32GetUserSessionState(v5, v4);
  ++*(_DWORD *)(UserSessionState + 70592);
  v8 = *((_DWORD *)CurrentLogicalCursorThread + 196);
  v9 = *((_QWORD *)CurrentLogicalCursorThread + 58);
  if ( v1 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 196) = v8 + 1;
    ++*(_DWORD *)(v9 + 432);
    if ( v3 == *(_QWORD *)(W32GetUserSessionState(v9, v7) + 19208) && !*(_DWORD *)(v3 + 432) )
LABEL_4:
      zzzUpdateCursorImage(v11, v10);
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 196) = v8 - 1;
    --*(_DWORD *)(v9 + 432);
    if ( v3 == *(_QWORD *)(W32GetUserSessionState(v9, v7) + 19208) && *(_DWORD *)(v3 + 432) == -1 )
      goto LABEL_4;
  }
  v12 = *(_DWORD *)(v3 + 432);
  zzzEndDeferWinEventNotify();
  return v12;
}
