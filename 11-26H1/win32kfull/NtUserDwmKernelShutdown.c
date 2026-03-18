/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1402B1860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // eax

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( !(unsigned int)IsCurrentProcessDwm(v0) )
  {
    v3 = 5;
LABEL_10:
    UserSetLastError(v3);
    goto LABEL_11;
  }
  v4 = *((_QWORD *)PtiCurrent(v1) + 61);
  if ( !v4 || (v5 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v3 = 87;
    goto LABEL_10;
  }
  v6 = *(unsigned int *)(*(_QWORD *)v5 + 64LL);
  if ( (v6 & 1) != 0 && (v7 = xxxDwmStopRedirection(0LL), v7 < 0) )
    UserSetLastStatus(v7, 1);
  else
    v2 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
