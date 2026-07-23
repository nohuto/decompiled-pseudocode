/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x1800A8210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  NTSTATUS result; // eax

  result = 240;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
