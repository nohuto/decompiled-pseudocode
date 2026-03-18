/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C0219680
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxDwmStopRedirection @ 0x1C012B6A0 (xxxDwmStopRedirection.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS v9; // eax

  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v4 = 0;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v5 = 5;
LABEL_10:
    UserSetLastError(v5);
    goto LABEL_11;
  }
  v6 = gptiCurrent;
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 8)) == 0 )
  {
    v5 = 87;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(v8 + 260) & 1) != 0 && (v9 = xxxDwmStopRedirection(0), v9 < 0) )
    UserSetLastStatus(v9, 1);
  else
    v4 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v3);
  return v4;
}
