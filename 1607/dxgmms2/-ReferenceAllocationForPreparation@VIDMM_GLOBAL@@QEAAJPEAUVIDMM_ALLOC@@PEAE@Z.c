/*
 * XREFs of ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00522BC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_pqt @ 0x1C001E6A4 (Template_pqt.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064AA0 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068DF0 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForPreparation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  VIDMM_GLOBAL *v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-10h]

  v6 = this;
  v7 = **(_QWORD **)a2;
  if ( *(_WORD *)(*(_QWORD *)(v7 + 504) + 4LL) )
    *(_DWORD *)(v7 + 76) &= ~0x1000000u;
  v8 = *(_DWORD *)(v7 + 128);
  if ( !v8 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqt((__int64)this, (__int64)a2, (__int64)a3, a2, 0, 1);
    *((_QWORD *)v6 + 916) += *(_QWORD *)(v7 + 16);
    ++*((_DWORD *)v6 + 1830);
    v9 = *(_DWORD *)(v7 + 76);
    if ( (v9 & 0x1000000) != 0 )
      *(_DWORD *)(v7 + 76) = v9 | 0x2000000;
    return 3221225473LL;
  }
  if ( v8 == 1 )
  {
    if ( (*(_BYTE *)(v7 + 79) & 1) != 0 )
      goto LABEL_22;
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqt((__int64)this, (__int64)a2, (__int64)a3, a2, 1, 1);
    *((_QWORD *)v6 + 908) += *(_QWORD *)(v7 + 16);
    ++*((_DWORD *)v6 + 1814);
    VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v7 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v7);
    *a3 = 1;
  }
  if ( (*(_BYTE *)(v7 + 79) & 1) != 0 )
  {
LABEL_22:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    LOBYTE(this) = bTracingEnabled;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v12) = 1;
      LODWORD(v11) = 4;
      Template_pqt((__int64)this, (__int64)a2, (__int64)a3, a2, v11, v12);
      LOBYTE(this) = bTracingEnabled;
    }
    *((_QWORD *)v6 + 910) += *(_QWORD *)(v7 + 16);
    ++*((_DWORD *)v6 + 1818);
    *(_DWORD *)(v7 + 76) |= 0x2000000u;
    if ( (_BYTE)this && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p((__int64)this, &EventMigrateAllocation, (__int64)a3, v7);
    VIDMM_GLOBAL::EvictAllocation(v6, a2);
    return 3221225473LL;
  }
  return 0LL;
}
