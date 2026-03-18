/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C0019694
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C0019A50 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C004AB30 (ProcessorpAddInstanceCallback.c)
 *     IrqTranslateResources @ 0x1C006B910 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006E660 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C007A8C0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C007FBD0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C007FE60 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00801E0 (IrqTransGetInterruptVector.c)
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
