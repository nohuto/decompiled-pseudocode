/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C003DD20
 * Callers:
 *     NtUserLockWorkStation @ 0x1C0009B40 (NtUserLockWorkStation.c)
 *     _SetCaretBlinkTime @ 0x1C003A590 (_SetCaretBlinkTime.c)
 *     zzzSetCursorPosByType @ 0x1C003A608 (zzzSetCursorPosByType.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     NtUserGetCursorInfo @ 0x1C003D6F0 (NtUserGetCursorInfo.c)
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 *     _SetDoubleClickTime @ 0x1C0151F00 (_SetDoubleClickTime.c)
 *     NtUserShowSystemCursor @ 0x1C0221120 (NtUserShowSystemCursor.c)
 *     xxxSetSystemCursor @ 0x1C02291C8 (xxxSetSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v4; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), v1) )
      return 1LL;
    v4 = 5LL;
  }
  else
  {
    v4 = 1459LL;
  }
  UserSetLastError(v4);
  return 0LL;
}
