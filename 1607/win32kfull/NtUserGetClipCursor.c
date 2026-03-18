/*
 * XREFs of NtUserGetClipCursor @ 0x1C0212AC0
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  _OWORD *v6; // rax
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 648), 2u) )
    return 0LL;
  EnterSharedCrit(0LL, 1LL);
  v7 = 0uLL;
  PhysicalToLogicalDPIRect(&v7, &grcCursorClip, 256LL, 0LL);
  v6 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v6 = (_OWORD *)W32UserProbeAddress;
  *v6 = *v6;
  *a1 = v7;
  UserSessionSwitchLeaveCrit(W32UserProbeAddress, v5);
  return 1LL;
}
