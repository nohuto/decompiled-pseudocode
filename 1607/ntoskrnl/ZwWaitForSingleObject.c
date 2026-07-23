/*
 * XREFs of ZwWaitForSingleObject @ 0x14015A270
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400AF22C (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404D8734 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x1404DD294 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140578884 (FsRtlpRegisterProviderWithMUP.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140669DD0 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
