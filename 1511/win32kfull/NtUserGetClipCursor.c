/*
 * XREFs of NtUserGetClipCursor @ 0x1C0219D00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C00858B4 (CheckGrantedAccess.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
    EnterSharedCrit(0LL, 1LL);
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
