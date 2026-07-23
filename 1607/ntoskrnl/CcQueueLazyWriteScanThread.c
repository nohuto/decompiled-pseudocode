/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x14014031C
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     CcSetLazyWriteScanQueued @ 0x14006E57C (CcSetLazyWriteScanQueued.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14006F800 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPostWorkQueue @ 0x140071028 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140071C00 (CcAllocateWorkQueueEntry.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcNotifyExternalCaches @ 0x140134614 (CcNotifyExternalCaches.c)
 */

void __fastcall __noreturn CcQueueLazyWriteScanThread(PVOID StartContext)
{
  unsigned int v1; // ebx
  char v2; // di
  NTSTATUS v3; // eax
  int v4; // eax
  int v5; // eax
  KIRQL v6; // r8
  bool v7; // zf
  KIRQL v8; // r8
  PSLIST_ENTRY v9; // rcx
  __int64 *v10; // rdx
  char v11; // al
  int v12; // eax
  KIRQL v13; // dl
  KIRQL v14; // al
  PSLIST_ENTRY v15; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[5]; // [rsp+48h] [rbp-40h] BYREF

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
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        v1 = 2;
LABEL_20:
        v2 = 1;
        goto LABEL_6;
      }
      v5 = v4 - 1;
      if ( !v5 )
      {
        v1 = 4;
        goto LABEL_6;
      }
      v12 = v5 - 1;
      if ( !v12 )
      {
        v1 = 8;
        goto LABEL_20;
      }
      if ( v12 == 1 )
      {
        v1 = 16;
        goto LABEL_20;
      }
    }
    else
    {
      v1 = 1;
      v2 = 1;
    }
LABEL_6:
    if ( CcNumberOfExternalCaches && (__int64 *)CcExternalCacheList != &CcExternalCacheList )
      CcNotifyExternalCaches(v1);
    CcAdjustWriteBehindThreadPoolIfNeeded(v2);
    v6 = KeAcquireQueuedSpinLock(5uLL);
    if ( !v1 )
      goto LABEL_13;
    if ( v1 <= 2 )
      goto LABEL_23;
    if ( v1 == 4 )
    {
      if ( byte_1403231E3 )
        goto LABEL_30;
      v7 = byte_1403231E2 == 0;
      goto LABEL_12;
    }
    if ( v1 == 8 )
    {
      v11 = byte_1403231E2;
    }
    else
    {
LABEL_23:
      if ( !byte_1403231E5 && !byte_1403231E4 && !byte_1403231E6 )
        goto LABEL_13;
      v11 = 1;
    }
    v7 = v11 == 0;
LABEL_12:
    if ( !v7 )
    {
LABEL_30:
      v13 = v6;
      goto LABEL_31;
    }
LABEL_13:
    CcSetLazyWriteScanQueued(v1, 1);
    KeReleaseQueuedSpinLock(5uLL, v8);
    if ( (int)CcAllocateWorkQueueEntry(&v15) < 0 )
    {
      ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
      KeAcquireQueuedSpinLock(5uLL);
      byte_1403231E0 = 0;
      CcSetLazyWriteScanQueued(v1, 0);
      v13 = v14;
LABEL_31:
      KeReleaseQueuedSpinLock(5uLL, v13);
    }
    else
    {
      v9 = v15;
      v10 = &CcFastTeardownWorkQueue;
      if ( v1 != 8 )
        v10 = &CcRegularWorkQueue;
      *((_BYTE *)&v15[7].Next + 8) = 3;
      LODWORD(v9[1].Next) = v1;
      CcPostWorkQueue((__int64)v9, v10);
    }
  }
}
