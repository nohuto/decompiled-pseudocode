/*
 * XREFs of ZwConnectPort @ 0x1800A7750
 * Callers:
 *     CsrpConnectToServer @ 0x180075364 (CsrpConnectToServer.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 154LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
