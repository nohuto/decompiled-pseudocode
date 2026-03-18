/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C004291C
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C007C18C (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall AMLIValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
