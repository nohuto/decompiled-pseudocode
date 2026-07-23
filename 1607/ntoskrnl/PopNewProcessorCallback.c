/*
 * XREFs of PopNewProcessorCallback @ 0x14066A218
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x14054EE80 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmEnableWmiInterface @ 0x140576F28 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x140581B3C (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x140671B84 (PopDiagTraceSkipTick.c)
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
