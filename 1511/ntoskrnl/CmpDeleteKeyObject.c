/*
 * XREFs of CmpDeleteKeyObject @ 0x1404036E0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CmpWaitForLateUnloadWorker @ 0x1400D2698 (CmpWaitForLateUnloadWorker.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1400EB160 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403DB1AC (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1403DC2D0 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1403FB6B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpFlushNotify @ 0x140499B90 (CmpFlushNotify.c)
 *     CmpFreePostBlock @ 0x14049A918 (CmpFreePostBlock.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404B5C08 (CmpArmDelayDerefKCBWorker.c)
 *     CmpFireCleanupNotifications @ 0x1405DD628 (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405DD69C (CmpFreeCallbackObjectContexts.c)
 */

__int64 __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v1; // di
  char v2; // r15
  __int64 v4; // r13
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  void *v8; // rcx
  _QWORD *v9; // rcx
  struct _KTHREAD *v10; // rax
  ULONG_PTR v11; // r14
  unsigned int i; // r8d
  signed __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned __int32 v19; // edx
  unsigned __int32 v20; // ecx
  __int64 v21; // rdx
  struct _KTHREAD *v22; // rcx
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

  v1 = 0;
  v2 = 0;
  v4 = 0LL;
  v43 = 0;
  v40[1] = v40;
  v40[0] = v40;
  result = *(unsigned int *)(a1 + 48);
  memset(v41, 0, sizeof(v41));
  if ( (result & 4) != 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v41[0] = a1;
      LOBYTE(v7) = 1;
      CmpCallCallBacks(14, (unsigned int)v41, v7, 25, a1, (__int64)v40);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  v8 = *(void **)(a1 + 56);
  if ( v8 )
    ObfDereferenceObject(v8);
  v9 = v39;
  v39[1] = v39;
  v39[0] = v39;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
    v9 = (_QWORD *)v39[0];
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 == 1803104306 )
  {
    if ( v11 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(v11);
        CmpFlushNotify(a1, 0LL, v39);
        CmpUnlockKcb((char *)v11);
      }
LABEL_15:
      for ( i = 0; i < 4; ++i )
      {
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 136), 0LL, a1);
        if ( a1 == v13 )
          goto LABEL_29;
        if ( (unsigned __int64)(v13 - 1) <= 1 )
        {
          _mm_pause();
          goto LABEL_15;
        }
      }
      v14 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v14 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v14 + 64) = CmpLockTableAdd(*(_QWORD *)(a1 + 8), 1);
      v15 = KeAbPreAcquire(v14 + 48, 0LL, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 48), v15, v14 + 48);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(v14 + 56) = KeGetCurrentThread();
      v17 = *(_QWORD *)(a1 + 32);
      v18 = *(_QWORD **)(a1 + 40);
      if ( *(_QWORD *)(v17 + 8) != a1 + 32 || *v18 != a1 + 32 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      CmpUnlockKcb(*(char **)(a1 + 8));
LABEL_29:
      if ( (*(_DWORD *)(v11 + 4) & 0x20000) == 0 )
      {
        v4 = *(_QWORD *)(v11 + 32);
        if ( *(_BYTE *)(v4 + 4112) == 1 )
        {
          v43 = 1;
          *(_DWORD *)(v4 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 5500), 1u) & 0x7F) + 5504) = 16;
        }
      }
      if ( (*(_BYTE *)(v11 + 186) & 4) != 0 && *(_DWORD *)v11 == 1 || (*(_DWORD *)(v11 + 4) & 0x20) != 0 )
      {
        v32 = *(_DWORD *)(v11 + 16);
        v33 = *(_QWORD *)(v11 + 32);
        CmpLockHashEntryExclusiveByKcb(v11);
        CmpLockKcbExclusive(v11);
        CmpDereferenceKeyControlBlockWithLock(v11, 0LL);
        CmpUnlockKcb((char *)v11);
        CmpUnlockHashEntry(v33, v32);
      }
      else
      {
        v19 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 <= 1u )
        {
LABEL_52:
          if ( (*(_DWORD *)(v11 + 4) & 0x20000) != 0 && *(_QWORD *)(v11 + 24) != -1LL )
          {
            CmpLockDeletedHashEntryExclusiveByKcb(v11);
            CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(v11 + 32), (_DWORD *)(v11 + 16));
            CmpUnlockDeletedHashEntryByKcb(v11);
            *(_QWORD *)(v11 + 24) = -1LL;
          }
          v23 = 0;
          v24 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL);
          v25 = v24;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v24);
          if ( v25 )
            *(_BYTE *)(v25 + 26) |= 1u;
          *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
          *(_DWORD *)(v11 + 8) |= 1u;
          v27 = (__int64 *)(v11 + 216);
          v28 = (__int64 **)qword_1402FD558;
          *v27 = (__int64)&CmpDelayDerefKCBListHead;
          v27[1] = (__int64)v28;
          if ( *v28 != &CmpDelayDerefKCBListHead )
            __fastfail(3u);
          v29 = CmpDelayDerefKCBWorkItemActive == 0;
          *v28 = v27;
          qword_1402FD558 = (__int64)v27;
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
            v20 = v19 - 1;
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v19 - 1, v19);
            if ( v19 == v20 + 1 )
              break;
            if ( v19 <= 1 )
              goto LABEL_52;
          }
        }
      }
      v1 = v43;
      goto LABEL_37;
    }
  }
  else if ( v11 && (*(_DWORD *)(v11 + 4) & 0x20000) == 0 )
  {
    v4 = *(_QWORD *)(v11 + 32);
    if ( *(_BYTE *)(v4 + 4112) == 1 )
    {
      v1 = 1;
      v43 = 1;
      *(_DWORD *)(v4 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 5500), 1u) & 0x7F) + 5504) = 17;
    }
    CmpDereferenceKeyControlBlock(v11);
LABEL_37:
    if ( v1 == 1 )
    {
      *(_DWORD *)(v4 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 5500), 1u) & 0x7F) + 5504) = 18;
      CmpDoQueueLateUnloadWorker(v4);
    }
    v2 = v43;
    v9 = (_QWORD *)v39[0];
  }
  if ( CmpPuntBoot )
    goto LABEL_43;
  ExReleaseResourceLite(&CmpRegistryLock);
  KeLeaveCriticalRegion();
  LOBYTE(v21) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v21);
  while ( 1 )
  {
    v9 = (_QWORD *)v39[0];
LABEL_43:
    if ( v9 == v39 )
      break;
    v34 = *v9;
    if ( (_QWORD *)v9[1] != v39 || *(_QWORD **)(v34 + 8) != v9 )
      __fastfail(3u);
    v39[0] = *v9;
    v35 = v9 - 2;
    *(_QWORD *)(v34 + 8) = v39;
    if ( (unsigned __int16)*((_DWORD *)v9 + 10) != 3 )
    {
      v38 = *(struct _KEVENT **)v35[8];
LABEL_90:
      KeSetEvent(v38, 0, 0);
      ObfDereferenceObject(*(PVOID *)v35[8]);
      goto LABEL_91;
    }
    v36 = v35[8];
    v37 = *(struct _WORK_QUEUE_ITEM **)(v36 + 8);
    if ( v37 )
      ExQueueWorkItem(v37, *(WORK_QUEUE_TYPE *)(v36 + 16));
    v38 = *(struct _KEVENT **)v35[8];
    if ( v38 )
      goto LABEL_90;
LABEL_91:
    CmpFreePostBlock(v35);
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v40[0] != v40 )
  {
    memset(&v42[1], 0, 0x30uLL);
    v42[2] = v41;
    v42[0] = 0LL;
    LODWORD(v42[1]) = 0;
    LODWORD(v42[3]) = 0;
    CmpCallCallBacks(25, (unsigned int)v42, 0, 25, 0LL, (__int64)v40);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker();
  v22 = KeGetCurrentThread();
  result = (unsigned int)++v22->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&v22->152;
    if ( *(_QWORD *)result != result && !v22->SpecialApcDisable )
      return KiCheckForKernelApcDelivery((__int64)v22);
  }
  return result;
}
