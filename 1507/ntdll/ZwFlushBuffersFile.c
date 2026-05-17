/*
 * XREFs of ZwFlushBuffersFile @ 0x180093DB0
 * Callers:
 *     RtlUnlockBootStatusData @ 0x180079310 (RtlUnlockBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushBuffersFile()
{
  __int64 result; // rax

  result = 75LL;
  __asm { syscall; Low latency system call }
  return result;
}
