/*
 * XREFs of VerifierIoSetDevicePropertyData @ 0x140742048
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoSetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        DEVPROPTYPE Type,
        ULONG Size,
        PVOID Data)
{
  return pXdvIoSetDevicePropertyData(Pdo, PropertyKey, Lcid, Flags, Type, Size, Data);
}
