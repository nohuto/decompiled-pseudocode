/*
 * XREFs of ExQueueDebuggerWorker @ 0x14013F2AC
 * Callers:
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x14076B754 (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&ExpDebuggerDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
