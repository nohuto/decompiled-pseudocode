/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005CBD4
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0087650 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C000F504 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     Template_xxpqhc @ 0x1C001F584 (Template_xxpqhc.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00671B4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C0090658 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C009B39C (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        _QWORD *a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  _BYTE *v7; // r9
  struct _VIDMM_DEVICE_COMMITMENT_INFO *v8; // r13
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16; // bl
  struct VIDMM_SEGMENT *v17; // rdi
  _QWORD *v18; // rax
  __int64 *v19; // rdi
  struct VIDMM_PROCESS_BUDGET_STATE *v20; // rbx
  unsigned __int64 v21; // r9
  struct VIDMM_SEGMENT **v22; // rcx
  int PriorityClass; // eax
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v25; // rcx
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *v26; // r10

  v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v8 = a2;
  v10 = (unsigned int)a3;
  v11 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, *(_QWORD *)&g_IsInternalReleaseOrDbg);
    v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    v12[3] = this;
    v12[4] = v10;
    v12[5] = a4;
    v12[6] = a5;
    v12[7] = v11;
  }
  v13 = v10;
  v14 = (_QWORD *)*((_QWORD *)this[2] + v10);
  if ( v14 )
    v15 = v14[2] + 184LL * *((unsigned int *)a4 + 5);
  else
    v15 = 0LL;
  *(_QWORD *)(v15 + 16) += v11;
  v16 = 1;
  ++*(_DWORD *)(v15 + 56);
  if ( !a5 )
    goto LABEL_6;
  ++*(_DWORD *)(v15 + 8);
  a2 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)(v15 + 40);
  a3 = *(_QWORD **)(v15 + 48);
  v14 = (_QWORD *)((char *)v8 + 16);
  if ( *a3 != v15 + 40 )
    __fastfail(3u);
  *v14 = a2;
  *((_QWORD *)v8 + 3) = a3;
  *a3 = v14;
  *(_QWORD *)(v15 + 48) = v14;
  if ( *(_DWORD *)(v15 + 8) != 1 )
LABEL_6:
    v16 = 0;
  v17 = (struct VIDMM_SEGMENT *)(v15 + 24);
  if ( *v7 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, a2, a3, v7);
    v18[3] = v17;
    v18[4] = a4;
    v18[5] = v16;
    v18[6] = v11;
  }
  if ( v16 )
  {
    v22 = (struct VIDMM_SEGMENT **)*((_QWORD *)a4 + 17);
    if ( *v22 != (struct VIDMM_SEGMENT *)((char *)a4 + 128) )
      __fastfail(3u);
    *(_QWORD *)v17 = (char *)a4 + 128;
    *((_QWORD *)v17 + 1) = v22;
    *v22 = v17;
    *((_QWORD *)a4 + 17) = v17;
  }
  v19 = (__int64 *)*((_QWORD *)this[2] + v13);
  v20 = (struct VIDMM_PROCESS_BUDGET_STATE *)(v19[6] + 264 * (*((_DWORD *)a6 + 19) & 0x3FLL));
  v21 = v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + *((int *)a4 + 117) + 25, v11);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_xxpqhc(v19[5], &EventVidMmProcessCommitmentChange, *v19);
  if ( (*((_DWORD *)a4 + 14) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 98), a2, a3, v21);
    *((_QWORD *)v20 + PriorityClass + 28) += v11;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_xxpqhc(v19[5], &EventVidMmProcessDemotedCommitmentChange, *v19);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v20) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(v25, v26, v20, IsHighPriorityProcess);
    }
  }
}
