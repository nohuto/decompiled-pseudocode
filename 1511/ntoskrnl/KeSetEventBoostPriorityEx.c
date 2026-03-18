/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x14007CAE0
 * Callers:
 *     FsRtlReleaseEofLock @ 0x14001FAA0 (FsRtlReleaseEofLock.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KeSetEventBoostPriority @ 0x1401C4ED8 (KeSetEventBoostPriority.c)
 * Callees:
 *     KiAbFindWakeupLockEntry @ 0x1400322C8 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x140032408 (KiAbApplyWakeupBoost.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int *v9; // r13
  int v12; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v14; // r15
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // al
  bool v20; // zf
  bool v21; // si
  char v22; // al
  int v24; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rax
  __m128i *WakeupLockEntry; // rax
  char v27; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // [rsp+30h] [rbp-68h]
  _QWORD *v34; // [rsp+38h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  struct _KPRCB *v36; // [rsp+50h] [rbp-48h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-40h]
  int v38; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v9 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v12 = 2;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v38 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v38, a2, (__int64)a3);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v14 = *(_QWORD **)(a1 + 8);
  v15 = 0;
  *(_DWORD *)(a1 + 4) = 1;
  while ( v14 != (_QWORD *)(a1 + 8) )
  {
    v16 = (__int64)v14;
    v14 = (_QWORD *)*v14;
    v34 = (_QWORD *)v16;
    v17 = *(_QWORD *)v16;
    v18 = *(_QWORD **)(v16 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = *(_BYTE *)(v16 + 16);
    if ( v19 == 1 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), a2) )
      {
        v20 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v20 )
        {
          ++v15;
          break;
        }
      }
    }
    else if ( v19 == 2 )
    {
      *(_BYTE *)(v16 + 17) = 5;
      v33 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)v16 = 0LL;
      __writecr8(2uLL);
      v36 = KeGetCurrentPrcb();
      CurrentThread = v36->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
        EtwTraceEnqueueWork(v30, v29, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v33, v16, (__int64)a3);
      v31 = v33;
      if ( *(_QWORD *)(v33 + 16) == v33 + 8
        || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v33 && CurrentThread->WaitReason == 15
        || (v32 = KiWakeQueueWaiter(v36, v33, v34), v31 = v33, !v32) )
      {
        ++*(_DWORD *)(v31 + 4);
        a3 = *(int **)(v31 + 32);
        *v34 = v31 + 24;
        v34[1] = a3;
        if ( *(_QWORD *)a3 != v31 + 24 )
          __fastfail(3u);
        *(_QWORD *)a3 = v34;
        *(_QWORD *)(v31 + 32) = v34;
      }
      _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
      v20 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v20 )
        break;
    }
    else if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, 256LL, 0LL) )
    {
      --v15;
    }
  }
  if ( a2 )
    v21 = v15 > 0;
  else
    v21 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v24 = *v9;
    if ( *v9 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( KiAbEnabled )
        {
          WakeupLockEntry = KiAbFindWakeupLockEntry(v39, (__int64)&Next[-27]);
          if ( WakeupLockEntry )
            KiAbApplyWakeupBoost(v24, (__int64)WakeupLockEntry, 1);
        }
      }
    }
    goto LABEL_14;
  }
  v22 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  if ( !v9 )
  {
LABEL_24:
    if ( v21 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( *v9 )
  {
    v27 = v22;
    if ( *(char *)v9 > v22 )
      v27 = *(_BYTE *)v9;
    v22 = v27;
    goto LABEL_24;
  }
LABEL_14:
  v12 = 1;
  v22 = 1;
LABEL_15:
  LOBYTE(a5) = CurrentIrql;
  return KiExitDispatcher((_DWORD)CurrentPrcb, 0, v12, v22, a5, a6, a7, a8, a9);
}
