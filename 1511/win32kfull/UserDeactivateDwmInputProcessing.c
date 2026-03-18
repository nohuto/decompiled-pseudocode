/*
 * XREFs of UserDeactivateDwmInputProcessing @ 0x1C009F6C0
 * Callers:
 *     <none>
 * Callees:
 *     DitPrepRitTakeOver @ 0x1C009EBF4 (DitPrepRitTakeOver.c)
 *     CleanupDitIocpSupport @ 0x1C009F870 (CleanupDitIocpSupport.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C009FF44 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 *     WakeRIT @ 0x1C00A0644 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserDeactivateDwmInputProcessing(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 56) )
  {
    if ( gbDIT )
    {
      if ( grpdeskDitStartup )
      {
        LockObjectAssignment(gptiDit + 408, grpdeskDitStartup);
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
        LockObjectAssignment(gptiDit + 408, grpdeskDitStartup);
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
        EnterDeviceInfoListCrit_();
        HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
        LeaveDeviceInfoListCrit_();
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
      v3 = 0;
      WaitForRitToCompleteLastCommand(0, 0, &v3);
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
