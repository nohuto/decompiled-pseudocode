/*
 * XREFs of NtUserShowSystemCursor @ 0x1402C0020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     EditionShowSystemCursor @ 0x1400F9FE0 (EditionShowSystemCursor.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 */

_BOOL8 __fastcall NtUserShowSystemCursor(unsigned int a1)
{
  __int64 v2; // rdx
  BOOL v3; // ebx
  __int64 v4; // rcx

  EnterSharedCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
    v3 = EditionShowSystemCursor(a1, v2);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
