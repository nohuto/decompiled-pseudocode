/*
 * XREFs of InitDwmInputProcessing @ 0x1C0153370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitDwmInputProcessing()
{
  void *KernelTimer; // rax

  gdwtmrDitMouseFlushExpire = 5;
  gbEnableDwmTouchProcessing = 1;
  gbEnableDwmMouseProcessing = 1;
  gbEnableDwmMouseProcessingContextSwitchOpt = 1;
  gbDITUseIocp = 1;
  gpkeDITResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  gpkeDITTouchInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  ghDITEvent = (HANDLE)hCreateKernelEvent(1LL, 0LL);
  ghDITRITEvent = (HANDLE)hCreateKernelEvent(1LL, 0LL);
  gpkeDITMouseInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  gpkeDITCompositionInputSinkQueryResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  KernelTimer = (void *)hCreateKernelTimer(1LL);
  ghDITMouseFlushTimer = KernelTimer;
  if ( gpkeDITResponseEvent
    && gpkeDITTouchInjectionResponseEvent
    && ghDITEvent
    && ghDITRITEvent
    && KernelTimer
    && gpkeDITMouseInjectionResponseEvent
    && gpkeDITCompositionInputSinkQueryResponseEvent )
  {
    return CInputManager::CreateSessionGlobal();
  }
  else
  {
    return 3221225495LL;
  }
}
