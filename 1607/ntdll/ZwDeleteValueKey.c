/*
 * XREFs of ZwDeleteValueKey @ 0x1800A7D70
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800579E4 (RtlpQueryRegistryValues.c)
 *     RtlInitializeRXact @ 0x18008D170 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008E160 (RtlDeleteRegistryValue.c)
 *     RtlApplyRXact @ 0x18008E280 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 203;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
