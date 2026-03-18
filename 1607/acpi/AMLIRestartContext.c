/*
 * XREFs of AMLIRestartContext @ 0x1C0059878
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C0045790 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C00457D0 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C0048B90 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C0053730 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C0056DA0 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C00596B8 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C005C0D0 (FreeObjOwnerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
