/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C00198A8
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C0019CA0 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C004A440 (ProcessorpAddInstanceCallback.c)
 *     IrqTranslateResources @ 0x1C0069440 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006C3B0 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C007AA20 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C007FDB0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C0080040 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00803C0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C0059240 )
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      KeWaitForSingleObject(qword_1C0059248, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
