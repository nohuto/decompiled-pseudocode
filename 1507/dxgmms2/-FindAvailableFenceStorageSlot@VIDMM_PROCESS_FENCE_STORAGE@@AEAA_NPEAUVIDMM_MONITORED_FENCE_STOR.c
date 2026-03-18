/*
 * XREFs of ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0005FF0
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0037A38 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000605C (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 */

char __fastcall VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  VIDMM_FENCE_STORAGE_PAGE **v4; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v5; // rbx
  char v6; // bl
  VIDMM_FENCE_STORAGE_PAGE *v8; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v9; // rax
  KSPIN_LOCK v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
  v4 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 3);
  if ( *v4 == (VIDMM_FENCE_STORAGE_PAGE *)v4 )
  {
    v6 = 0;
  }
  else
  {
    v5 = *v4;
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v5, a2);
    if ( *((_QWORD *)v5 + 8) == -1LL )
    {
      v8 = *(VIDMM_FENCE_STORAGE_PAGE **)v5;
      v9 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v5 + 1);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v5 + 8LL) != v5 || *v9 != v5 )
        __fastfail(3u);
      *v9 = v8;
      *((_QWORD *)v8 + 1) = v9;
      v10 = this[1];
      *(_QWORD *)v5 = v10;
      *((_QWORD *)v5 + 1) = this + 1;
      if ( *(KSPIN_LOCK **)(v10 + 8) != this + 1 )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = v5;
      this[1] = (KSPIN_LOCK)v5;
    }
    v6 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v6;
}
