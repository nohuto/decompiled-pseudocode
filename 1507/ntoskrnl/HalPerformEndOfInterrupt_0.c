/*
 * XREFs of HalPerformEndOfInterrupt_0 @ 0x14017DE10
 * Callers:
 *     KiChainedDispatch @ 0x1401837D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401840A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140184440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401847E0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140186D60 (KiApcInterrupt.c)
 *     KiDpcInterrupt @ 0x1401873D0 (KiDpcInterrupt.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 HalPerformEndOfInterrupt_0()
{
  return HalPerformEndOfInterrupt();
}
