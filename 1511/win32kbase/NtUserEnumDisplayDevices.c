/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C001F170
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     DrvEnumDisplayDevices @ 0x1C001F8A0 (DrvEnumDisplayDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C0021358 (UpdateGraphicsDeviceList.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(int a1, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(v10);
    if ( v10[0] )
    {
      if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
        && !gbRITBlockedOnDIT
        && gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
      gptiCurrent = 0LL;
      gbValidateHandleForIL = 0;
      EtwTraceReleaseUserCrit();
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      UserSessionSwitchEnterCrit();
    }
    v8 = DrvEnumDisplayDevices(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a2, a3, a4, 1);
  }
  else
  {
    v8 = -1073741823;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v8;
}
