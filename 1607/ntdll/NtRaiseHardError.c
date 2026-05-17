/*
 * XREFs of NtRaiseHardError @ 0x1800A8E90
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002D3AC (LdrpMapDllNtFileName.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpReportError @ 0x18007AF88 (LdrpReportError.c)
 *     LdrpInitializationFailure @ 0x1800D22F0 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 340LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
