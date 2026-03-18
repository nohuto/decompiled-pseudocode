/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FA1C
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL ***this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  VIDMM_GLOBAL **v11; // rdx
  VIDMM_GLOBAL *v12; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v10[3] = *((_QWORD *)a2 + 33);
    v10[4] = *((unsigned int *)a2 + 64);
    v10[5] = *((int *)a2 + 65);
  }
  v11 = this[472];
  v12 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 232);
  if ( *v11 != (VIDMM_GLOBAL *)(this + 471) )
    __fastfail(3u);
  *(_QWORD *)v12 = this + 471;
  *((_QWORD *)a2 + 30) = v11;
  *v11 = v12;
  this[472] = (VIDMM_GLOBAL **)v12;
}
