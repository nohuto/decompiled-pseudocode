/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C0019680
 * Callers:
 *     IrqTranslateResources @ 0x1C006B910 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006E660 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C007A8C0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C007FBD0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C007FE60 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00801E0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
