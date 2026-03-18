/*
 * XREFs of imp_VfWdfCommonBufferGetAlignedVirtualAddress @ 0x1C00C32D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfCommonBufferGetAlignedVirtualAddress(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return WdfVersion.Functions.pfnWdfCommonBufferGetAlignedVirtualAddress(DriverGlobals, CommonBuffer);
}
