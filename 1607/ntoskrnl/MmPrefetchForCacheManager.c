/*
 * XREFs of MmPrefetchForCacheManager @ 0x14042B4AC
 * Callers:
 *     CcFetchDataForRead @ 0x140032AD0 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x14006DBE0 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCcAccessLog @ 0x1400CC664 (MiReturnCcAccessLog.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14042B724 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiGetCcAccessLog @ 0x14049A430 (MiGetCcAccessLog.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        void *a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v10; // rax
  __int64 v11; // r14
  unsigned int v12; // ebx
  signed __int64 CcAccessLog; // rdi
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = a3;
  CurrentThread = KeGetCurrentThread();
  v10 = *(__int64 **)(a1 + 40);
  v11 = *v10;
  if ( (*(_DWORD *)(*v10 + 56) & 0x40000000) != 0 )
    return 0LL;
  v12 = a5;
  CcAccessLog = 0LL;
  if ( a5 >= dword_1403271F0 && dword_1403271C8 )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v11, a2, a4, a4, v12, -1, (__int64)&P) < 0 || (v14 = P) == 0LL )
  {
LABEL_17:
    if ( CcAccessLog )
      MiReturnCcAccessLog(CcAccessLog, 0);
    return 0LL;
  }
  v15 = a8;
  *((_DWORD *)P + 18) = 1;
  if ( !*v15 )
    --CurrentThread->SpecialApcDisable;
  if ( (int)MiPfPutPagesInTransition((__int64)v14, 0LL) < 0 || (_QWORD *)v14[11] == v14 + 11 )
  {
    if ( !*v15 )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiReleaseReadListResources(v14);
    ExFreePoolWithTag(v14, 0);
    goto LABEL_17;
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 1);
  MiPfExecuteReadList(v14, 1LL, 0xFFFFFFFFLL, a7);
  result = 1LL;
  *v14 = *v15;
  *v15 = v14;
  return result;
}
