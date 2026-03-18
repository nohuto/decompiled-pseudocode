/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00752E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005BE6C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::ProbeAndLockAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        SIZE_T a4,
        LOCK_OPERATION Operation,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v7; // rdi
  struct _VIDMM_MDL *v8; // rax

  v7 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL);
  v8 = VidMmiProbeAndLockAllocation(a2, a3, a4, Operation, a6);
  if ( !v8 )
    return 3223191809LL;
  if ( a7 )
    *(_QWORD *)(v7 + 104) = v8;
  else
    *(_QWORD *)(v7 + 96) = v8;
  return 0LL;
}
