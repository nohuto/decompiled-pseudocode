/*
 * XREFs of ZwFsControlFile @ 0x180093C90
 * Callers:
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     RtlUnlockBootStatusData @ 0x180079310 (RtlUnlockBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 ZwFsControlFile()
{
  __int64 result; // rax

  result = 57LL;
  __asm { syscall; Low latency system call }
  return result;
}
