/*
 * XREFs of CmpTransMgrCommit @ 0x1404F0B68
 * Callers:
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x14065A808 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     CmpIsHiveBoundToTrans @ 0x1404F1D50 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1404F3070 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v7; // edi
  _QWORD *v8; // rsi
  __int64 NextElement; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 *i; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rax
  signed __int8 v22; // cf
  __int64 v23; // rbx
  signed __int32 v24; // eax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF
  __int64 v29; // [rsp+78h] [rbp+20h] BYREF

  v3 = dword_14036CC7C;
  v28 = 0LL;
  *a3 = 0;
  v7 = 0;
  if ( v3 )
  {
    dword_14036CC7C = v3 + 1;
    if ( (v3 & 3) != 0 )
      return 3221225626LL;
  }
  v8 = (_QWORD *)(a2 + 16);
  if ( (_QWORD *)*v8 == v8 )
    return 0LL;
  v29 = MEMORY[0xFFFFF78000000014];
  while ( 1 )
  {
    NextElement = CmListGetNextElement(v8, &v28, 0LL);
    v10 = NextElement;
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 5400LL) == a1
      && (*(_DWORD *)(NextElement + 64) & 1) == 0 )
    {
      ++*a3;
      if ( v7 >= 0 )
      {
        v7 = CmpTransMgrCommitUoW(NextElement, &v29);
        if ( v7 >= 0 )
          *(_DWORD *)(v10 + 64) |= 1u;
      }
    }
  }
  if ( v7 >= 0 )
  {
    CmpLockRegistry();
    for ( i = CmpGetNextActiveHive(0LL, v11, v12, v13);
          i;
          i = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)i, v14, v16, v17) )
    {
      if ( i[675] == a1 && (i[18] & 2) == 0 && (unsigned __int8)CmpIsHiveBoundToTrans(i, a2) == 1 )
      {
        CmpUnlockRegistry();
        if ( (int)CmpTransMgrSyncHive((ULONG_PTR)i) < 0 )
          v7 = -1073741670;
        CmpLockRegistry();
      }
    }
    CmpUnlockRegistry();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v19 = KeGetCurrentThread();
    v21 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v20);
    v22 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
    v23 = v21;
    if ( !v22 )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v21);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    qword_14034D768 = (__int64)v19;
    *(_DWORD *)(a2 + 104) |= 4u;
    qword_14034D768 = 0LL;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
    if ( v24 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v24);
    KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)v7;
}
