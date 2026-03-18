/*
 * XREFs of ExQueueDebuggerWorker @ 0x14016CFF0
 * Callers:
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((__int64)&ExpDebuggerDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
