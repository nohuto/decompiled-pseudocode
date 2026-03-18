/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000F368
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C00446D8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000F524 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C000F570 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0044818 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z @ 0x1C00451D8 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  KSPIN_LOCK *v2; // r14
  VIDMM_FENCE_STORAGE_PAGE **v5; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v6; // rbx
  char v7; // bl
  VIDMM_FENCE_STORAGE_PAGE *v9; // rax
  VIDMM_FENCE_STORAGE_PAGE *v10; // rbx
  unsigned int v11; // edx
  int v12; // esi
  VIDMM_FENCE_STORAGE_PAGE *v13; // rax
  VIDMM_FENCE_STORAGE_PAGE *v14; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v15; // rax
  VIDMM_FENCE_STORAGE_PAGE **v16; // rax
  KSPIN_LOCK v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = this + 7;
  KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
  v5 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 3);
  if ( *v5 == (VIDMM_FENCE_STORAGE_PAGE *)v5 )
  {
    v7 = 0;
  }
  else
  {
    v6 = *v5;
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(*v5, a2);
    if ( *((_QWORD *)v6 + 8) == -1LL )
    {
      v14 = *(VIDMM_FENCE_STORAGE_PAGE **)v6;
      v15 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v6 + 1);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v6 + 8LL) != v6 || *v15 != v6 )
        __fastfail(3u);
      *v15 = v14;
      *((_QWORD *)v14 + 1) = v15;
      v16 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 1);
      v17 = this[1];
      if ( *(KSPIN_LOCK **)(v17 + 8) != this + 1 )
        __fastfail(3u);
      *(_QWORD *)v6 = v17;
      *((_QWORD *)v6 + 1) = v16;
      *(_QWORD *)(v17 + 8) = v6;
      *v16 = v6;
    }
    v7 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
    return 0LL;
  v9 = (VIDMM_FENCE_STORAGE_PAGE *)operator new(0x70uLL, 0x34346956u, (enum _POOL_TYPE)512);
  if ( v9 )
    v10 = VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v9, (struct VIDMM_PROCESS_FENCE_STORAGE *)this);
  else
    v10 = 0LL;
  if ( !v10 )
    return 3221225495LL;
  v12 = VIDMM_FENCE_STORAGE_PAGE::Init(v10);
  if ( v12 >= 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v10, a2);
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v13 = *v5;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)*v5 + 1) != v5 )
      __fastfail(3u);
    *(_QWORD *)v10 = v13;
    *((_QWORD *)v10 + 1) = v5;
    *((_QWORD *)v13 + 1) = v10;
    *v5 = v10;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v10, v11);
  return (unsigned int)v12;
}
