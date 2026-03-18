/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C0062A40
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C00160F8 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C001F9D0 (UserSessionSwitchEnterCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx

  UserSessionSwitchEnterCrit(a1);
  if ( gbVideoInitialized )
    v8 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a2, a3, a4);
  else
    v8 = -1073741823;
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v9);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v8;
}
