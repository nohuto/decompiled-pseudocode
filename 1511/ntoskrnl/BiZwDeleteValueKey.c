/*
 * XREFs of BiZwDeleteValueKey @ 0x14021EDC8
 * Callers:
 *     BiDeleteRegistryValue @ 0x14068E22C (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  return ZwDeleteValueKey(KeyHandle, ValueName);
}
