/*
 * XREFs of ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070A38
 * Callers:
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004BB94 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C000EE78 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C000FA20 (Template_pqx.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00702E8 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C0075B8C (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r10
  __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // r8
  int v13; // esi
  VIDMM_SEGMENT *v14; // rax
  struct _VIDMM_GLOBAL_ALLOC **v15; // rdx
  VIDMM_SEGMENT **v16; // rcx
  VIDMM_SEGMENT **v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 26) += v2;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 40832LL) + 264LL * *((unsigned int *)this + 93);
  *(_QWORD *)(v5 + 8LL * *((int *)this + 108) + 232) += v2;
  *((_QWORD *)this + 27) += *((_QWORD *)a2 + 2);
  if ( *((_DWORD *)this + 90) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
  {
    v6 = *((_QWORD *)this + 28);
    v7 = v6 + *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 28) = v7;
    if ( v6 <= qword_1C00273B8 && v7 > qword_1C00273B8 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 1) + 39880LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 39928LL));
    if ( !v6 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 1), this);
  }
  ++*((_DWORD *)this + 78);
  ++*((_DWORD *)this + 79);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v21 = *((_DWORD *)this + 4) + 1;
    Template_pqx(
      v21,
      &TotalBytesResidentInSegment,
      v5,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v21,
      *((_QWORD *)this + 27));
  }
  if ( (*((_DWORD *)this + 14) & 0x1001) != 0 )
  {
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
      *((_QWORD *)a2 + 2));
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
      *((_QWORD *)a2 + 2));
    *(_QWORD *)(*((_QWORD *)this + 1) + 39976LL) += *((_QWORD *)a2 + 2);
    v8 = *((_QWORD *)this + 1);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 3136LL);
    v10 = *(_QWORD *)(v8 + 39976);
    if ( *(_QWORD *)(v9 + 328) < v10 )
      *(_QWORD *)(v9 + 328) = v10;
  }
  v11 = *((_DWORD *)this + 14);
  if ( (v11 & 0x20) != 0 )
    v12 = *((_QWORD *)a2 + 3);
  else
    v12 = *((_QWORD *)a2 + 2);
  if ( (v11 & 0x1000) != 0 )
  {
    v13 = 0;
    *((_QWORD *)a2 + 18) = 1LL;
  }
  else
  {
    v13 = VIDMM_LINEAR_POOL::AllocateAt(
            *((VIDMM_LINEAR_POOL **)this + 18),
            *(union _LARGE_INTEGER *)((char *)a2 + 136),
            v12,
            a2,
            (void **)a2 + 18);
  }
  v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  v15 = (struct _VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 48);
  v16 = (VIDMM_SEGMENT **)*((_QWORD *)a2 + 49);
  if ( v15[1] != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384) || *v16 != v14 )
    __fastfail(3u);
  *v16 = (VIDMM_SEGMENT *)v15;
  v15[1] = (struct _VIDMM_GLOBAL_ALLOC *)v16;
  v17 = (VIDMM_SEGMENT **)*((_QWORD *)this + 20);
  *(_QWORD *)v14 = (char *)this + 152;
  *((_QWORD *)a2 + 49) = v17;
  if ( *v17 != (VIDMM_SEGMENT *)((char *)this + 152) )
    __fastfail(3u);
  *v17 = v14;
  *((_QWORD *)this + 20) = v14;
  VIDMM_SEGMENT::MarkResourcesForEviction((VIDMM_LINEAR_POOL **)this, (struct _VIDMM_POOL_BLOCK **)a2, 0LL, 0LL);
  if ( v13 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18);
    v20[7] = 0LL;
    v20[6] = v13;
    v20[3] = 270LL;
    v20[4] = 6LL;
    v20[5] = a2;
    WdLogEvent5_WdCriticalError(v20);
  }
}
