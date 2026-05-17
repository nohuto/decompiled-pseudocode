/*
 * XREFs of ZwTestAlert @ 0x1800A9990
 * Callers:
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x1800A9E30 (KiUserApcHandler.c)
 * Callees:
 *     <none>
 */

__int64 ZwTestAlert()
{
  __int64 result; // rax

  result = 428LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
