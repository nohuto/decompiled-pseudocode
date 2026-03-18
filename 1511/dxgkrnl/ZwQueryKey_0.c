/*
 * XREFs of ZwQueryKey_0 @ 0x1C00115B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwQueryKey_0(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryKey(KeyHandle, KeyInformationClass, KeyInformation, Length, ResultLength);
}
