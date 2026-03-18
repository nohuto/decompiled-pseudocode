/*
 * XREFs of UserDeactivateDwmInputProcessing @ 0x1C00F3B10
 * Callers:
 *     <none>
 * Callees:
 *     CleanupDitIocpSupport @ 0x1C00F3CBC (CleanupDitIocpSupport.c)
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 *     DitPrepRitTakeOver @ 0x1C0131AC0 (DitPrepRitTakeOver.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0155600 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserDeactivateDwmInputProcessing(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 56) )
  {
    if ( gbDIT )
    {
      if ( grpdeskDitStartup )
      {
        LockObjectAssignment(gptiDit + 416, grpdeskDitStartup);
        gpDitInfo = 0LL;
        gptiDit = 0LL;
        grpdeskDitStartup = 0LL;
      }
      EtwTraceDitMmcssWorkStart();
      ghDITResetEvent = 0LL;
      ghDITMmcssEvent = 0LL;
      ghDITInputApcDoneEvent = 0LL;
      return CleanupDitIocpSupport(1LL, 0LL);
    }
  }
  else
  {
    result = EtwTraceDitShutdown();
    if ( gbDIT )
    {
      gbDITInHitTest = 1;
      _InterlockedExchange(&glDitMouseHandling, 0);
      v2 = ((unsigned __int8)gdwDITWakeReason >> 4) & 4 | 0x20;
      DitPrepRitTakeOver();
      if ( grpdeskDitStartup )
      {
        LockObjectAssignment(gptiDit + 416, grpdeskDitStartup);
        gpDitInfo = 0LL;
        gptiDit = 0LL;
        grpdeskDitStartup = 0LL;
      }
      gbDIT = 0;
      if ( gbRITBlockedOnDIT )
        KeSetEvent(gpkeDITResponseEvent, 1, 0);
      if ( gbTouchInjectionBlockedOnDIT )
        KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
      if ( gbMouseInjectionBlockedOnDIT )
        KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
      if ( gpDitTouchInjectionDeviceInfo )
      {
        EnterDeviceInfoListCrit_(v3);
        HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
        LeaveDeviceInfoListCrit_(v4);
      }
      if ( gbCompositionInputSinkQueryBlockedOnDIT )
        KeSetEvent(gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
      gdwInAtomicOperation = 0;
      gdwDeferWinEvent = 0;
      ghDITResetEvent = 0LL;
      ghDITMmcssEvent = 0LL;
      ghDITInputApcDoneEvent = 0LL;
      CleanupDitIocpSupport(0LL, 1LL);
      WakeRIT(v2);
      v5 = 0;
      WaitForRitToCompleteLastCommand(0, 0, &v5);
      gbDITInHitTest = 0;
      result = gcDITHitTestWaiters;
      if ( gcDITHitTestWaiters )
      {
        KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
        result = gcDITHitTestWaiters;
        gcDITHitTestWaiters = 0;
      }
    }
  }
  return result;
}
