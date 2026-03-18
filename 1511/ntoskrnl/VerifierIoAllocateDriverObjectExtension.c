/*
 * XREFs of VerifierIoAllocateDriverObjectExtension @ 0x1406B9368
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateDriverObjectExtension @ 0x1400F29D8 (IoAllocateDriverObjectExtension.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 */

NTSTATUS __fastcall VerifierIoAllocateDriverObjectExtension(
        PDRIVER_OBJECT DriverObject,
        PVOID ClientIdentificationAddress,
        ULONG DriverObjectExtensionSize,
        PVOID *DriverObjectExtension)
{
  if ( !(unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return pXdvIoAllocateDriverObjectExtension(
             DriverObject,
             ClientIdentificationAddress,
             DriverObjectExtensionSize,
             DriverObjectExtension);
  *DriverObjectExtension = 0LL;
  return -1073741670;
}
