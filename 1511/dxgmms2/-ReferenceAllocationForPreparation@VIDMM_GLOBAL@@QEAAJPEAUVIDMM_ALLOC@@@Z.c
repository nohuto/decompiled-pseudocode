/*
 * XREFs of ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0049E90
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_pqt @ 0x1C001D330 (Template_pqt.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055678 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0061184 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForPreparation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3)
{
  VIDMM_GLOBAL *v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  v4 = this;
  v5 = **(_QWORD **)a2;
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 472) + 4LL) )
    *(_DWORD *)(v5 + 76) &= ~0x1000000u;
  v6 = *(_DWORD *)(v5 + 120);
  if ( !v6 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pqt((__int64)this, (__int64)a2, a3, a2, 0, 1);
    *((_QWORD *)v4 + 916) += *(_QWORD *)(v5 + 16);
    ++*((_DWORD *)v4 + 1830);
    v7 = *(_DWORD *)(v5 + 76);
    if ( (v7 & 0x1000000) != 0 )
      *(_DWORD *)(v5 + 76) = v7 | 0x2000000;
    return 3221225473LL;
  }
  if ( v6 == 1 )
  {
    if ( (*(_BYTE *)(v5 + 79) & 1) != 0 )
      goto LABEL_17;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pqt((__int64)this, (__int64)a2, a3, a2, 1, 1);
    *((_QWORD *)v4 + 908) += *(_QWORD *)(v5 + 16);
    ++*((_DWORD *)v4 + 1814);
    VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v5 + 128), (struct _VIDMM_GLOBAL_ALLOC *)v5);
  }
  if ( (*(_BYTE *)(v5 + 79) & 1) != 0 )
  {
LABEL_17:
    LOBYTE(this) = bTracingEnabled;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v10) = 1;
      LODWORD(v9) = 4;
      Template_pqt((__int64)this, (__int64)a2, a3, a2, v9, v10);
      LOBYTE(this) = bTracingEnabled;
    }
    *((_QWORD *)v4 + 910) += *(_QWORD *)(v5 + 16);
    ++*((_DWORD *)v4 + 1818);
    *(_DWORD *)(v5 + 76) |= 0x2000000u;
    if ( (_BYTE)this && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p((__int64)this, &EventMigrateAllocation, a3, v5);
    VIDMM_GLOBAL::EvictAllocation(v4, a2);
    return 3221225473LL;
  }
  return 0LL;
}
