/*
 * XREFs of NtUserGetClipCursor @ 0x1C0219F90
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C005CD60 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  result = CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 656), 2u);
  if ( (_DWORD)result )
  {
    EnterSharedCrit(1LL);
    v6 = 0uLL;
    PhysicalToLogicalDPIRect(&v6, &grcCursorClip, 256LL, 0LL);
    v5 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v5 = (_OWORD *)W32UserProbeAddress;
    *v5 = *v5;
    *a1 = v6;
    UserSessionSwitchLeaveCrit(W32UserProbeAddress, v4);
    return 1LL;
  }
  return result;
}
