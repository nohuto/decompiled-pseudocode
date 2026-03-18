/*
 * XREFs of NtUserGetDwmCursorShape @ 0x1402B35F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKV?$UserModePointer@K@@@Z @ 0x1402EF254 (-UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKV-$UserModePointer@K@@@Z.c)
 */

_BOOL8 __fastcall NtUserGetDwmCursorShape(__int64 a1, volatile void *a2, unsigned int a3, volatile void *a4)
{
  SIZE_T v5; // rsi
  unsigned int v7; // r14d
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r8d
  BOOL v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int DwmCursorShape; // eax

  v5 = a3;
  v7 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( !(unsigned int)UserUnsafeIsProcessDwm(CurrentProcess) )
  {
    v12 = 30285;
LABEL_3:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v12);
    v13 = 0;
    UserSetLastError(5);
    return v13;
  }
  if ( !(unsigned __int8)IsInputThread(v10, v9, v11) )
  {
    v12 = 30381;
    goto LABEL_3;
  }
  if ( a2 )
    ProbeForWrite(a2, v5, 1u);
  ProbeForWrite(a4, 4uLL, 1u);
  UserSessionState = W32GetUserSessionState(v15, v14);
  DwmCursorShape = CursorApiRouter::UserGetDwmCursorShape(
                     *(_QWORD *)(UserSessionState + 36336),
                     v7,
                     a2,
                     (unsigned int)v5,
                     a4);
  v13 = DwmCursorShape == 0;
  if ( DwmCursorShape )
  {
    v13 = 0;
    UserSetLastError(DwmCursorShape);
  }
  return v13;
}
