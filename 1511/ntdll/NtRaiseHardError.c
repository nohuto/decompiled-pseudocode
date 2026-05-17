/*
 * XREFs of NtRaiseHardError @ 0x1800A7AB0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     LdrpInitializationFailure @ 0x1800CAD44 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 336LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
