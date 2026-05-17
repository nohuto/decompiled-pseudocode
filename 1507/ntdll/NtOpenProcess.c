/*
 * XREFs of NtOpenProcess @ 0x180093B60
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180068A40 (RtlQueryProcessDebugInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180069678 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800C72B8 (RtlpWow64OpenThreadProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcess()
{
  __int64 result; // rax

  result = 38LL;
  __asm { syscall; Low latency system call }
  return result;
}
