/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C0050B70
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     DrvEnumDisplaySettings @ 0x1C0050C50 (DrvEnumDisplaySettings.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rcx

  UserSessionSwitchEnterCrit(a1);
  if ( gbVideoInitialized )
    v10 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a2, a3, a4);
  else
    v10 = -1073741823;
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v11);
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v10;
}
