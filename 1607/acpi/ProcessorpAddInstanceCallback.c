/*
 * XREFs of ProcessorpAddInstanceCallback @ 0x1C0062000
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C002216C (IrqLibAcquireArbiterLock.c)
 *     ProcessorAddInstance @ 0x1C008DA08 (ProcessorAddInstance.c)
 */

void __fastcall ProcessorpAddInstanceCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    IrqLibAcquireArbiterLock(0);
    ProcessorAddInstance((unsigned int)ChangeContext[1].State, ChangeContext->NtNumber);
    KeSetEvent((PRKEVENT)Object, 0, 0);
  }
}
