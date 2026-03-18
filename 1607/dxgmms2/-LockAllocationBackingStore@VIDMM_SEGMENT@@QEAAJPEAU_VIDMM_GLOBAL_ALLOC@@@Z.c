/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00643F8
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00640A0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006CCF0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C004C4E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0065E88 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *v4; // rcx
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // edi
  __int64 v9; // rax
  enum _LOCK_OPERATION v10; // [rsp+28h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 300LL) & 4) != 0
    && (**((_DWORD **)a2 + 63) & 0x4000) == 0 )
  {
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 87) )
  {
LABEL_9:
    ++*((_DWORD *)a2 + 87);
    return 0LL;
  }
  v4 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 63);
  if ( ((unsigned __int8)v4 & 8) == 0 )
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
  v5 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         v4,
         *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13),
         a2,
         0LL,
         *((_QWORD *)a2 + 1),
         v10,
         this,
         0);
  v6 = (_DWORD *)*((_QWORD *)a2 + 63);
  v7 = v5;
  if ( (*v6 & 8) == 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( v7 >= 0 )
  {
    VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(a2);
    goto LABEL_9;
  }
  _InterlockedIncrement(&dword_1C0035554);
  v9 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = *((_QWORD *)a2 + 1);
  WdLogEvent5_WdLowResource(v9);
  return 3223191809LL;
}
