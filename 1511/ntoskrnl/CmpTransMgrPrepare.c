/*
 * XREFs of CmpTransMgrPrepare @ 0x1403D6C54
 * Callers:
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x1405E6328 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpIsHiveBoundToTrans @ 0x1404C342C (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1404C4668 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v15; // rsi
  ULONG_PTR i; // rcx
  __int64 NextActiveHive; // rax
  ULONG_PTR v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // rsi
  BOOLEAN v25; // bl
  struct _EX_RUNDOWN_REF *v26; // rcx
  char v27; // bl
  __int64 v28; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a2 + 104) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(a2 + 16) != a2 + 16 )
  {
    CmpLockRegistry(v11, v10, v12, v13);
    v28 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a2 + 16, &v28, 0LL);
      if ( !NextElement )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 5400LL) == a1 )
        ++*a3;
    }
    v15 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
    if ( v15 )
    {
      v25 = ExAcquireRundownProtection(v15 + 347);
      CmpUnlockRegistry();
      if ( v25 )
      {
        v5 = CmpTransMgrSyncHive((ULONG_PTR)v15);
        v26 = v15 + 347;
LABEL_21:
        ExReleaseRundownProtection_0(v26);
      }
      return v5;
    }
    for ( i = 0LL; ; i = v18 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v18 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( *(_QWORD *)(NextActiveHive + 5400) == a1
        && (*(_DWORD *)(NextActiveHive + 144) & 2) == 0
        && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) == 1 )
      {
        CmpUnlockRegistry();
        v5 = CmpTransMgrSyncHive(v18);
        if ( (v5 & 0x80000000) != 0 )
        {
          v26 = (struct _EX_RUNDOWN_REF *)(v18 + 2776);
          goto LABEL_21;
        }
        CmpLockRegistry(v20, v19, v21, v22);
      }
    }
    v23 = qword_1402C77F0;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_1402C77F0 + 64) + 144LL) & 1) != 0 )
    {
      CmpUnlockRegistry();
      return v5;
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(qword_1402C77F0 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v23 + 2840));
    v27 = HvpMarkDirty(v23);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v23 + 2840));
    if ( v27 )
    {
      *(_DWORD *)(*(_QWORD *)(v23 + 64) + 144LL) |= 1u;
      ExReleaseResourceLite(*(PERESOURCE *)(v23 + 2848));
      CmpUnlockRegistry();
      if ( (int)CmpFlushHive(v23) >= 0 )
        return v5;
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v23 + 2848));
      CmpUnlockRegistry();
    }
    return (unsigned int)-1073741670;
  }
  *a4 = 1;
  return 0LL;
}
