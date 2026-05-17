/*
 * XREFs of ZwReleaseSemaphore @ 0x1800939A0
 * Callers:
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x180061E10 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x180075E70 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseSemaphore()
{
  __int64 result; // rax

  result = 10LL;
  __asm { syscall; Low latency system call }
  return result;
}
