/*
 * XREFs of CallerCanSeeImmersiveWindows @ 0x14025CC4C
 * Callers:
 *     NtUserBuildHwndList @ 0x14020DC00 (NtUserBuildHwndList.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 */

__int64 __fastcall CallerCanSeeImmersiveWindows(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v2 = -*(_QWORD *)CurrentProcessWin32Process;
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( (*(_BYTE *)(v3 + 808) & 0x30) != 0
    || (unsigned int)IsCurrentProcessDwm(v2)
    || *(int *)(v3 + 12) < 0
    || *(_QWORD *)v3 == *(_QWORD *)(W32GetUserGdiSessionState(v4) + 40) )
  {
    return 1LL;
  }
  else
  {
    return (*(_DWORD *)(v3 + 808) >> 11) & 1;
  }
}
