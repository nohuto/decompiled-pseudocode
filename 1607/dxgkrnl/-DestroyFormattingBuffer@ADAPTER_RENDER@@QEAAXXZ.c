/*
 * XREFs of ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001F19C
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0148918 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C0148DA8 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyFormattingBuffer(ADAPTER_RENDER *this)
{
  void *v1; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (void *)*((_QWORD *)this + 102);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 103, &LockHandle);
  *((_QWORD *)this + 102) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v1 )
    operator delete(v1);
}
