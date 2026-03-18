/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x140083BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400C4F48 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v5; // esi
  int v6; // r14d
  unsigned __int8 CurrentIrql; // al
  int v8; // eax
  int v9; // eax
  void *v10; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2[2];
  v5 = 0;
  while ( 1 )
  {
    v6 = 0;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v2;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v2, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v8 = *(_DWORD *)(v2 + 16);
    if ( v8 )
    {
      *(_DWORD *)(v2 + 16) = v8 - 1;
    }
    else
    {
      v9 = *(_DWORD *)(v2 + 20);
      if ( v9 )
      {
        *(_DWORD *)(v2 + 20) = v9 - 1;
        v6 = -1;
      }
      else
      {
        --*(_DWORD *)(v2 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v2 + 32);
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v5 = 1;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !a1 )
      break;
    if ( ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40)) )
    {
      v10 = *(void **)(v2 + 40);
      IoSetIoCompletionEx2(
        (_DWORD)v10,
        *(_QWORD *)(v2 + 48),
        v6,
        0,
        0LL,
        0,
        a1,
        0,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
      break;
    }
  }
  if ( v5 )
    AlpcpDeferredFreeCompletionPacketLookaside(v2);
}
