/*
 * XREFs of LdrpEnableParallelLoading @ 0x18007B59C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     TpAllocWork @ 0x18003DBB0 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x18007B690 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18007B700 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 *     LdrpDetectDetour @ 0x18007D6B8 (LdrpDetectDetour.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  int v2; // edi
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  LdrpDetectDetour();
  if ( !a1 )
  {
    if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0 )
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
