/*
 * XREFs of MmPrefetchForCacheManager @ 0x140477744
 * Callers:
 *     CcPerformReadAhead @ 0x1400333F0 (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x140053320 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x14011D7C4 (CcAsyncReadPrefetch.c)
 * Callees:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiReturnCcAccessLog @ 0x140119F80 (MiReturnCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x1404B2C24 (MiPfExecuteReadList.c)
 *     MiGetCcAccessLog @ 0x1405323EC (MiGetCcAccessLog.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        void *a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v9; // rax
  __int64 v10; // r14
  unsigned int v11; // ebx
  signed __int64 CcAccessLog; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  __int64 result; // rax
  __int16 v16; // ax
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = a3;
  CurrentThread = KeGetCurrentThread();
  v9 = *(__int64 **)(a1 + 40);
  v10 = *v9;
  if ( (*(_DWORD *)(*v9 + 56) & 0x40000000) != 0 )
    return 0LL;
  v11 = a5;
  if ( dword_14034F248 && a5 >= dword_14034F270 )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  else
    CcAccessLog = 0LL;
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v10, a2, a4, a4, v11, -1, (__int64)&P) < 0 || (v13 = P) == 0LL )
  {
LABEL_18:
    if ( CcAccessLog )
      MiReturnCcAccessLog(CcAccessLog, 0);
    return 0LL;
  }
  v14 = a7;
  *((_DWORD *)P + 18) = 1;
  if ( !*v14 )
    --CurrentThread->SpecialApcDisable;
  if ( (int)MiPfPutPagesInTransition((__int64)v13, 0LL) < 0 || (_QWORD *)v13[11] == v13 + 11 )
  {
    if ( !*v14 )
    {
      v16 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v16;
      if ( !v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    MiReleaseReadListResources(v13);
    ExFreePoolWithTag(v13, 0);
    goto LABEL_18;
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 1);
  MiPfExecuteReadList(v13, 1LL, 0xFFFFFFFFLL);
  result = 1LL;
  *v13 = *v14;
  *v14 = v13;
  return result;
}
