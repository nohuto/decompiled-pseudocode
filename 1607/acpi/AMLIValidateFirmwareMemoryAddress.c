/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C00599D8
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C009D6F4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall AMLIValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
