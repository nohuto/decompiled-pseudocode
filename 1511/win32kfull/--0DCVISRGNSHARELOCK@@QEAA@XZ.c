/*
 * XREFs of ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002E800 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002E830 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0031BA0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiGetDCObject @ 0x1C0040C40 (NtGdiGetDCObject.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C014B6AC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreHintDxUpdate @ 0x1C026152C (GreHintDxUpdate.c)
 * Callees:
 *     <none>
 */

DCVISRGNSHARELOCK *__fastcall DCVISRGNSHARELOCK::DCVISRGNSHARELOCK(DCVISRGNSHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  return this;
}
