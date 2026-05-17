/*
 * XREFs of ZwQueryInformationWorkerFactory @ 0x180094C60
 * Callers:
 *     TpQueryPoolStackInformation @ 0x1800F5610 (TpQueryPoolStackInformation.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationWorkerFactory()
{
  __int64 result; // rax

  result = 310LL;
  __asm { syscall; Low latency system call }
  return result;
}
