/*
 * XREFs of ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005202C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003DDD4 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070C80 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecommitTrimmedList(VIDMM_GLOBAL *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  struct VIDMM_ALLOC *v3; // rsi
  __int64 v4; // rcx
  int v5; // eax

  v1 = (_QWORD *)((char *)this + 3720);
  v2 = (_QWORD *)*((_QWORD *)this + 465);
  while ( v2 != v1 )
  {
    v3 = (struct VIDMM_ALLOC *)(v2 - 7);
    v2 = (_QWORD *)*v2;
    v4 = **(_QWORD **)v3;
    v5 = *(_DWORD *)(v4 + 120);
    if ( v5 )
    {
      if ( v5 == 1 )
        VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v4 + 128), **(struct _VIDMM_GLOBAL_ALLOC ***)v3);
      VIDMM_DEVICE::AddCommitment(*((VIDMM_DEVICE **)v3 + 1), v3);
    }
  }
  v1[1] = v1;
  *v1 = v1;
}
