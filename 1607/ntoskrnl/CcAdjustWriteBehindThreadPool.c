/*
 * XREFs of CcAdjustWriteBehindThreadPool @ 0x14006F9F0
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14006F800 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CcAdjustWriteBehindThreadPool(char a1)
{
  __int64 *result; // rax

  if ( a1 )
  {
    CcMaxNumberOfWriteBehindThreads = 1;
    if ( CcAddExtraWriteBehindThreads )
      CcAddExtraWriteBehindThreads = 0;
  }
  else
  {
    CcMaxNumberOfWriteBehindThreads = -1;
    result = &CcRegularWorkQueue;
    if ( (__int64 *)CcRegularWorkQueue != &CcRegularWorkQueue && !CcQueueThrottle )
      return (__int64 *)CcReEngageWorkerThreads((unsigned int)CcNumberWorkerThreads, 0LL);
  }
  return result;
}
