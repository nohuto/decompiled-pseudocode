/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C008AD60
 * Callers:
 *     NtUserLockWorkStation @ 0x1C000CE40 (NtUserLockWorkStation.c)
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     NtUserGetCursorInfo @ 0x1C008AB20 (NtUserGetCursorInfo.c)
 *     xxxGetCursorPos @ 0x1C008AC40 (xxxGetCursorPos.c)
 *     zzzSetCursorPosByType @ 0x1C009A758 (zzzSetCursorPosByType.c)
 *     _SetDoubleClickTime @ 0x1C00C74F0 (_SetDoubleClickTime.c)
 *     _SetCaretBlinkTime @ 0x1C010C670 (_SetCaretBlinkTime.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     NtUserShowSystemCursor @ 0x1C0221170 (NtUserShowSystemCursor.c)
 *     xxxSetSystemCursor @ 0x1C02294C8 (xxxSetSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  int v4; // ecx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), v1) )
      return 1LL;
    v4 = 5;
  }
  else
  {
    v4 = 1459;
  }
  UserSetLastError(v4);
  return 0LL;
}
