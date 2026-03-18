/*
 * XREFs of ExQueueDebuggerWorker @ 0x140083318
 * Callers:
 *     KdExitDebugger @ 0x1406F2838 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&ExpDebuggerDpc, 0);
  return result;
}
