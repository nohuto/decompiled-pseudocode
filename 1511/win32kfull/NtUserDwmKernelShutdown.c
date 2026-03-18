/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C0219510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  NTSTATUS v11; // eax

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v6 = 0;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v7 = 5;
LABEL_10:
    UserSetLastError(v7);
    goto LABEL_11;
  }
  v8 = gptiCurrent;
  v9 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v9 || (v10 = *(_QWORD *)(v9 + 8)) == 0 )
  {
    v7 = 87;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(v10 + 244) & 1) != 0 && (v11 = xxxDwmStopRedirection(0), v11 < 0) )
    UserSetLastStatus(v11, 1);
  else
    v6 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit(v8, v5);
  return v6;
}
