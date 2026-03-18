/*
 * XREFs of ZwEnumerateSystemEnvironmentValuesEx @ 0x14015B700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, ULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationClass, Buffer, *(_QWORD *)&BufferLength);
}
