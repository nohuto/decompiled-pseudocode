/*
 * XREFs of imp_VfWdfInterruptQueueWorkItemForIsr @ 0x1C00CEC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfInterruptQueueWorkItemForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *))WdfVersion.Functions.pfnWdfInterruptQueueWorkItemForIsr)(
           DriverGlobals,
           Interrupt);
}
