/*
 * XREFs of ZwQueryValueKey_0 @ 0x1C002BC8C
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C0090760 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwQueryValueKey_0(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(KeyHandle, ValueName, KeyValueInformationClass, KeyValueInformation, Length, ResultLength);
}
