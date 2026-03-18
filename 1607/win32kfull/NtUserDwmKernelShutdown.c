/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C0212110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v8; // eax

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v0);
  v3 = 0;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v4 = 5LL;
LABEL_10:
    UserSetLastError(v4);
    goto LABEL_11;
  }
  v5 = gptiCurrent;
  v6 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    v4 = 87LL;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(v7 + 244) & 1) != 0 && (v8 = xxxDwmStopRedirection(0, v2), v8 < 0) )
    UserSetLastStatus(v8, 1);
  else
    v3 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit(v5, v2);
  return v3;
}
