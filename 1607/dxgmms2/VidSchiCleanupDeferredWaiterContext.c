/*
 * XREFs of VidSchiCleanupDeferredWaiterContext @ 0x1C00020E8
 * Callers:
 *     VidSchFlushContext @ 0x1C00424F0 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000CF4C (VidSchiUnwaitWaitQueuePacket.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0010B94 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  struct _VIDSCH_QUEUE_PACKET *v5; // rcx
  int v6; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1856LL), &LockHandle);
  v3 = (_QWORD **)(a1 + 696);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (struct _VIDSCH_QUEUE_PACKET *)(v4 - 4);
    LOBYTE(v2) = 1;
    v6 = *((_DWORD *)v4 + 58);
    v4 = (_QWORD *)*v4;
    if ( (v6 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v5, 1u);
    else
      VidSchiUnwaitWaitQueuePacket(v5, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
