/*
 * XREFs of PopDiagInitialize @ 0x1407558FC
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     PopTransitionTelemetryOsState @ 0x14050BE6C (PopTransitionTelemetryOsState.c)
 *     EtwSetInformation @ 0x14050D180 (EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x1405244E0 (PopDiagSleepStudyInitialize.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
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
  qword_1402DD5C8 = 0LL;
  qword_1402DD5D8 = MEMORY[0xFFFFF78000000014];
  qword_1402DD5E0 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_1402DD604 = v1;
  qword_1402DD5E8 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  return 0LL;
}
