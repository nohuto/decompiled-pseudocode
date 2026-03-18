/*
 * XREFs of VerifierIoGetDevicePropertyData @ 0x1406C0784
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        ULONG Size,
        PVOID Data,
        PULONG RequiredSize,
        PDEVPROPTYPE Type)
{
  return pXdvIoGetDevicePropertyData(Pdo, PropertyKey, Lcid, Flags, Size, Data, RequiredSize, Type);
}
