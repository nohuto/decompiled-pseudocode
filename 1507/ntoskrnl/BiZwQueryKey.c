/*
 * XREFs of BiZwQueryKey @ 0x14014FE30
 * Callers:
 *     BiGetKeyName @ 0x1405693EC (BiGetKeyName.c)
 *     BiEnumerateSubKeys @ 0x14056DFB8 (BiEnumerateSubKeys.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryKey(KeyHandle, KeyInformationClass, KeyInformation, Length, ResultLength);
}
