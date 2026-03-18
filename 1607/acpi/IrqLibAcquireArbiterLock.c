/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C002216C
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C0022690 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C0062000 (ProcessorpAddInstanceCallback.c)
 *     IrqTranslateResources @ 0x1C0089600 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008C880 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C009B820 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00A18F0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A1B80 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00A1F00 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C0073660 )
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      KeWaitForSingleObject(qword_1C0073668, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
