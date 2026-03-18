/*
 * XREFs of NtUserClipCursor @ 0x1C01201A0
 * Callers:
 *     <none>
 * Callees:
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserClipCursor(LONG *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  EnterCrit(1LL);
  if ( a1 )
  {
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (LONG *)W32UserProbeAddress;
    v6 = *(_OWORD *)a1;
    a1 = (LONG *)&v6;
  }
  LogicalToPhysicalDPIRect(&v6, &v6, 256LL, 0LL);
  v2 = zzzClipCursorEx(a1, 0);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
