/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004710C
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // rcx
  char *v3; // rdx
  char **v4; // rax

  v2 = (char *)this + 3768;
  v3 = (char *)a2 + 224;
  v4 = (char **)*((_QWORD *)v2 + 1);
  *(_QWORD *)v3 = v2;
  *((_QWORD *)v3 + 1) = v4;
  if ( *v4 != v2 )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)v2 + 1) = v3;
}
