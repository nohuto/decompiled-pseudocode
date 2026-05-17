/*
 * XREFs of NtAlpcConnectPort @ 0x1800A5F50
 * Callers:
 *     SendMessageToWERService @ 0x180002C98 (SendMessageToWERService.c)
 *     RtlConnectToSm @ 0x180088C80 (RtlConnectToSm.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcConnectPort()
{
  __int64 result; // rax

  result = 117LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
