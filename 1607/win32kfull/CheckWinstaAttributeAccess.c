/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C0098290
 * Callers:
 *     NtUserLockWorkStation @ 0x1C000E560 (NtUserLockWorkStation.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     zzzSetCursorPosByType @ 0x1C0097338 (zzzSetCursorPosByType.c)
 *     _SetCaretBlinkTime @ 0x1C0097B10 (_SetCaretBlinkTime.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     _RegisterHotKey @ 0x1C0097DFC (_RegisterHotKey.c)
 *     NtUserGetCursorInfo @ 0x1C0098170 (NtUserGetCursorInfo.c)
 *     _SetDoubleClickTime @ 0x1C011F860 (_SetDoubleClickTime.c)
 *     NtUserShowSystemCursor @ 0x1C021B0F0 (NtUserShowSystemCursor.c)
 *     xxxSetSystemCursor @ 0x1C0228DC8 (xxxSetSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess, __int64 a2)
{
  ACCESS_MASK v2; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v5; // rcx

  v2 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess, a2);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), v2) )
      return 1LL;
    v5 = 5LL;
  }
  else
  {
    v5 = 1459LL;
  }
  UserSetLastError(v5);
  return 0LL;
}
