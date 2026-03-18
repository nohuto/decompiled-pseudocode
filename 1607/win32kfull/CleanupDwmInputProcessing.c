/*
 * XREFs of CleanupDwmInputProcessing @ 0x1C01347C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS CleanupDwmInputProcessing()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // r8

  result = CInputManager::DestroySessionGlobal();
  if ( gpkeDITResponseEvent )
  {
    result = Win32FreePool(gpkeDITResponseEvent, v1, v2);
    gpkeDITResponseEvent = 0LL;
  }
  if ( gpkeDITTouchInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITTouchInjectionResponseEvent, v1, v2);
    gpkeDITTouchInjectionResponseEvent = 0LL;
  }
  if ( ghDITEvent )
  {
    result = ZwClose(ghDITEvent);
    ghDITEvent = 0LL;
  }
  if ( ghDITRITEvent )
  {
    result = ZwClose(ghDITRITEvent);
    ghDITRITEvent = 0LL;
  }
  if ( gpkeDITMouseInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITMouseInjectionResponseEvent, v1, v2);
    gpkeDITMouseInjectionResponseEvent = 0LL;
  }
  if ( gpkeDITCompositionInputSinkQueryResponseEvent )
  {
    result = Win32FreePool(gpkeDITCompositionInputSinkQueryResponseEvent, v1, v2);
    gpkeDITCompositionInputSinkQueryResponseEvent = 0LL;
  }
  if ( gpsemDITMouseInjectionWaiters )
  {
    result = Win32FreePool(gpsemDITMouseInjectionWaiters, v1, v2);
    gpsemDITMouseInjectionWaiters = 0LL;
  }
  if ( ghDITMouseFlushTimer )
  {
    ZwCancelTimer(ghDITMouseFlushTimer, 0LL);
    result = ZwClose(ghDITMouseFlushTimer);
    ghDITMouseFlushTimer = 0LL;
  }
  return result;
}
