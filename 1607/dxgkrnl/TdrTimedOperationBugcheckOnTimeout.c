/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C00237E0
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0023820 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0167B80 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
