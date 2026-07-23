/*
 * XREFs of ZwReleaseSemaphore @ 0x1800939A0
 * Callers:
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x180061E10 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x180075E70 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  NTSTATUS result; // eax

  result = 10;
  __asm { syscall; Low latency system call }
  return result;
}
