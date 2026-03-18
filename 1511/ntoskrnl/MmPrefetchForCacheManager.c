/*
 * XREFs of MmPrefetchForCacheManager @ 0x1404D9A0C
 * Callers:
 *     CcFetchDataForRead @ 0x1400A3590 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x1400FC10C (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x1400FC4E4 (CcPerformReadAhead.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCcAccessLog @ 0x1400A6FC0 (MiReturnCcAccessLog.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiPfExecuteReadList @ 0x1403F70AC (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
 *     MiGetCcAccessLog @ 0x1404DB96C (MiGetCcAccessLog.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v9; // rax
  __int64 v10; // r14
  unsigned int v11; // ebx
  signed __int64 CcAccessLog; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = a3;
  CurrentThread = KeGetCurrentThread();
  v9 = *(__int64 **)(a1 + 40);
  v10 = *v9;
  if ( (*(_DWORD *)(*v9 + 56) & 0x40000000) != 0 )
    return 0LL;
  v11 = a5;
  if ( dword_1402FED88 && a5 >= dword_1402FEDB0 )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  else
    CcAccessLog = 0LL;
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v10, a2, a4, a4, v11, 0xFFFFFFFF, &P) < 0 || (v13 = P) == 0LL )
  {
LABEL_18:
    if ( CcAccessLog )
      MiReturnCcAccessLog(CcAccessLog, 0LL);
    return 0LL;
  }
  v14 = a7;
  *((_DWORD *)P + 18) = 1;
  if ( !*v14 )
    --CurrentThread->SpecialApcDisable;
  if ( (int)MiPfPutPagesInTransition((__int64)v13, 0LL) < 0 || (_QWORD *)v13[11] == v13 + 11 )
  {
    if ( !*v14 )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiReleaseReadListResources((__int64)v13);
    ExFreePoolWithTag(v13, 0);
    goto LABEL_18;
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 1LL);
  MiPfExecuteReadList((__int64)v13, 1, 0xFFFFFFFF);
  result = 1LL;
  *v13 = *v14;
  *v14 = v13;
  return result;
}
