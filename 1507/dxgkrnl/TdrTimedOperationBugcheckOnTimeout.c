/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C001E5C8
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C001E5F0 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C013E9D0 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
