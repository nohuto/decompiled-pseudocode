/*
 * XREFs of CmpTransMgrPrepare @ 0x1404BDEEC
 * Callers:
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x140605A30 (CmpRmUnDoPhase.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpTransMgrSyncHive @ 0x1404BE040 (CmpTransMgrSyncHive.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  ULONG_PTR v17; // rbx
  unsigned int v18; // edx
  __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  BOOLEAN v22; // bl
  struct _EX_RUNDOWN_REF *v23; // rcx
  char v24; // bl
  __int64 v25; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( *(_QWORD *)(a2 + 16) != a2 + 16 )
  {
    CmpLockRegistry();
    v25 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD *)(a2 + 16), &v25, 0);
      if ( !NextElement )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 24LL) + 5400LL) == a1 )
        ++*a3;
    }
    v14 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
    if ( v14 )
    {
      v22 = ExAcquireRundownProtection(v14 + 347);
      CmpUnlockRegistry();
      if ( v22 )
      {
        v5 = CmpTransMgrSyncHive((ULONG_PTR)v14);
        v23 = v14 + 347;
LABEL_26:
        ExReleaseRundownProtection(v23);
      }
      return v5;
    }
    for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v17 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v17 = (ULONG_PTR)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( NextActiveHive[675] == a1 && (NextActiveHive[18] & 2) == 0 )
      {
        v18 = *(_DWORD *)(a2 + 112);
        if ( v18 )
        {
          v19 = 0LL;
          while ( NextActiveHive != *(__int64 **)(a2 + 8 * v19 + 120) )
          {
            v19 = (unsigned int)(v19 + 1);
            if ( (unsigned int)v19 >= v18 )
              goto LABEL_10;
          }
        }
        CmpUnlockRegistry();
        v5 = CmpTransMgrSyncHive(v17);
        if ( (v5 & 0x80000000) != 0 )
        {
          v23 = (struct _EX_RUNDOWN_REF *)(v17 + 2776);
          goto LABEL_26;
        }
        CmpLockRegistry();
      }
LABEL_10:
      ;
    }
    v20 = qword_1402F2E60;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_1402F2E60 + 64) + 144LL) & 1) != 0 )
    {
      CmpUnlockRegistry();
      return v5;
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(qword_1402F2E60 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v20 + 2840));
    v24 = HvpMarkDirty(v20);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v20 + 2840));
    if ( v24 )
    {
      *(_DWORD *)(*(_QWORD *)(v20 + 64) + 144LL) |= 1u;
      ExReleaseResourceLite(*(PERESOURCE *)(v20 + 2848));
      CmpUnlockRegistry();
      if ( (int)CmpFlushHive(v20, 0) >= 0 )
        return v5;
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v20 + 2848));
      CmpUnlockRegistry();
    }
    return (unsigned int)-1073741670;
  }
  *a4 = 1;
  return 0LL;
}
