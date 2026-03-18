/*
 * XREFs of ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00532B0
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054604 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 */

void __fastcall VIDMM_DEVICE::AddCommitment(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rdi
  VIDMM_PROCESS *v5; // rsi
  unsigned int *v6; // r11
  __int64 v7; // rdx
  char *v8; // rcx
  _QWORD *v9; // r9

  v4 = **(_QWORD **)a2;
  v5 = *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL);
  v6 = *(unsigned int **)(v4 + 128);
  v7 = *((_QWORD *)this + 5) + 56LL * v6[5];
  ++*(_DWORD *)v7;
  *(_QWORD *)(v7 + 8) += *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v7 + 48) = this;
  v8 = (char *)a2 + 56;
  v9 = *(_QWORD **)(v7 + 40);
  *((_QWORD *)a2 + 7) = v7 + 32;
  *((_QWORD *)a2 + 8) = v9;
  if ( *v9 != v7 + 32 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v7 + 40) = v8;
  VIDMM_PROCESS::AddCommitment(
    v5,
    (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v7,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 184LL),
    (struct VIDMM_SEGMENT *)v6,
    *(_DWORD *)v7 == 1,
    (struct _VIDMM_GLOBAL_ALLOC *)v4);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 2;
  ++*(_DWORD *)(v4 + 152);
  *((_DWORD *)a2 + 7) |= 0x10u;
}
