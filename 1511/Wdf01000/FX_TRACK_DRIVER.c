/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C0024D38
 * Callers:
 *     ?DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z @ 0x1C0004250 (-DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C0023FF8 (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C0056F14 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008CE74 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}
