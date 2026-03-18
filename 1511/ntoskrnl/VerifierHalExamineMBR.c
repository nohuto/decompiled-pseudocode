/*
 * XREFs of VerifierHalExamineMBR @ 0x1406C06AC
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
