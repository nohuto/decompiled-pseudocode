/*
 * XREFs of ZwQueryMultipleValueKey @ 0x14015C4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueList,
        ULONG NumberOfValues,
        PVOID Buffer,
        PULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, ValueList, *(_QWORD *)&NumberOfValues);
}
