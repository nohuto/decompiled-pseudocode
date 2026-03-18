/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C0019508
 * Callers:
 *     ?DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z @ 0x1C00055F0 (-DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C001C0BC (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C0067264 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00A0388 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}
