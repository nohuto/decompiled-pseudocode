/*
 * XREFs of CheckWinstaAttributeAccess @ 0x14028FE90
 * Callers:
 *     CheckCursorClipAccess @ 0x1400293B0 (CheckCursorClipAccess.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140152F8C (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?xxxGetCursorPos@@YAHV?$UserModePointer@UtagPOINT@@@@K@Z @ 0x1401AB780 (-xxxGetCursorPos@@YAHV-$UserModePointer@UtagPOINT@@@@K@Z.c)
 *     NtUserGetCursorInfo @ 0x1401B4790 (NtUserGetCursorInfo.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1401DDAB0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     _SetCaretBlinkTime @ 0x1402038A0 (_SetCaretBlinkTime.c)
 *     _SetDoubleClickTime @ 0x1402461CC (_SetDoubleClickTime.c)
 *     NtUserLockWorkStation @ 0x1402B7BB0 (NtUserLockWorkStation.c)
 *     NtUserShowSystemCursor @ 0x1402C0020 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // esi
  __int128 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  HANDLE v5; // rbx
  int v6; // ecx

  v1 = DesiredAccess;
  *(_QWORD *)&v2 = PsGetCurrentProcessWin32Process(DesiredAccess);
  v4 = v2;
  if ( (_QWORD)v2 )
  {
    v2 = -(__int128)*(unsigned __int64 *)v2;
    v4 &= *((_QWORD *)&v2 + 1);
  }
  v5 = *(HANDLE *)(W32GetUserSessionState(v3, *((_QWORD *)&v2 + 1)) + 63536);
  if ( PsGetCurrentProcessId() != v5 )
  {
    if ( (*(_DWORD *)(v4 + 12) & 0x40000) == 0 )
    {
      v6 = 1459;
LABEL_6:
      UserSetLastError(v6);
      return 0LL;
    }
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v4 + 672), v1) )
    {
      v6 = 5;
      goto LABEL_6;
    }
  }
  return 1LL;
}
