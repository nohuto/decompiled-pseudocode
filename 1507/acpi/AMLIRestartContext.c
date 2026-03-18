/*
 * XREFs of AMLIRestartContext @ 0x1C00427F4
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C00359F0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C0035A30 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C00374E0 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C003F810 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C0040D90 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C0042638 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C0044F20 (FreeObjOwnerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
