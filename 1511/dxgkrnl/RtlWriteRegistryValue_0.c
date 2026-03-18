/*
 * XREFs of RtlWriteRegistryValue_0 @ 0x1C00114D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlWriteRegistryValue_0(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  return RtlWriteRegistryValue(RelativeTo, Path, ValueName, ValueType, ValueData, ValueLength);
}
