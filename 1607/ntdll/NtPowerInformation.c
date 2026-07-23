/*
 * XREFs of NtPowerInformation @ 0x1800A6FF0
 * Callers:
 *     RtlpCreateExecutionRequiredRequest @ 0x1800F74E0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1800F75E0 (RtlpDestroyExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 95;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
