/*
 * XREFs of CleanupDwmInputProcessing @ 0x1C0132150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS CleanupDwmInputProcessing()
{
  NTSTATUS result; // eax

  result = CInputManager::DestroySessionGlobal();
  if ( gpkeDITResponseEvent )
  {
    result = Win32FreePool(gpkeDITResponseEvent);
    gpkeDITResponseEvent = 0LL;
  }
  if ( gpkeDITTouchInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITTouchInjectionResponseEvent);
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
    result = Win32FreePool(gpkeDITMouseInjectionResponseEvent);
    gpkeDITMouseInjectionResponseEvent = 0LL;
  }
  if ( gpkeDITCompositionInputSinkQueryResponseEvent )
  {
    result = Win32FreePool(gpkeDITCompositionInputSinkQueryResponseEvent);
    gpkeDITCompositionInputSinkQueryResponseEvent = 0LL;
  }
  if ( ghDITMouseFlushTimer )
  {
    ZwCancelTimer(ghDITMouseFlushTimer, 0LL);
    result = ZwClose(ghDITMouseFlushTimer);
    ghDITMouseFlushTimer = 0LL;
  }
  return result;
}
