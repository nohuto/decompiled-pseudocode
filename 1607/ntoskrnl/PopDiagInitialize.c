/*
 * XREFs of PopDiagInitialize @ 0x1407A91B0
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     PopTransitionTelemetryOsState @ 0x140545DA0 (PopTransitionTelemetryOsState.c)
 *     TraceLoggingRegisterEx @ 0x140546994 (TraceLoggingRegisterEx.c)
 *     EtwSetInformation @ 0x140548AE4 (EtwSetInformation.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
 *     PopDiagSleepStudyInitialize @ 0x1405545C8 (PopDiagSleepStudyInitialize.c)
 */

__int64 PopDiagInitialize()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl

  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EtwSetInformation(
      PopDiagHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  TraceLoggingRegisterEx(&pCallbackContext, (TLG_PENABLECALLBACK)PopDiagTraceControlCallback, &pCallbackContext);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopDiagSleepStudyInitialize();
  PopTelemetryOsState = 0LL;
  qword_140302B48 = 0LL;
  qword_140302B58 = MEMORY[0xFFFFF78000000014];
  qword_140302B60 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140302B8C = v1;
  qword_140302B68 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  return 0LL;
}
