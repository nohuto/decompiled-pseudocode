/*
 * XREFs of CmpDeleteKeyObject @ 0x14043B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CmpWaitForLateUnloadWorker @ 0x14009DBF4 (CmpWaitForLateUnloadWorker.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     CmpFlushNotify @ 0x1403E435C (CmpFlushNotify.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404BFF98 (CmpArmDelayDerefKCBWorker.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404F7984 (CmpDoQueueLateUnloadWorker.c)
 *     CmpFireCleanupNotifications @ 0x1405FB558 (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405FB5CC (CmpFreeCallbackObjectContexts.c)
 */

__int64 __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v1; // r12
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r8d
  _QWORD *v6; // rax
  struct _KTHREAD *v7; // rax
  ULONG_PTR v8; // rdi
  char v9; // r9
  unsigned int i; // r8d
  signed __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  unsigned __int32 v15; // edx
  unsigned __int32 v16; // ecx
  __int64 v17; // rdx
  struct _KTHREAD *v18; // rcx
  char v19; // r13
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  bool v25; // zf
  unsigned __int8 v26; // di
  signed __int32 v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  struct _WORK_QUEUE_ITEM *v31; // rcx
  struct _KEVENT *v32; // rcx
  _QWORD v33[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v35[4]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v36[8]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 v37; // [rsp+E0h] [rbp+67h]

  v1 = 0;
  v34[1] = v34;
  v34[0] = v34;
  result = *(unsigned int *)(a1 + 48);
  memset(v35, 0, sizeof(v35));
  if ( (result & 4) != 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v35[0] = a1;
      LOBYTE(v5) = 1;
      CmpCallCallBacks(14, (unsigned int)v35, v5, 25, a1, (__int64)v34);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 56) )
    CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
  v33[1] = v33;
  v6 = v33;
  v33[0] = v33;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
    v6 = (_QWORD *)v33[0];
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 == 1803104306 )
  {
    if ( v8 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(v8);
        CmpFlushNotify(a1, 0LL, v33);
        CmpUnlockKcb((char *)v8);
      }
      v9 = 0;
LABEL_16:
      for ( i = 0; i < 4; ++i )
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 128), 0LL, a1);
        if ( a1 == v11 )
          goto LABEL_26;
        if ( (unsigned __int64)(v11 - 1) <= 1 )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          v9 = 1;
          goto LABEL_16;
        }
      }
      if ( !v9 )
      {
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        v9 = 1;
      }
      v12 = *(_QWORD *)(a1 + 32);
      v13 = *(_QWORD **)(a1 + 40);
      if ( *(_QWORD *)(v12 + 8) != a1 + 32 || *v13 != a1 + 32 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
LABEL_26:
      if ( v9 )
        CmpUnlockKcb(*(char **)(a1 + 8));
      v14 = *(_QWORD *)(v8 + 24);
      if ( *(_BYTE *)(v14 + 4112) == 1 )
      {
        v1 = 1;
        *(_DWORD *)(v14 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5500), 1u) & 0x7F) + 5504) = 16;
      }
      if ( ((*(_BYTE *)(v8 + 178) & 4) == 0 || *(_DWORD *)v8 != 1) && (*(_DWORD *)(v8 + 4) & 0x20) == 0 )
      {
        v15 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 <= 1u )
        {
LABEL_49:
          v19 = 0;
          v20 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0);
          v21 = v20;
          CurrentIrql = KeGetCurrentIrql();
          v37 = CurrentIrql;
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
          {
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v20);
            CurrentIrql = v37;
          }
          if ( v21 )
            *(_BYTE *)(v21 + 26) |= 1u;
          *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
          *(_BYTE *)(v8 + 56) |= 1u;
          v23 = (_QWORD *)(v8 + 216);
          v24 = (_QWORD *)qword_140322B58;
          if ( *(__int64 **)qword_140322B58 != &CmpDelayDerefKCBListHead )
            __fastfail(3u);
          v25 = CmpDelayDerefKCBWorkItemActive == 0;
          *v23 = &CmpDelayDerefKCBListHead;
          v23[1] = v24;
          *v24 = v23;
          qword_140322B58 = (__int64)v23;
          if ( v25 )
          {
            CmpDelayDerefKCBWorkItemActive = 1;
            v19 = 1;
          }
          v26 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
          *(&CmpDelayDerefKCBLock + 1) = 0LL;
          v27 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
          if ( v27 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v27);
          __writecr8(v26);
          KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
          if ( v19 )
            CmpArmDelayDerefKCBWorker();
        }
        else
        {
          while ( 1 )
          {
            v16 = v15 - 1;
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)v8, v15 - 1, v15);
            if ( v15 == v16 + 1 )
              break;
            if ( v15 <= 1 )
              goto LABEL_49;
          }
        }
        goto LABEL_34;
      }
LABEL_67:
      CmpDereferenceKeyControlBlock(v8);
LABEL_34:
      if ( v1 == 1 )
      {
        *(_DWORD *)(v14 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5500), 1u) & 0x7F) + 5504) = 18;
        CmpDoQueueLateUnloadWorker(v14);
      }
      v6 = (_QWORD *)v33[0];
    }
  }
  else if ( v8 )
  {
    v14 = *(_QWORD *)(v8 + 24);
    if ( *(_BYTE *)(v14 + 4112) == 1 )
    {
      v1 = 1;
      *(_DWORD *)(v14 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5500), 1u) & 0x7F) + 5504) = 17;
    }
    goto LABEL_67;
  }
  if ( CmpPuntBoot )
    goto LABEL_40;
  ExReleaseResourceLite(&CmpRegistryLock);
  KeLeaveCriticalRegion();
  LOBYTE(v17) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v17);
  while ( 1 )
  {
    v6 = (_QWORD *)v33[0];
LABEL_40:
    if ( v6 == v33 )
      break;
    v28 = *v6;
    if ( (_QWORD *)v6[1] != v33 || *(_QWORD **)(v28 + 8) != v6 )
      __fastfail(3u);
    v33[0] = *v6;
    v29 = (__int64)(v6 - 2);
    *(_QWORD *)(v28 + 8) = v33;
    if ( (unsigned __int16)*((_DWORD *)v6 + 10) != 3 )
    {
      v32 = **(struct _KEVENT ***)(v29 + 64);
LABEL_83:
      KeSetEvent(v32, 0, 0);
      ObfDereferenceObject(**(PVOID **)(v29 + 64));
      goto LABEL_84;
    }
    v30 = *(_QWORD *)(v29 + 64);
    v31 = *(struct _WORK_QUEUE_ITEM **)(v30 + 8);
    if ( v31 )
      ExQueueWorkItem(v31, *(WORK_QUEUE_TYPE *)(v30 + 16));
    v32 = **(struct _KEVENT ***)(v29 + 64);
    if ( v32 )
      goto LABEL_83;
LABEL_84:
    CmpFreePostBlock(v29);
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v34[0] != v34 )
  {
    memset(&v36[1], 0, 0x30uLL);
    v36[0] = 0LL;
    v36[2] = v35;
    LODWORD(v36[1]) = 0;
    LODWORD(v36[3]) = 0;
    CmpCallCallBacks(25, (unsigned int)v36, 0, 25, 0LL, (__int64)v34);
  }
  if ( v1 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker();
  v18 = KeGetCurrentThread();
  result = (unsigned int)++v18->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&v18->152;
    if ( *(_QWORD *)result != result && !v18->SpecialApcDisable )
      return KiCheckForKernelApcDelivery((__int64)v18);
  }
  return result;
}
