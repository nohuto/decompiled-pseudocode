/*
 * XREFs of KiAbProcessContextSwitch @ 0x140083550
 * Callers:
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KxDispatchInterrupt @ 0x14015AA10 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiAbCpuBoostOwners @ 0x140031714 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140031DCC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140031E44 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCount @ 0x140031E90 (KiAbTryIncrementIoWaiterCount.c)
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140035614 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400356AC (KiAbEntryGetCpuPriorityKey.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiAbIoBoostOwners @ 0x1400E60F8 (KiAbIoBoostOwners.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r13
  char v4; // al
  __int64 p_AbSelfIoBoostsList; // r12
  __int64 v6; // r8
  int v7; // r14d
  unsigned int v8; // r14d
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rax
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // dl
  _QWORD *v16; // rcx
  _QWORD *v17; // rdi
  char v18; // cl
  char v19; // al
  __int64 v20; // rax
  char v21; // r15
  char CpuPriorityKey; // di
  int v23; // r9d
  char v24; // al
  char v25; // r8
  char v26; // cl
  _QWORD *v27; // rdx
  volatile signed __int16 *v28; // rdi
  signed __int32 v29[8]; // [rsp+0h] [rbp-49h] BYREF
  __int64 v30; // [rsp+40h] [rbp-9h]
  _QWORD *v31; // [rsp+48h] [rbp-1h] BYREF
  struct _KPRCB *v32; // [rsp+50h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+58h] [rbp+Fh] BYREF
  __int16 v34; // [rsp+B0h] [rbp+67h] BYREF
  int v35; // [rsp+C0h] [rbp+77h]
  _QWORD *v36; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 1418)) == 0x3F || !KiAbEnabled )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1418);
  v31 = 0LL;
  v36 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v32 = CurrentPrcb;
  if ( v4 == 63 )
    goto LABEL_24;
  v6 = a1 + 800;
  v7 = *(char *)(a1 + 792) | *(char *)(a1 + 1418);
  v30 = a1 + 800;
  v8 = v7 ^ 0x3F;
  v9 = !_BitScanForward((unsigned int *)&a1, v8);
  if ( v9 )
    goto LABEL_24;
  do
  {
    v8 &= v8 - 1;
    v10 = v6 + 96 * a1;
    v11 = *(_QWORD *)(v10 + 32);
    if ( v11 && (v11 & 2) == 0 && (v11 & 1) == 0 )
    {
      if ( *(__int64 *)(v10 + 32) >= 0 )
        goto LABEL_10;
      if ( (*(_BYTE *)(v10 + 27) & 1) == 0 )
      {
        if ( (*(_BYTE *)(v10 + 25) & 1) == 0 )
        {
          if ( KiAbOwnerComputeCpuPriorityKey(v6 + 96 * a1) == *(_BYTE *)(v10 + 48) )
            goto LABEL_21;
LABEL_10:
          LockedHeadEntry = (_RTL_RB_TREE *)KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v10, 1LL, &v33);
          v13 = (__int64)LockedHeadEntry;
          if ( !LockedHeadEntry )
          {
LABEL_21:
            v6 = v30;
            goto LABEL_22;
          }
          if ( (*(_BYTE *)(v10 + 25) & 1) == 0 )
          {
            if ( (_RTL_RB_TREE *)v10 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v10, LockedHeadEntry);
            if ( *(_WORD *)(v13 + 90) )
              HIBYTE(v34) = 2;
            else
              HIBYTE(v34) = 0;
            v14 = *(_QWORD *)(v13 + 72);
            if ( v14 )
              v15 = *(_BYTE *)(v14 + 48);
            else
              v15 = 0;
            v9 = (*(_BYTE *)(v13 + 25) & 1) == 0;
            LOBYTE(v34) = v15;
            if ( !v9 )
            {
              v25 = *(_BYTE *)(v13 - (unsigned __int16)(16 * *(unsigned __int8 *)(v13 + 24)) + 195);
              if ( v25 > 15 )
                v25 = 15;
              v26 = v15;
              if ( v25 > v15 )
                v26 = v25;
              LOBYTE(v34) = v26;
            }
            if ( v34
              && (unsigned int)KiAbSetMinimumThreadPriority(
                                 v10,
                                 (char *)&v34,
                                 (__int64)&v31,
                                 (__int64)&v36,
                                 p_AbSelfIoBoostsList)
              && v10 != v13 )
            {
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v10, (_RTL_RB_TREE *)v13);
            }
LABEL_20:
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&v33);
            goto LABEL_21;
          }
          if ( (_RTL_RB_TREE *)v10 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v10, LockedHeadEntry);
          v19 = 0;
          if ( *(_WORD *)(v13 + 90) )
            v19 = 2;
          HIBYTE(v34) = v19;
          v20 = *(_QWORD *)(v13 + 56);
          if ( v20 )
            v21 = *(_BYTE *)(v20 + 48);
          else
            v21 = 15;
          v9 = (*(_BYTE *)(v13 + 25) & 1) == 0;
          LOBYTE(v34) = v21;
          if ( v9 )
          {
            v24 = KiAbOwnerComputeCpuPriorityKey(v13);
            if ( v24 < v21 )
            {
              v21 = v24;
              LOBYTE(v34) = v24;
            }
          }
          KiAbTryIncrementIoWaiterCount((unsigned __int8 *)v10, v13);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)v10);
          if ( v21 < CpuPriorityKey )
          {
            if ( v23 )
              goto LABEL_43;
          }
          else
          {
            if ( !v23 )
              goto LABEL_20;
LABEL_43:
            KiAbIoBoostOwners(v13, &v31, &v36, p_AbSelfIoBoostsList);
          }
          KiAbCpuBoostOwners(v13, CpuPriorityKey, (int)&v31, (int)&v36, p_AbSelfIoBoostsList);
          goto LABEL_20;
        }
        v18 = *(_BYTE *)(v10 - (unsigned __int16)(16 * *(unsigned __int8 *)(v10 + 24)) + 195);
        if ( v18 > 15 )
          v18 = 15;
        if ( v18 != *(_BYTE *)(v10 + 48) )
          goto LABEL_10;
      }
    }
LABEL_22:
    v9 = !_BitScanForward((unsigned int *)&a1, v8);
    v35 = a1;
  }
  while ( !v9 );
  v16 = v36;
  for ( CurrentPrcb = v32; v36; v16 = v36 )
  {
    v28 = (volatile signed __int16 *)(v16 - 172);
    v36 = (_QWORD *)*v16;
    *v16 = 1LL;
    _InterlockedOr(v29, 0);
    if ( *((_BYTE *)v16 - 583) )
      KiAbProcessThreadLocks((__int64)(v16 - 172), 0, 1, 0, (__int64)&v31, (__int64)&v36, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v28 + 708);
  }
LABEL_24:
  v17 = v31;
  while ( v17 )
  {
    v27 = v17 - 27;
    v17 = (_QWORD *)*v17;
    KiDeferredReadyThread(CurrentPrcb, v27);
  }
  if ( a2 )
    KiCheckForThreadDispatch((__int64)CurrentPrcb, 2u);
}
