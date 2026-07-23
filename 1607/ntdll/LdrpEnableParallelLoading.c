/*
 * XREFs of LdrpEnableParallelLoading @ 0x180072C54
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     TpAllocWork @ 0x18003BBA0 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x180072D50 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180072DC0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180072E64 (TpAllocPoolInternal.c)
 *     LdrpDetectDetour @ 0x180073554 (LdrpDetectDetour.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  int v2; // edi
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  LdrpDetectDetour();
  if ( !a1 )
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      return (unsigned int)v2;
    a1 = 4;
    goto LABEL_4;
  }
  if ( a1 > 0x10 )
    a1 = 16;
  if ( a1 > 1 )
  {
LABEL_4:
    if ( !LdrpDetourExist )
    {
      v2 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
      if ( v2 >= 0 )
      {
        TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
        TpSetPoolMaxThreads(LdrpThreadPool, a1 - 1);
        memset(&CallbackEnviron.CleanupGroup, 0, 44);
        CallbackEnviron.Pool = LdrpThreadPool;
        CallbackEnviron.Version = 3;
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        return (unsigned int)TpAllocWork(
                               &LdrpMapAndSnapWork,
                               (PTP_WORK_CALLBACK)LdrpWorkCallback,
                               0LL,
                               &CallbackEnviron);
      }
    }
  }
  return (unsigned int)v2;
}
