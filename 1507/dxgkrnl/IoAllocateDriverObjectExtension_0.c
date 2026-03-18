/*
 * XREFs of IoAllocateDriverObjectExtension_0 @ 0x1C000FF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoAllocateDriverObjectExtension_0(
        PDRIVER_OBJECT DriverObject,
        PVOID ClientIdentificationAddress,
        ULONG DriverObjectExtensionSize,
        PVOID *DriverObjectExtension)
{
  return IoAllocateDriverObjectExtension(
           DriverObject,
           ClientIdentificationAddress,
           DriverObjectExtensionSize,
           DriverObjectExtension);
}
