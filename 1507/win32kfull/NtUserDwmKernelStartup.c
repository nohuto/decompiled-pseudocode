/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C0149770
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS started; // eax
  int v10; // ecx

  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v4 = 0;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v10 = 5;
    goto LABEL_10;
  }
  v5 = gptiCurrent;
  v6 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    v10 = 87;
LABEL_10:
    UserSetLastError(v10);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v7 + 260) & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v4 = 1;
  else
    UserSetLastStatus(started, 1);
LABEL_7:
  UserSessionSwitchLeaveCrit(v5, v3);
  return v4;
}
