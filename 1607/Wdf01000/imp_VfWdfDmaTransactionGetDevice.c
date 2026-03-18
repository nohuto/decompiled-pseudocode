/*
 * XREFs of imp_VfWdfDmaTransactionGetDevice @ 0x1C00C3D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfDmaTransactionGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetDevice(DriverGlobals, DmaTransaction);
}
