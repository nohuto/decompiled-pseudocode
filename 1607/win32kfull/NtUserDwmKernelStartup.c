/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C01348C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  NTSTATUS started; // eax
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v0);
  v3 = 0;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v9 = 5LL;
    goto LABEL_10;
  }
  v4 = gptiCurrent;
  v5 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v9 = 87LL;
LABEL_10:
    UserSetLastError(v9);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v6 + 244) & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v3 = 1;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v4, v2);
  return v3;
}
