/*
 * XREFs of ZwOpenDirectoryObject @ 0x1800A5BC0
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 *     BaseGetNamedObjectDirectory @ 0x1800F8580 (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenDirectoryObject()
{
  __int64 result; // rax

  result = 88LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
