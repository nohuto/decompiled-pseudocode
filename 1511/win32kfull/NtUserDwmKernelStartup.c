/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C00D5860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  NTSTATUS started; // eax
  int v12; // ecx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v6 = 0;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v12 = 5;
    goto LABEL_10;
  }
  v7 = gptiCurrent;
  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 8)) == 0 )
  {
    v12 = 87;
LABEL_10:
    UserSetLastError(v12);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v9 + 244) & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v6 = 1;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v7, v5);
  return v6;
}
