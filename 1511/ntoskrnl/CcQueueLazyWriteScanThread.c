/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x1401379A0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400B2D14 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPostWorkQueue @ 0x140100FF0 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140101324 (CcAllocateWorkQueueEntry.c)
 *     CcSetLazyWriteScanQueued @ 0x140101C34 (CcSetLazyWriteScanQueued.c)
 *     CcNotifyExternalCaches @ 0x14012D654 (CcNotifyExternalCaches.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  PSLIST_ENTRY v11; // rcx
  __int64 *v12; // rdx
  char v13; // al
  int v14; // eax
  KIRQL v15; // dl
  KIRQL v16; // al
  PSLIST_ENTRY v17; // [rsp+40h] [rbp-48h] BYREF
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
      v14 = v5 - 1;
      if ( !v14 )
      {
        v1 = 8;
        goto LABEL_20;
      }
      if ( v14 == 1 )
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
      if ( byte_1402FDBA3 )
        goto LABEL_34;
      v7 = byte_1402FDBA2 == 0;
      goto LABEL_12;
    }
    if ( v1 == 8 )
    {
      v13 = byte_1402FDBA2;
    }
    else
    {
LABEL_23:
      if ( !byte_1402FDBA4 && !byte_1402FDBA5 && !byte_1402FDBA6 )
        goto LABEL_13;
      v13 = 1;
    }
    v7 = v13 == 0;
LABEL_12:
    if ( !v7 )
    {
LABEL_34:
      v15 = v6;
      goto LABEL_36;
    }
LABEL_13:
    CcSetLazyWriteScanQueued(v1, 1);
    KeReleaseQueuedSpinLock(5uLL, v8);
    if ( (int)CcAllocateWorkQueueEntry(&v17) < 0 )
    {
      ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
      KeAcquireQueuedSpinLock(5uLL);
      byte_1402FDBA0 = 0;
      CcSetLazyWriteScanQueued(v1, 0);
      v15 = v16;
LABEL_36:
      KeReleaseQueuedSpinLock(5uLL, v15);
    }
    else
    {
      v11 = v17;
      v12 = &CcFastTeardownWorkQueue;
      if ( v1 != 8 )
        v12 = &CcRegularWorkQueue;
      *((_BYTE *)&v17[6].Next + 8) = 3;
      LODWORD(v11[1].Next) = v1;
      CcPostWorkQueue((__int64)v11, (__int64)v12, v9, v10);
    }
  }
}
