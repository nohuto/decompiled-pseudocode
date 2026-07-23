/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x1400F65E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F6500 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v5; // esi
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // al
  _QWORD *v8; // rdx
  int v9; // eax
  int v10; // eax
  void *v11; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2[2];
  v5 = 0;
  while ( 1 )
  {
    v6 = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v2;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v2);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&LockHandle);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
    }
    v9 = *(_DWORD *)(v2 + 16);
    if ( v9 )
    {
      *(_DWORD *)(v2 + 16) = v9 - 1;
    }
    else
    {
      v10 = *(_DWORD *)(v2 + 20);
      if ( v10 )
      {
        *(_DWORD *)(v2 + 20) = v10 - 1;
        v6 = -1LL;
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
      v11 = *(void **)(v2 + 40);
      IoSetIoCompletionEx2((__int64)v11, *(_QWORD *)(v2 + 48), v6, 0, 0LL, 0, a1, 0);
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      break;
    }
  }
  if ( v5 )
    AlpcpDeferredFreeCompletionPacketLookaside((_DWORD *)v2);
}
