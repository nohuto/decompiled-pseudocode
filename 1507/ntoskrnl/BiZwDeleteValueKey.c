/*
 * XREFs of BiZwDeleteValueKey @ 0x14026E1F0
 * Callers:
 *     BiDeleteRegistryValue @ 0x14070DD44 (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  return ZwDeleteValueKey(KeyHandle, ValueName);
}
