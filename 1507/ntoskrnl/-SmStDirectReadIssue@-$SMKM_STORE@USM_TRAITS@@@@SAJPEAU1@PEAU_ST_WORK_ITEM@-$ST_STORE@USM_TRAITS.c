/*
 * XREFs of ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401402C0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14014026C (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014040C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140140BD0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z @ 0x1402529E0 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r9
  unsigned int v10; // ebx
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 5032));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 4488);
  v8 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_DWORD *)(a3 + 56) = 2;
  v10 = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a3, a2);
  ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1 + 80, a1 + 4392);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
  KeAbPostRelease(a1 + 4488);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v12;
  if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  _InterlockedAdd((volatile signed __int32 *)(a1 + 5032), 0xFFFFFFFF);
  result = v10;
  if ( v10 == -2147483634 )
    return 3221225626LL;
  return result;
}
