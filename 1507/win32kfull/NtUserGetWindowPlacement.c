/*
 * XREFs of NtUserGetWindowPlacement @ 0x1C0083040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetWindowPlacement @ 0x1C0083148 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned int WindowPlacement; // ebx
  _OWORD v9[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v9, 0, 0x2CuLL);
  EnterCrit(1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    if ( a2 >= W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    *(_OWORD *)a2 = *(_OWORD *)a2;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 40);
    LODWORD(v9[0]) = *(_DWORD *)a2;
    WindowPlacement = GetWindowPlacement(v6, v9, 1LL);
    if ( WindowPlacement )
    {
      *(_OWORD *)a2 = v9[0];
      *(_OWORD *)(a2 + 16) = v9[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v9[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v9[2]);
    }
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return WindowPlacement;
}
