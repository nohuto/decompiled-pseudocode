/*
 * XREFs of ZwSetValueKey_0 @ 0x1C000FDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwSetValueKey_0(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  return ZwSetValueKey(KeyHandle, ValueName, TitleIndex, Type, Data, DataSize);
}
