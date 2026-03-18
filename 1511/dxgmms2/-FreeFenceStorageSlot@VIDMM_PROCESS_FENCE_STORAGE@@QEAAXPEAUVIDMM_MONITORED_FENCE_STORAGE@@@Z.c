/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0010394
 * Callers:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00102F8 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(KSPIN_LOCK *this, KSPIN_LOCK **a2)
{
  KSPIN_LOCK *v4; // r8
  KSPIN_LOCK v5; // rdx
  KSPIN_LOCK **v6; // rax
  KSPIN_LOCK v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
  v4 = *a2;
  v4[8] = (*a2)[8] & ~(1LL << ((unsigned __int64)*((unsigned int *)a2 + 4) >> 6));
  v5 = *v4;
  v6 = (KSPIN_LOCK **)v4[1];
  if ( *(KSPIN_LOCK **)(*v4 + 8) != v4 || *v6 != v4 )
    __fastfail(3u);
  *v6 = (KSPIN_LOCK *)v5;
  *(_QWORD *)(v5 + 8) = v6;
  v7 = this[3];
  *v4 = v7;
  v4[1] = (KSPIN_LOCK)(this + 3);
  if ( *(KSPIN_LOCK **)(v7 + 8) != this + 3 )
    __fastfail(3u);
  *(_QWORD *)(v7 + 8) = v4;
  this[3] = (KSPIN_LOCK)v4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
