/*
 * XREFs of AMLIRestartContext @ 0x1C0042214
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C00366B0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C00366F0 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C00380D0 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C003F350 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C0040840 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C0042078 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C0044950 (FreeObjOwnerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
