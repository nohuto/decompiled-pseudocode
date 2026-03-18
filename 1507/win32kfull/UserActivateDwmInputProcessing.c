/*
 * XREFs of UserActivateDwmInputProcessing @ 0x1C00F3DF0
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitDisEngagement @ 0x1C00F3EF4 (WaitForRitDisEngagement.c)
 *     ?InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z @ 0x1C00F3F98 (-InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserActivateDwmInputProcessing(struct DIT_INFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx

  EnterCrit(1LL);
  if ( *((_DWORD *)a1 + 14) )
    EtwTraceDitMmcssWorkStop();
  else
    gbDITInHitTest = 1;
  if ( gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing )
  {
    v4 = InitalizeDitInfoObjectArray(a1);
    if ( v4 >= 0 )
    {
      gpDitInfo = (__int64)a1;
      gptiDit = gptiCurrent;
      grpdeskDitStartup = *(_QWORD *)(gptiCurrent + 416LL);
      LockObjectAssignment(gptiCurrent + 416LL, *(_QWORD *)(gptiRit + 416LL));
      if ( (unsigned int)WaitForRitDisEngagement(*((unsigned int *)a1 + 14)) )
      {
        gbNoMoreDITHitTest = 0;
        v4 = 0;
      }
      else
      {
        LockObjectAssignment(gptiDit + 416, grpdeskDitStartup);
        gpDitInfo = 0LL;
        v4 = -1073741823;
        gptiDit = 0LL;
        grpdeskDitStartup = 0LL;
      }
    }
  }
  else
  {
    v4 = -1073741822;
  }
  if ( gbDITInHitTest == 1 )
  {
    gbDITInHitTest = 0;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return (unsigned int)v4;
}
