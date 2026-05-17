/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1800A87D0
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenSymbolicLinkObject()
{
  __int64 result; // rax

  result = 286LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
