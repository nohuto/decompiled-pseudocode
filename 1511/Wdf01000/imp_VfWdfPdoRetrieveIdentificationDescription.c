/*
 * XREFs of imp_VfWdfPdoRetrieveIdentificationDescription @ 0x1C00B6280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *))WdfVersion.Functions.pfnWdfPdoRetrieveIdentificationDescription)(
           DriverGlobals,
           Device,
           IdentificationDescription);
}
