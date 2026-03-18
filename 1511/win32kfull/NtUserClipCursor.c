/*
 * XREFs of NtUserClipCursor @ 0x1C0149870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserClipCursor(LONG *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (LONG *)W32UserProbeAddress;
    v8 = *(_OWORD *)a1;
    a1 = (LONG *)&v8;
  }
  LogicalToPhysicalDPIRect(&v8, &v8, 256LL, 0LL);
  v4 = zzzClipCursorEx(a1, 0LL, v2, v3);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
