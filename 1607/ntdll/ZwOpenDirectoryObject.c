/*
 * XREFs of ZwOpenDirectoryObject @ 0x1800A6F20
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     BaseGetNamedObjectDirectory @ 0x180102F14 (BaseGetNamedObjectDirectory.c)
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
