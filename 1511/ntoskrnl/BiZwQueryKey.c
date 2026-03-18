/*
 * XREFs of BiZwQueryKey @ 0x14011BBA4
 * Callers:
 *     BiGetKeyName @ 0x1404F4FE4 (BiGetKeyName.c)
 *     BiEnumerateSubKeys @ 0x1404FBA20 (BiEnumerateSubKeys.c)
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
