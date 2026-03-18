/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C0022158
 * Callers:
 *     IrqTranslateResources @ 0x1C0089600 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008C880 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C009B820 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00A18F0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A1B80 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00A1F00 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
