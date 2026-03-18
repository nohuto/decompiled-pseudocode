/*
 * XREFs of CallerCanSeeImmersiveWindows @ 0x1C007724C
 * Callers:
 *     NtUserBuildHwndList @ 0x1C0076200 (NtUserBuildHwndList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CallerCanSeeImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rbx
  __int64 CurrentProcess; // rax
  _BOOL8 result; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  result = 1;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x30) == 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( !(unsigned int)IsProcessDwm(CurrentProcess)
      && *(int *)(CurrentProcessWin32Process + 12) >= 0
      && *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS
      && (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x800) == 0 )
    {
      return 0;
    }
  }
  return result;
}
