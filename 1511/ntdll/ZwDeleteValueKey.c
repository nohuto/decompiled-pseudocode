/*
 * XREFs of ZwDeleteValueKey @ 0x1800A69D0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800466A4 (RtlpQueryRegistryValues.c)
 *     RtlApplyRXact @ 0x180086800 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x180087D30 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x180089A90 (RtlDeleteRegistryValue.c)
 *     RtlpSetInstallLanguage @ 0x1800DE4C0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 201;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
