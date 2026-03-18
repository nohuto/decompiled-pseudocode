/*
 * XREFs of PopDiagInitialize @ 0x1407E37EC
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     PopTransitionTelemetryOsState @ 0x1405825E0 (PopTransitionTelemetryOsState.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 */

__int64 PopDiagInitialize()
{
  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
    PopDiagHandleRegistered = 1;
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  TraceLoggingRegisterEx(&pCallbackContext, (TLG_PENABLECALLBACK)PopDiagTraceControlCallback, &pCallbackContext);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopTelemetryOsState = 0LL;
  qword_14032D868 = 0LL;
  qword_14032D878 = MEMORY[0xFFFFF78000000014];
  qword_14032D880 = MEMORY[0xFFFFF78000000008];
  byte_14032D8A4 = 1;
  qword_14032D888 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  PopTransitionTelemetryOsState(1, 1);
  return 0LL;
}
