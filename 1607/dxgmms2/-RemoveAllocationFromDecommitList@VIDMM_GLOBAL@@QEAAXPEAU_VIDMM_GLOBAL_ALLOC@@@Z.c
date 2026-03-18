/*
 * XREFs of ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A98C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RemoveAllocationFromDecommitList(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *i; // r8
  struct _VIDMM_GLOBAL_ALLOC *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 32LL);
  KeEnterCriticalRegion();
  v4 = v3 + 320;
  ExAcquirePushLockSharedEx(v3 + 320, 0LL);
  v5 = (_QWORD *)(v3 + 336);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = (struct _VIDMM_GLOBAL_ALLOC *)i[2];
    if ( v7 == (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416) )
      i[2] = *(_QWORD *)v7;
  }
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  v8 = (_QWORD *)((char *)a2 + 432);
  v9 = *((_QWORD *)a2 + 54);
  v10 = (_QWORD *)*((_QWORD *)a2 + 55);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v9 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 432)
    || (_QWORD *)*v10 != v8 )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
}
