/*
 * XREFs of ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0067670
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00967F0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0096E70 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

struct _MDL *__fastcall VidMmGetMDLForRange(struct _VIDMM_GLOBAL_ALLOC *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rdx
  struct _MDL *result; // rax

  v3 = (_QWORD *)*((_QWORD *)a1 + 13);
  v5 = v3[3];
  if ( v5 )
    return (struct _MDL *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v3[1] + 24LL)
                                                                                       + 96LL))(
                            *(_QWORD *)(v3[1] + 24LL),
                            v5,
                            a2,
                            a3);
  result = (struct _MDL *)v3[11];
  if ( result )
    return *(struct _MDL **)&result->Size;
  return result;
}
