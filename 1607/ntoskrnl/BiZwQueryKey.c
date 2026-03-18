/*
 * XREFs of BiZwQueryKey @ 0x14012DF78
 * Callers:
 *     BiGetKeyName @ 0x1405328D4 (BiGetKeyName.c)
 *     BiEnumerateSubKeys @ 0x14053C2A0 (BiEnumerateSubKeys.c)
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
