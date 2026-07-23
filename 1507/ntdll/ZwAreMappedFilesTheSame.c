/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1800941A0
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800170B8 (LdrpFindLoadedDllByMappingLockHeld.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  NTSTATUS result; // eax

  result = 138;
  __asm { syscall; Low latency system call }
  return result;
}
