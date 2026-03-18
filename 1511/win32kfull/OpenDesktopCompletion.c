/*
 * XREFs of OpenDesktopCompletion @ 0x1C0122050
 * Callers:
 *     _OpenDesktop @ 0x1C0120630 (_OpenDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     NtUserOpenInputDesktop @ 0x1C01222D0 (NtUserOpenInputDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01E8C58 (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  PEPROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v7; // rbx
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  CurrentProcessWin32Process = (PEPROCESS *)PsGetCurrentProcessWin32Process(a1);
  v7 = *(_DWORD **)(a1 + 24);
  if ( (v7[8] & 2) == 0 )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  if ( PsGetProcessId(*CurrentProcessWin32Process) == (HANDLE)gpidLogon )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  GetProcessLuid(0LL, &v9);
  if ( v9 != v7[36] || v10 != v7[37] )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  UserSetLastError(170);
  return 3221226091LL;
}
