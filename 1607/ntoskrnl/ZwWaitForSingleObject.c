/*
 * XREFs of ZwWaitForSingleObject @ 0x140159D00
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400B12EC (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404F57A8 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x1404FA308 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140578344 (FsRtlpRegisterProviderWithMUP.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140669CEC (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
