/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x14000C668
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     FsRtlReleaseEofLock @ 0x1400C4CE0 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1401D3E58 (KeSetEventBoostPriority.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x14000C360 (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x14000C480 (KiAbFindWakeupLockEntry.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
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
  __int64 v9; // r13
  int *v10; // rdi
  __int64 v11; // r12
  int v13; // ebp
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v15; // rax
  int v16; // r14d
  bool v17; // bl
  int v18; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  char v20; // al
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  char v25; // al
  bool v26; // zf
  __m128i *WakeupLockEntry; // rax
  __int64 v28; // rdi
  _QWORD *v29; // r12
  struct _KPRCB *v30; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v32; // r8
  struct _KPRCB *v33; // r13
  int v34; // r8d
  _QWORD *v35; // rdx
  _QWORD *v36; // [rsp+30h] [rbp-58h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v38; // [rsp+90h] [rbp+8h]

  v9 = a4;
  v10 = a3;
  v11 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v13 = 2;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  ((void (*)(void))KiAcquireKobjectLockSafe)();
  *(_DWORD *)(a1 + 4) = 1;
  v15 = *(_QWORD **)(a1 + 8);
  v16 = 0;
  if ( v15 == (_QWORD *)(a1 + 8) )
    goto LABEL_2;
  while ( 1 )
  {
    v22 = v15;
    v36 = (_QWORD *)*v15;
    v23 = *v15;
    v24 = (_QWORD *)v15[1];
    if ( *(_QWORD **)(v23 + 8) != v22 || (_QWORD *)*v24 != v22 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    v25 = *((_BYTE *)v22 + 16);
    if ( v25 != 1 )
    {
      if ( v25 != 2 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v22, 256LL, 0LL) )
          --v16;
        goto LABEL_44;
      }
      *((_BYTE *)v22 + 17) = 5;
      v28 = v22[3];
      *v22 = 0LL;
      v29 = (_QWORD *)(v28 + 8);
      __writecr8(2uLL);
      v30 = KeGetCurrentPrcb();
      v38 = v30;
      CurrentThread = v30->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v32) = KeIsThreadRunning(v30->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v22, v32);
      }
      KiAcquireKobjectLockSafe(v28);
      if ( (_QWORD *)*v29 == v29
        || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v28 && CurrentThread->WaitReason == 15 )
      {
        v33 = v38;
      }
      else
      {
        v33 = v38;
        if ( (unsigned __int8)KiWakeQueueWaiter(v38, v28, v22) )
        {
LABEL_40:
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          v26 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v26 )
            goto LABEL_15;
          v11 = a2;
          goto LABEL_44;
        }
      }
      v34 = *(_DWORD *)(v28 + 4);
      *(_DWORD *)(v28 + 4) = v34 + 1;
      v35 = *(_QWORD **)(v28 + 32);
      if ( *v35 != v28 + 24 )
        __fastfail(3u);
      *v22 = v28 + 24;
      v22[1] = v35;
      *v35 = v22;
      *(_QWORD *)(v28 + 32) = v22;
      if ( !v34 && (_QWORD *)*v29 != v29 )
        KiWakeOtherQueueWaiters(v33, v28);
      goto LABEL_40;
    }
    if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v22, *((unsigned __int16 *)v22 + 9), v11) )
    {
      v26 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v26 )
        break;
    }
LABEL_44:
    v15 = v36;
    if ( v36 == (_QWORD *)(a1 + 8) )
      goto LABEL_15;
  }
  ++v16;
LABEL_15:
  v10 = a3;
  v9 = a4;
LABEL_2:
  if ( a2 )
    v17 = v16 > 0;
  else
    v17 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v18 = *v10;
    if ( *v10 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        WakeupLockEntry = KiAbFindWakeupLockEntry(v9, (__int64)&Next[-27]);
        if ( WakeupLockEntry )
          KiAbApplyWakeupBoost(v18, (__int64)WakeupLockEntry, 1LL);
      }
    }
    goto LABEL_7;
  }
  v20 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  if ( v10 )
  {
    if ( *v10 )
    {
      if ( *(char *)v10 > v20 )
        v20 = *(_BYTE *)v10;
    }
    else
    {
      v17 = 0;
    }
  }
  if ( !v17 )
  {
LABEL_7:
    v13 = 1;
    v20 = 1;
  }
  LOBYTE(a5) = CurrentIrql;
  return KiExitDispatcher((_DWORD)CurrentPrcb, 0, v13, v20, a5, a6, a7, a8, a9);
}
