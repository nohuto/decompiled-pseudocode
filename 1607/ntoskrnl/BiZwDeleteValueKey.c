/*
 * XREFs of BiZwDeleteValueKey @ 0x14012E0C8
 * Callers:
 *     BiDeleteRegistryValue @ 0x14053C69C (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  return ZwDeleteValueKey(KeyHandle, ValueName);
}
