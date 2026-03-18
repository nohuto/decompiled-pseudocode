/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x140165CEC
 * Callers:
 *     <none>
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPostWorkQueue @ 0x14003F5E0 (CcPostWorkQueue.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcSetLazyWriteScanQueued @ 0x140067FC0 (CcSetLazyWriteScanQueued.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     CcNotifyExternalCaches @ 0x1401DCA54 (CcNotifyExternalCaches.c)
 */

void __fastcall __noreturn CcQueueLazyWriteScanThread(PVOID StartContext)
{
  unsigned int v1; // ebx
  char v2; // di
  NTSTATUS v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  KIRQL v7; // r8
  KIRQL v8; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  KIRQL v18; // al
  KIRQL v19; // dl
  char v20; // al
  bool v21; // zf
  __int64 *v22; // rdx
  PVOID Object[5]; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0;
  Object[0] = &CcLowMemoryEvent;
  Object[1] = &CcPowerEvent;
  Object[2] = &CcPeriodicEvent;
  Object[3] = &CcWaitingForTeardownEvent;
  Object[4] = &CcCoalescingFlushEvent;
  while ( 1 )
  {
    v2 = 0;
    v3 = KeWaitForMultipleObjects(5u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( !v3 )
    {
      v1 = 1;
      v2 = 1;
      goto LABEL_13;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v1 = 2;
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
        v1 = 8;
        goto LABEL_11;
      }
      if ( v6 == 1 )
      {
        v1 = 16;
LABEL_11:
        v2 = 1;
      }
    }
    else
    {
      v1 = 4;
    }
LABEL_13:
    if ( CcNumberOfExternalCaches && (__int64 *)CcExternalCacheList != &CcExternalCacheList )
      CcNotifyExternalCaches(v1);
    CcAdjustWriteBehindThreadPoolIfNeeded(v2);
    v7 = KeAcquireQueuedSpinLock(5uLL);
    if ( !v1 )
      goto LABEL_21;
    if ( v1 <= 2 )
    {
LABEL_28:
      if ( !byte_14034E044 && !byte_14034E045 && !byte_14034E046 )
        goto LABEL_21;
      v20 = 1;
      goto LABEL_32;
    }
    if ( v1 == 4 )
    {
      if ( !byte_14034E043 )
      {
        v21 = byte_14034E042 == 0;
        goto LABEL_33;
      }
LABEL_34:
      v19 = v7;
LABEL_35:
      KeReleaseQueuedSpinLock(5uLL, v19);
    }
    else
    {
      if ( v1 != 8 )
        goto LABEL_28;
      v20 = byte_14034E042;
LABEL_32:
      v21 = v20 == 0;
LABEL_33:
      if ( !v21 )
        goto LABEL_34;
LABEL_21:
      CcSetLazyWriteScanQueued(v1, 1);
      KeReleaseQueuedSpinLock(5uLL, v8);
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalAllocates;
      v11 = RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( !v11 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[6].L;
        ++L->TotalAllocates;
        v11 = RtlpInterlockedPopEntrySList(&L->ListHead);
        if ( !v11 )
        {
          Size = L->Size;
          Tag = L->Tag;
          Type = (unsigned int)L->Type;
          ++L->AllocateMisses;
          v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
          if ( !v11 )
          {
            ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
            KeAcquireQueuedSpinLock(5uLL);
            byte_14034E040 = 0;
            CcSetLazyWriteScanQueued(v1, 0);
            v19 = v18;
            goto LABEL_35;
          }
        }
      }
      v22 = &CcFastTeardownWorkQueue;
      LODWORD(v11->Next) = CurrentPrcb->Number;
      *((_BYTE *)&v11[6].Next + 8) = 3;
      if ( v1 != 8 )
        v22 = &CcRegularWorkQueue;
      LODWORD(v11[1].Next) = v1;
      CcPostWorkQueue((__int64)v11, (__int64)v22, v12, v13);
    }
  }
}
