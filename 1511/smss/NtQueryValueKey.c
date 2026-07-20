/*
 * XREFs of NtQueryValueKey @ 0x14000C250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  return __imp_NtQueryValueKey(
           KeyHandle,
           ValueName,
           KeyValueInformationClass,
           KeyValueInformation,
           Length,
           ResultLength);
}
