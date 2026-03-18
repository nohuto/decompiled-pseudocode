/*
 * XREFs of PopNewProcessorCallback @ 0x1406B09CC
 * Callers:
 *     <none>
 * Callees:
 *     PpmEnableWmiInterface @ 0x140599EB0 (PpmEnableWmiInterface.c)
 *     PpmIdleRegisterDefaultStates @ 0x14059A25C (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PopCheckSkipTick @ 0x1405C27F4 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1406B9C4C (PopDiagTraceSkipTick.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  __int64 v3; // rcx

  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoDisableSkipTick && PopSkipTickPolicy == 1 && !PopCheckSkipTick() )
    {
      PoDisableSkipTick = 1;
      LOBYTE(v3) = 1;
      PopDiagTraceSkipTick(v3, 0LL);
    }
    PpmCheckInitProcessors(0);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
