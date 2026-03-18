/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA028 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCleanup @ 0x1400DA9CC (SmKmStoreHelperCleanup.c)
 *     SmFpCleanup @ 0x1400DAA84 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DB5BC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x1404F9234 (PspQueueApcSpecialApc.c)
 *     SmKmFileInfoCleanup @ 0x1406DC94C (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v7; // esi
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  char v15; // al
  void *v16; // rbx
  void *v17; // rcx
  __int64 result; // rax
  PVOID *v19; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v21[48]; // [rsp+38h] [rbp-50h] BYREF

  *(_BYTE *)(a1 + 4485) |= 1u;
  if ( *(_QWORD *)(a1 + 4664) )
  {
    KeSetEvent((PRKEVENT)(a1 + 4616), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 4664), Executive, 0, 0, 0LL);
  }
  v5 = *(void **)(a1 + 4664);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 4936) )
    {
      KeSetEvent((PRKEVENT)(a1 + 4944), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 4936), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 4936), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v21);
      if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
      {
        if ( *(_QWORD *)(a1 + 5016) )
        {
          v19 = *(PVOID **)(a1 + 5016);
          if ( *v19 )
            PspQueueApcSpecialApc(*v19);
          ExFreePoolWithTag(v19, 0);
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
  {
    v7 = 20;
    Interval.QuadPart = -150000LL;
    while ( *(_DWORD *)(a1 + 5032) && v7 && *(_BYTE *)(a1 + 4486) >= 3u )
    {
      KeDelayExecutionThread(0, 0, &Interval);
      --v7;
    }
    v8 = KeGetCurrentThread();
    --v8->SpecialApcDisable;
    v9 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, a4);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 4488), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 4488, v9, a1 + 4488);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    ++*(_DWORD *)(a1 + 4500);
    *(_DWORD *)(a1 + 4496) = 1;
  }
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 4488);
    KeAbPostRelease(a1 + 4488);
    v11 = KeGetCurrentThread();
    v12 = v11->SpecialApcDisable + 1;
    v11->SpecialApcDisable = v12;
    if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
      KiCheckForKernelApcDelivery(v11);
  }
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v13);
  }
  if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
  v15 = *(_BYTE *)(a1 + 4484);
  if ( v15 )
  {
    if ( v15 == 1 )
      SmKmFileInfoCleanup(a1 + 4680);
  }
  else
  {
    v16 = *(void **)(a1 + 4680);
    if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    {
      v17 = *(void **)(a1 + 4688);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      SmKmStoreHelperCleanup(a1 + 4696);
      SmKmStoreHelperCleanup(a1 + 4816);
    }
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
  }
  result = SmFpCleanup(a1 + 5048);
  if ( (*(_BYTE *)(a1 + 4485) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 4672), 1, 1LL);
  return result;
}
