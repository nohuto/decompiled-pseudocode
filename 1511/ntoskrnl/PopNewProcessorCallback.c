/*
 * XREFs of PopNewProcessorCallback @ 0x1406323A4
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x14052FDF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x140530A5C (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x140530B7C (PopCheckSkipTick.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PopDiagTraceSkipTick @ 0x140639B58 (PopDiagTraceSkipTick.c)
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
