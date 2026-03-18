/*
 * XREFs of UserDeactivateDwmInputProcessing @ 0x1C01190F0
 * Callers:
 *     <none>
 * Callees:
 *     ResetPointerDevices @ 0x1C009472C (ResetPointerDevices.c)
 *     CleanupDitIocpSupport @ 0x1C01192B0 (CleanupDitIocpSupport.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 *     WakeRIT @ 0x1C011A044 (WakeRIT.c)
 *     CleanupDitRimIocpSupport @ 0x1C011AA84 (CleanupDitRimIocpSupport.c)
 *     vRemoveAndCleanupRimClient @ 0x1C011AD94 (vRemoveAndCleanupRimClient.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserDeactivateDwmInputProcessing(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

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
      ResetPointerDevices();
      vRemoveAndCleanupRimClient();
      CleanupDitRimIocpSupport();
      EtwTraceDitDisEngaged();
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
        EnterDeviceInfoListCrit_(v3);
        HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
        LeaveDeviceInfoListCrit_(v5, v4);
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
      v6 = 0;
      WaitForRitToCompleteLastCommand(0, 0, &v6);
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
