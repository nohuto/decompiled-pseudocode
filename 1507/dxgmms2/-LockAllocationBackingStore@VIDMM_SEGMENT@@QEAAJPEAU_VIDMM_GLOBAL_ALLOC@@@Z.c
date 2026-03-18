/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C003D790
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003EF20 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B350 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00512F8 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *v5; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // edi
  __int64 v9; // rax
  enum _LOCK_OPERATION v10; // [rsp+28h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 284LL) & 2) != 0
    && (**((_DWORD **)a2 + 59) & 0x4000) == 0 )
  {
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 85) )
    goto LABEL_11;
  v5 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 59);
  if ( ((unsigned __int8)v5 & 8) == 0 )
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), &ApcState);
  v6 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         v5,
         *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
         a2,
         0LL,
         *((_QWORD *)a2 + 1),
         v10,
         this,
         0);
  v7 = (_DWORD *)*((_QWORD *)a2 + 59);
  v8 = v6;
  if ( (*v7 & 8) == 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( v8 >= 0 )
  {
LABEL_11:
    ++*((_DWORD *)a2 + 85);
    return 0LL;
  }
  _InterlockedIncrement(&dword_1C00274C4);
  v9 = WdLogNewEntry5_WdLowResource(v7);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = *((_QWORD *)a2 + 1);
  WdLogEvent5_WdLowResource(v9);
  return 3223191809LL;
}
