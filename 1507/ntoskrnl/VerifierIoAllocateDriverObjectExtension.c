/*
 * XREFs of VerifierIoAllocateDriverObjectExtension @ 0x140739884
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateDriverObjectExtension @ 0x1401593BC (IoAllocateDriverObjectExtension.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
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
