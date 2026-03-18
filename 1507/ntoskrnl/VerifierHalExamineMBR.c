/*
 * XREFs of VerifierHalExamineMBR @ 0x140741EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierHalExamineMBR(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG MBRTypeIdentifier,
        PVOID *Buffer)
{
  pXdvHalExamineMBR(DeviceObject, SectorSize, MBRTypeIdentifier, Buffer);
}
