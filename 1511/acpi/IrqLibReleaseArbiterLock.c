/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C0019894
 * Callers:
 *     IrqTranslateResources @ 0x1C0069440 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006C3B0 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C007AA20 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C007FDB0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C0080040 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00803C0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
