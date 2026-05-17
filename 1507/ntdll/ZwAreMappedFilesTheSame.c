/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1800941A0
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800170B8 (LdrpFindLoadedDllByMappingLockHeld.c)
 * Callees:
 *     <none>
 */

__int64 ZwAreMappedFilesTheSame()
{
  __int64 result; // rax

  result = 138LL;
  __asm { syscall; Low latency system call }
  return result;
}
