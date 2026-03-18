/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C001E688
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C001E6B0 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0144E20 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
