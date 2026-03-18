/*
 * XREFs of ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00999EC
 * Callers:
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00883AC (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001DBA4 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001E7B8 (Template_pqx.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0064BC8 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C009EDA8 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // r8
  int v14; // esi
  VIDMM_SEGMENT *v15; // rax
  struct _VIDMM_GLOBAL_ALLOC **v16; // rdx
  VIDMM_SEGMENT **v17; // rcx
  VIDMM_SEGMENT **v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-18h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = a2;
  }
  v7 = *((unsigned int *)this + 93);
  v8 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 26) += v8;
  v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 41200LL) + 264 * v7;
  *(_QWORD *)(v9 + 8LL * *((int *)this + 117) + 232) += v8;
  *((_QWORD *)this + 27) += *((_QWORD *)a2 + 2);
  if ( *((_DWORD *)this + 90) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
  {
    v10 = *((_QWORD *)this + 28);
    v11 = v10 + *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 28) = v11;
    if ( v10 <= qword_1C00353E8 && v11 > qword_1C00353E8 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 1) + 40008LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 40072LL));
    if ( !v10 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 1), this);
  }
  ++*((_DWORD *)this + 78);
  ++*((_DWORD *)this + 79);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v24 = *((_DWORD *)this + 4) + 1;
    Template_pqx(
      v24,
      &TotalBytesResidentInSegment,
      v8,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v24,
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
    *(_QWORD *)(*((_QWORD *)this + 1) + 40120LL) += *((_QWORD *)a2 + 2);
  }
  v12 = *((_DWORD *)this + 14);
  if ( (v12 & 0x20) != 0 )
    v13 = *((_QWORD *)a2 + 3);
  else
    v13 = *((_QWORD *)a2 + 2);
  if ( (v12 & 0x1000) != 0 )
  {
    v14 = 0;
    *((_QWORD *)a2 + 19) = 1LL;
  }
  else
  {
    v14 = VIDMM_LINEAR_POOL::AllocateAt(
            *((VIDMM_LINEAR_POOL **)this + 18),
            *(union _LARGE_INTEGER *)((char *)a2 + 144),
            v13,
            a2,
            (void **)a2 + 19);
  }
  v15 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
  v16 = (struct _VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 50);
  v17 = (VIDMM_SEGMENT **)*((_QWORD *)a2 + 51);
  if ( v16[1] != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400) || *v17 != v15 )
    __fastfail(3u);
  *v17 = (VIDMM_SEGMENT *)v16;
  v16[1] = (struct _VIDMM_GLOBAL_ALLOC *)v17;
  v18 = (VIDMM_SEGMENT **)*((_QWORD *)this + 20);
  if ( *v18 != (VIDMM_SEGMENT *)((char *)this + 152) )
    __fastfail(3u);
  *(_QWORD *)v15 = (char *)this + 152;
  *((_QWORD *)a2 + 51) = v18;
  *v18 = v15;
  *((_QWORD *)this + 20) = v15;
  VIDMM_SEGMENT::MarkResourcesForEviction((VIDMM_LINEAR_POOL **)this, (struct _VIDMM_POOL_BLOCK **)a2, 0LL, 0LL);
  if ( v14 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21, v22);
    v23[7] = 0LL;
    v23[6] = v14;
    v23[3] = 270LL;
    v23[4] = 6LL;
    v23[5] = a2;
    WdLogEvent5_WdCriticalError(v23);
  }
}
