/*
 * XREFs of imp_VfWdfIoTargetSelfAssignDefaultIoQueue @ 0x1C00CBE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoTargetSelfAssignDefaultIoQueue)(
           DriverGlobals,
           IoTarget,
           Queue);
}
