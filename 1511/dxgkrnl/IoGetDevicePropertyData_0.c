/*
 * XREFs of IoGetDevicePropertyData_0 @ 0x1C00115E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoGetDevicePropertyData_0(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        ULONG Size,
        PVOID Data,
        PULONG RequiredSize,
        PDEVPROPTYPE Type)
{
  return IoGetDevicePropertyData(Pdo, PropertyKey, Lcid, Flags, Size, Data, RequiredSize, Type);
}
