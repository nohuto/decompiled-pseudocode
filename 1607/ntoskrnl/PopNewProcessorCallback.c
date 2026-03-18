/*
 * XREFs of PopNewProcessorCallback @ 0x14066A134
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x14054EAE0 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmEnableWmiInterface @ 0x1405769E8 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x140581690 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x140671AA0 (PopDiagTraceSkipTick.c)
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
