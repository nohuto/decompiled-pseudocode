/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400F7F80 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     SmFpCleanup @ 0x1400F6A78 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F6D04 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1400F7D54 (SmKmStoreHelperCleanup.c)
 *     SmAcquireReleaseCharges @ 0x1400F8ECC (SmAcquireReleaseCharges.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x1404B8A08 (PspQueueApcSpecialApc.c)
 *     SmKmFileInfoCleanup @ 0x14065A208 (SmKmFileInfoCleanup.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v4; // esi
  int v5; // eax
  char v6; // al
  void *v7; // rbx
  void *v8; // rcx
  PVOID *v9; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-48h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v11; // [rsp+38h] [rbp-40h] BYREF

  *(_BYTE *)(a1 + 4485) |= 1u;
  if ( *(_QWORD *)(a1 + 4664) )
  {
    KeSetEvent((PRKEVENT)(a1 + 4616), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 4664), Executive, 0, 0, 0LL);
  }
  v2 = *(void **)(a1 + 4664);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
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
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)&v11);
      if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
      {
        if ( *(_QWORD *)(a1 + 5016) )
        {
          v9 = *(PVOID **)(a1 + 5016);
          if ( *v9 )
            PspQueueApcSpecialApc(*v9);
          ExFreePoolWithTag(v9, 0);
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
  {
    v4 = 20;
    Interval.QuadPart = -150000LL;
    while ( *(_DWORD *)(a1 + 5032) && v4 && *(_BYTE *)(a1 + 4486) >= 3u )
    {
      KeDelayExecutionThread(0, 0, &Interval);
      --v4;
    }
    v5 = StLockAcquireExclusive(a1 + 4488);
    ++*(_DWORD *)(a1 + 4500);
    *(_DWORD *)(a1 + 4496) = v5;
  }
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 4488), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 4488));
    KeAbPostRelease(a1 + 4488);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    KiUnstackDetachProcess(&v11, 0LL);
  v6 = *(_BYTE *)(a1 + 4484);
  if ( v6 )
  {
    if ( v6 == 1 )
      SmKmFileInfoCleanup(a1 + 4680);
  }
  else
  {
    v7 = *(void **)(a1 + 4680);
    if ( (*(_BYTE *)(a1 + 4485) & 4) != 0 )
    {
      v8 = *(void **)(a1 + 4688);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      SmKmStoreHelperCleanup(a1 + 4696);
      SmKmStoreHelperCleanup(a1 + 4816);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  SmFpCleanup(a1 + 5048);
  if ( (*(_BYTE *)(a1 + 4485) & 0x10) != 0 )
    SmAcquireReleaseCharges(*(unsigned int *)(a1 + 4672), 1LL, 1LL);
}
