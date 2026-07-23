/*
 * XREFs of ZwDeleteValueKey @ 0x180094580
 * Callers:
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 *     RtlApplyRXact @ 0x18007E210 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18007F4C0 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x180081A80 (RtlDeleteRegistryValue.c)
 *     RtlpSetInstallLanguage @ 0x1800D66B0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 200;
  __asm { syscall; Low latency system call }
  return result;
}
