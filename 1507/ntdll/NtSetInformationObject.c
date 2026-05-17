/*
 * XREFs of NtSetInformationObject @ 0x180093EC0
 * Callers:
 *     TppCritSetThread @ 0x180070F24 (TppCritSetThread.c)
 *     sub_1800B7722 @ 0x1800B7722 (sub_1800B7722.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationObject()
{
  __int64 result; // rax

  result = 92LL;
  __asm { syscall; Low latency system call }
  return result;
}
