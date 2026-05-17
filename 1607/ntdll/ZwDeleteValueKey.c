/*
 * XREFs of ZwDeleteValueKey @ 0x1800A7D70
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800579F4 (RtlpQueryRegistryValues.c)
 *     RtlInitializeRXact @ 0x18008D180 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008E170 (RtlDeleteRegistryValue.c)
 *     RtlApplyRXact @ 0x18008E290 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteValueKey()
{
  __int64 result; // rax

  result = 203LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
