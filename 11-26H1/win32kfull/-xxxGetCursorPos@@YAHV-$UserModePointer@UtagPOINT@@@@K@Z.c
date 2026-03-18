/*
 * XREFs of ?xxxGetCursorPos@@YAHV?$UserModePointer@UtagPOINT@@@@K@Z @ 0x1401AB780
 * Callers:
 *     NtUserGetCursorPos @ 0x1401AB730 (NtUserGetCursorPos.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall xxxGetCursorPos(__int64 a1, int a2)
{
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx

  v4 = PtiCurrent(a1);
  v7 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  if ( *((_QWORD *)v4 + 61) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176);
    if ( *((_QWORD *)v4 + 61) != v6 )
    {
      UserSetLastError(5);
      return 0LL;
    }
  }
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return 0LL;
  }
  else if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v4) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_9;
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6);
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_9:
  v14 = SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v13, v12) )
    v7 = 3LL;
  if ( (v7 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlWriteULong64ToUser(a1, v14);
  return 1LL;
}
