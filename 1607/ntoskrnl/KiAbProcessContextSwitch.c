/*
 * XREFs of KiAbProcessContextSwitch @ 0x14005C010
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     NtYieldExecution @ 0x140091250 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     KxDispatchInterrupt @ 0x1401663B0 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x1401D2B3C (KeRemovePriorityBoost.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x14006B564 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 *     KiAbIoBoostOwners @ 0x14006BA1C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14006BB0C (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14006BBEC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14006BE50 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14006BF58 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14006BF94 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14006C02C (KiAbOwnerComputeCpuPriorityKey.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14020EE94 (PsBoostThreadOutstandingIoQoS.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  _SINGLE_LIST_ENTRY *v5; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // r14d
  bool v10; // zf
  __int64 v11; // rbx
  _SINGLE_LIST_ENTRY *v12; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rax
  int v14; // r15d
  __int64 LockedHeadEntry; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  char v19; // cl
  __int64 v20; // rax
  char v21; // r12
  int v22; // r10d
  char CpuPriorityKey; // r13
  char v24; // al
  _BYTE *v25; // rdx
  __int64 v26; // r14
  volatile signed __int16 *v27; // rdi
  char *v28; // rdi
  signed __int32 v30[8]; // [rsp+0h] [rbp-69h] BYREF
  _SINGLE_LIST_ENTRY *v31; // [rsp+40h] [rbp-29h]
  _QWORD *v32; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v33; // [rsp+50h] [rbp-19h] BYREF
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // [rsp+58h] [rbp-11h]
  struct _KPRCB *v35; // [rsp+60h] [rbp-9h]
  _BYTE v36[32]; // [rsp+68h] [rbp-1h] BYREF
  int v37; // [rsp+D0h] [rbp+67h] BYREF
  int v38; // [rsp+D8h] [rbp+6Fh]
  int v39; // [rsp+E0h] [rbp+77h] BYREF
  int v40; // [rsp+E8h] [rbp+7Fh]

  v38 = a2;
  v4 = a2;
  v5 = (_SINGLE_LIST_ENTRY *)(*(char *)(a1 + 792) | (unsigned int)*(char *)(a1 + 1422));
  if ( (_DWORD)v5 == 63 )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *(unsigned __int8 *)(a1 + 792);
  v8 = v7 | *(_BYTE *)(a1 + 1422);
  v33 = 0LL;
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v32 = 0LL;
  v35 = CurrentPrcb;
  if ( v8 == 63 )
    goto LABEL_20;
  v7 = (unsigned int)*(char *)(a1 + 792);
  v5 = (_SINGLE_LIST_ENTRY *)(a1 + 800);
  v9 = (v7 | *(char *)(a1 + 1422)) ^ 0x3F;
  v31 = (_SINGLE_LIST_ENTRY *)(a1 + 800);
  v10 = !_BitScanForward((unsigned int *)&a1, v9);
  if ( v10 )
    goto LABEL_19;
  v11 = (__int64)p_AbSelfIoBoostsList;
  do
  {
    v9 &= v9 - 1;
    v12 = &v5[12 * a1];
    Next = v12[4].Next;
    if ( Next && ((unsigned __int8)Next & 2) == 0 && ((unsigned __int8)Next & 1) == 0 )
    {
      if ( (__int64)v12[4].Next >= 0 )
        goto LABEL_9;
      if ( (BYTE3(v12[3].Next) & 1) == 0 )
      {
        if ( (BYTE1(v12[3].Next) & 1) == 0 )
        {
          if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(&v5[12 * a1]) == LOBYTE(v12[6].Next) )
            goto LABEL_15;
LABEL_9:
          v14 = 0;
          v39 = 0;
          LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v12);
          v16 = LockedHeadEntry;
          if ( !LockedHeadEntry )
          {
LABEL_15:
            v5 = v31;
            goto LABEL_16;
          }
          if ( (BYTE1(v12[3].Next) & 1) == 0 )
          {
            if ( v12 != (_SINGLE_LIST_ENTRY *)LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v12);
            KiAbDetermineMaxWaiterPriority(v16, &v37);
            if ( !v37 )
            {
LABEL_14:
              KxReleaseQueuedSpinLock(v36);
              goto LABEL_15;
            }
            if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                 (_DWORD)v12,
                                 (unsigned int)&v37,
                                 (unsigned int)&v33,
                                 (unsigned int)&v32,
                                 v11,
                                 (__int64)&v39)
              && v12 != (_SINGLE_LIST_ENTRY *)v16 )
            {
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v12);
            }
            v14 = v39;
LABEL_40:
            KxReleaseQueuedSpinLock(v36);
            if ( v14 )
            {
              v28 = (char *)v12 - (unsigned __int16)(16 * LOBYTE(v12[3].Next));
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v28, 1953261124LL) )
              {
                if ( (v14 & 1) != 0 )
                  IoBoostThreadIoPriority(v28, 2LL, 0x80000000LL);
                if ( (v14 & 2) != 0 )
                  PsBoostThreadOutstandingIoQoS(v28);
                ObDereferenceObjectDeferDeleteWithTag(v28, 0x746C6644u);
              }
            }
            goto LABEL_15;
          }
          if ( v12 != (_SINGLE_LIST_ENTRY *)LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v12);
          v20 = *(_QWORD *)(v16 + 56);
          if ( v20 )
            v21 = *(_BYTE *)(v20 + 48);
          else
            v21 = 15;
          v10 = (*(_BYTE *)(v16 + 25) & 1) == 0;
          LOBYTE(v37) = v21;
          if ( v10 )
          {
            v24 = KiAbOwnerComputeCpuPriorityKey(v16);
            if ( v24 < v21 )
            {
              v21 = v24;
              LOBYTE(v37) = v24;
            }
          }
          KiAbTryIncrementIoWaiterCounts(v12, v16);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v12);
          if ( v21 < CpuPriorityKey )
          {
            if ( v22 )
              goto LABEL_38;
          }
          else
          {
            if ( !v22 )
              goto LABEL_14;
LABEL_38:
            KiAbIoBoostOwners(v16, v22, (unsigned int)&v33, (unsigned int)&v32, v11);
          }
          KiAbCpuBoostOwners(v16, (unsigned __int8)CpuPriorityKey, (unsigned int)&v33, (unsigned int)&v32, v11);
          goto LABEL_40;
        }
        v19 = ((_BYTE *)&v12[24].Next - (unsigned __int16)(16 * LOBYTE(v12[3].Next)))[3];
        if ( v19 > 15 )
          v19 = 15;
        if ( v19 != LOBYTE(v12[6].Next) )
          goto LABEL_9;
      }
    }
LABEL_16:
    v10 = !_BitScanForward((unsigned int *)&a1, v9);
    v40 = a1;
  }
  while ( !v10 );
  v17 = v32;
  v4 = v38;
  if ( v32 )
  {
    v26 = (__int64)p_AbSelfIoBoostsList;
    do
    {
      v27 = (volatile signed __int16 *)(v17 - 172);
      v32 = (_QWORD *)*v17;
      *v17 = 1LL;
      _InterlockedOr(v30, 0);
      if ( *((_BYTE *)v17 - 583) )
        KiAbProcessThreadLocks((_DWORD)v17 - 1376, 0, 1, 0, (__int64)&v33, (__int64)&v32, v26);
      _InterlockedDecrement16(v27 + 710);
      v17 = v32;
    }
    while ( v32 );
  }
  CurrentPrcb = v35;
LABEL_19:
  v18 = v33;
  while ( v18 )
  {
    v25 = v18 - 27;
    v18 = (_QWORD *)*v18;
    KiDeferredReadyThread((__int64)CurrentPrcb, v25, v5, a4);
  }
LABEL_20:
  if ( v4 )
  {
    LOBYTE(v7) = 2;
    KiCheckForThreadDispatch(CurrentPrcb, v7, v5, a4);
  }
}
