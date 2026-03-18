/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055AB0
 * Callers:
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00553C0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066940 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00438B0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
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

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 284LL) & 4) != 0
    && (**((_DWORD **)a2 + 59) & 0x4000) == 0 )
  {
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 85) )
    goto LABEL_8;
  v4 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 59);
  if ( ((unsigned __int8)v4 & 8) == 0 )
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), &ApcState);
  v5 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         v4,
         *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
         a2,
         0LL,
         *((_QWORD *)a2 + 1),
         v10,
         this,
         0);
  v6 = (_DWORD *)*((_QWORD *)a2 + 59);
  v7 = v5;
  if ( (*v6 & 8) == 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( v7 >= 0 )
  {
LABEL_8:
    ++*((_DWORD *)a2 + 85);
    return 0LL;
  }
  _InterlockedIncrement(&dword_1C002F4D4);
  v9 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = *((_QWORD *)a2 + 1);
  WdLogEvent5_WdLowResource(v9);
  return 3223191809LL;
}
