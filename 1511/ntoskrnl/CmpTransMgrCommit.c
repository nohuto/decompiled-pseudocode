/*
 * XREFs of CmpTransMgrCommit @ 0x1403D6AEC
 * Callers:
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x1405E6328 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpIsHiveBoundToTrans @ 0x1404C342C (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1404C4668 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  char v5; // r9
  _QWORD *v8; // rsi
  __int64 NextElement; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  ULONG_PTR i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v22 = 0LL;
  v3 = 0;
  *a3 = 0;
  v5 = dword_14031C8F4;
  if ( dword_14031C8F4 )
  {
    ++dword_14031C8F4;
    if ( (v5 & 3) != 0 )
      return 3221225626LL;
  }
  v8 = (_QWORD *)(a2 + 16);
  if ( (_QWORD *)*v8 == v8 )
    return 0LL;
  v23 = MEMORY[0xFFFFF78000000014];
  while ( 1 )
  {
    NextElement = CmListGetNextElement(v8, &v22, 0LL);
    v14 = NextElement;
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 5400LL) == a1
      && (*(_DWORD *)(NextElement + 64) & 1) == 0 )
    {
      ++*a3;
      if ( v3 >= 0 )
      {
        v3 = CmpTransMgrCommitUoW(NextElement, &v23);
        if ( v3 >= 0 )
          *(_DWORD *)(v14 + 64) |= 1u;
      }
    }
  }
  if ( v3 >= 0 )
  {
    CmpLockRegistry(v11, v10, v12, v13);
    for ( i = CmpGetNextActiveHive(0LL); i; i = CmpGetNextActiveHive(i) )
    {
      if ( *(_QWORD *)(i + 5400) == a1
        && (*(_DWORD *)(i + 144) & 2) == 0
        && (unsigned __int8)CmpIsHiveBoundToTrans(i, a2) == 1 )
      {
        CmpUnlockRegistry();
        if ( (int)CmpTransMgrSyncHive(i) < 0 )
          v3 = -1073741670;
        CmpLockRegistry(v19, v18, v20, v21);
      }
    }
    CmpUnlockRegistry();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a2 + 104) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v3;
}
