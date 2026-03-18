/*
 * XREFs of CmpDeleteKeyObject @ 0x1404C1BA0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 *     CmpWaitForLateUnloadWorker @ 0x1400D2A20 (CmpWaitForLateUnloadWorker.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x14012A410 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404460B8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1404470F4 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140447D3C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404C8A40 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpFlushNotify @ 0x1404ECD18 (CmpFlushNotify.c)
 *     CmpFreePostBlock @ 0x1404ECFB0 (CmpFreePostBlock.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14054B958 (CmpArmDelayDerefKCBWorker.c)
 *     CmpFireCleanupNotifications @ 0x140652B54 (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x140652BC8 (CmpFreeCallbackObjectContexts.c)
 */

void __fastcall CmpDeleteKeyObject(__int64 a1, __int64 a2, __int64 i, __int64 a4)
{
  char v4; // di
  char v5; // r15
  __int64 v7; // r13
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rax
  void *v10; // rcx
  _QWORD *v11; // rcx
  struct _KTHREAD *v12; // rax
  __int64 *v13; // r14
  signed __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // ecx
  __int64 v18; // rdx
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  char v23; // si
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int8 CurrentIrql; // r12
  __int64 *v27; // r14
  __int64 **v28; // rax
  bool v29; // zf
  unsigned __int8 v30; // di
  signed __int32 v31; // eax
  unsigned int v32; // edi
  __int64 v33; // rsi
  __int64 v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  struct _WORK_QUEUE_ITEM *v37; // rcx
  struct _KEVENT *v38; // rcx
  _QWORD v39[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v40[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v41[4]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v42[12]; // [rsp+70h] [rbp-9h] BYREF
  char v43; // [rsp+E0h] [rbp+67h]

  v4 = 0;
  v5 = 0;
  v7 = 0LL;
  v43 = 0;
  v40[1] = v40;
  v40[0] = v40;
  v8 = *(_DWORD *)(a1 + 48);
  memset(v41, 0, sizeof(v41));
  if ( (v8 & 4) != 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v41[0] = a1;
      CmpCallCallBacks(0xEu, (__int64)v41, 1, 25LL, a1, (__int64)v40);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  v10 = *(void **)(a1 + 56);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = v39;
  v39[1] = v39;
  v39[0] = v39;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
    v11 = (_QWORD *)v39[0];
  }
  v13 = *(__int64 **)(a1 + 8);
  if ( *(_DWORD *)a1 == 1803104306 )
  {
    if ( v13 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(v13);
        CmpFlushNotify(a1, 0LL, v39);
        CmpUnlockKcb(v13);
      }
LABEL_15:
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        v14 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * (unsigned int)i + 136),
                0LL,
                a1);
        if ( a1 == v14 )
          goto LABEL_23;
        if ( (unsigned __int64)(v14 - 1) <= 1 )
        {
          _mm_pause();
          goto LABEL_15;
        }
      }
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
      v15 = *(_QWORD *)(a1 + 32);
      v16 = *(_QWORD **)(a1 + 40);
      if ( *(_QWORD *)(v15 + 8) != a1 + 32 || *v16 != a1 + 32 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      CmpUnlockKcb(*(PVOID *)(a1 + 8));
LABEL_23:
      if ( (*((_DWORD *)v13 + 1) & 0x20000) == 0 )
      {
        v7 = v13[4];
        if ( *(_BYTE *)(v7 + 4112) == 1 )
        {
          v43 = 1;
          *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 16;
        }
      }
      if ( (*((_BYTE *)v13 + 186) & 4) != 0 && *(_DWORD *)v13 == 1 || (*((_DWORD *)v13 + 1) & 0x20) != 0 )
      {
        v32 = *((_DWORD *)v13 + 4);
        v33 = v13[4];
        CmpLockHashEntryExclusiveByKcb((ULONG_PTR)v13);
        CmpLockKcbExclusive(v13);
        CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v13);
        CmpUnlockKcb(v13);
        CmpUnlockHashEntry(v33, v32);
      }
      else
      {
        a2 = *(unsigned int *)v13;
        if ( (unsigned int)a2 <= 1 )
        {
LABEL_48:
          if ( (*((_DWORD *)v13 + 1) & 0x20000) != 0 && v13[3] != -1 )
          {
            CmpLockDeletedHashEntryExclusiveByKcb((ULONG_PTR)v13, a2, i, a4);
            CmpRemoveKeyHashFromDeletedKcbTable(v13[4], (_DWORD *)v13 + 4);
            CmpUnlockDeletedHashEntryByKcb((__int64)v13);
            v13[3] = -1LL;
          }
          v23 = 0;
          v24 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, a4);
          v25 = v24;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v24);
          if ( v25 )
            *(_BYTE *)(v25 + 26) |= 1u;
          *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
          *((_DWORD *)v13 + 2) |= 1u;
          v27 = v13 + 27;
          v28 = (__int64 **)qword_14034D9B8;
          *v27 = (__int64)&CmpDelayDerefKCBListHead;
          v27[1] = (__int64)v28;
          if ( *v28 != &CmpDelayDerefKCBListHead )
            __fastfail(3u);
          v29 = CmpDelayDerefKCBWorkItemActive == 0;
          *v28 = v27;
          qword_14034D9B8 = (__int64)v27;
          if ( v29 )
          {
            CmpDelayDerefKCBWorkItemActive = 1;
            v23 = 1;
          }
          v30 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
          *(&CmpDelayDerefKCBLock + 1) = 0LL;
          v31 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
          if ( v31 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v31);
          __writecr8(v30);
          KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
          if ( v23 )
            CmpArmDelayDerefKCBWorker();
        }
        else
        {
          while ( 1 )
          {
            v17 = a2 - 1;
            a2 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v13, a2 - 1, a2);
            if ( (_DWORD)a2 == v17 + 1 )
              break;
            if ( (unsigned int)a2 <= 1 )
              goto LABEL_48;
          }
        }
      }
      v4 = v43;
      goto LABEL_31;
    }
  }
  else if ( v13 && (*((_DWORD *)v13 + 1) & 0x20000) == 0 )
  {
    v7 = v13[4];
    if ( *(_BYTE *)(v7 + 4112) == 1 )
    {
      v4 = 1;
      v43 = 1;
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 17;
    }
    CmpDereferenceKeyControlBlock(v13);
LABEL_31:
    if ( v4 == 1 )
    {
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 5500), 1u) & 0x7F) + 5504) = 18;
      CmpDoQueueLateUnloadWorker(v7, a2, i, a4);
    }
    v5 = v43;
    v11 = (_QWORD *)v39[0];
  }
  if ( CmpPuntBoot )
    goto LABEL_39;
  ExReleaseResourceLite(&CmpRegistryLock);
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  LOBYTE(v18) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v18);
  while ( 1 )
  {
    v11 = (_QWORD *)v39[0];
LABEL_39:
    if ( v11 == v39 )
      break;
    v34 = *v11;
    if ( (_QWORD *)v11[1] != v39 || *(_QWORD **)(v34 + 8) != v11 )
      __fastfail(3u);
    v39[0] = *v11;
    v35 = v11 - 2;
    *(_QWORD *)(v34 + 8) = v39;
    if ( (unsigned __int16)*((_DWORD *)v11 + 10) != 3 )
    {
      v38 = *(struct _KEVENT **)v35[8];
LABEL_88:
      KeSetEvent(v38, 0, 0);
      ObfDereferenceObject(*(PVOID *)v35[8]);
      goto LABEL_89;
    }
    v36 = v35[8];
    v37 = *(struct _WORK_QUEUE_ITEM **)(v36 + 8);
    if ( v37 )
      ExQueueWorkItem(v37, *(WORK_QUEUE_TYPE *)(v36 + 16));
    v38 = *(struct _KEVENT **)v35[8];
    if ( v38 )
      goto LABEL_88;
LABEL_89:
    CmpFreePostBlock(v35);
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v40[0] != v40 )
  {
    memset(&v42[1], 0, 0x30uLL);
    v42[2] = v41;
    v42[0] = 0LL;
    LODWORD(v42[1]) = 0;
    LODWORD(v42[3]) = 0;
    CmpCallCallBacks(0x19u, (__int64)v42, 0, 25LL, 0LL, (__int64)v40);
  }
  if ( v5 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker((__int64)v11, a2, i, a4);
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
