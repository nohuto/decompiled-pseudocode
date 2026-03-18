/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C003DC84
 * Callers:
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003DDD4 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0003CE8 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C003DC60 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C0057EFC (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006FEB4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00720E0 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v7; // rbp
  unsigned __int64 v9; // rdi
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  char v13; // r9
  struct _VIDMM_PROCESS_COMMITMENT_INFO **v14; // r8
  struct _VIDMM_PROCESS_COMMITMENT_INFO *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  int PriorityClass; // eax
  VIDMM_PROCESS_BUDGET_STATE *v19; // r8
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v21; // rcx
  struct VIDMM_PROCESS_BUDGET_STATE *v22; // r8
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *v23; // r10

  v7 = a3;
  v9 = *((_QWORD *)a6 + 2);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation((VIDMM_PROCESS *)this, a3, *((_DWORD *)a4 + 5));
  v13 = 1;
  *((_QWORD *)CommitmentInformation + 2) += v9;
  ++*((_DWORD *)CommitmentInformation + 14);
  if ( !a5 )
    goto LABEL_5;
  ++*((_DWORD *)CommitmentInformation + 2);
  v14 = (struct _VIDMM_PROCESS_COMMITMENT_INFO **)*((_QWORD *)CommitmentInformation + 6);
  v15 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)a2 + 16);
  *((_QWORD *)a2 + 2) = (char *)CommitmentInformation + 40;
  *((_QWORD *)a2 + 3) = v14;
  if ( *v14 != (struct _VIDMM_PROCESS_COMMITMENT_INFO *)((char *)CommitmentInformation + 40) )
    __fastfail(3u);
  *v14 = v15;
  *((_QWORD *)CommitmentInformation + 6) = v15;
  if ( *((_DWORD *)CommitmentInformation + 2) != 1 )
LABEL_5:
    v13 = 0;
  v16 = (_QWORD *)((char *)CommitmentInformation + 24);
  if ( v13 )
  {
    v17 = *(_QWORD **)(v12 + 136);
    *v16 = v12 + 128;
    v16[1] = v17;
    if ( *v17 != v12 + 128 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v12 + 136) = v16;
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this[2] + v7) + 48LL)
                              + 240LL * (*(_DWORD *)(v11 + 76) & 0x3F)
                              + 8LL * *(int *)(v12 + 432)
                              + 176),
    v9);
  if ( (*(_DWORD *)(v12 + 56) & 0x1001) != 0 && (*(_DWORD *)(v11 + 76) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*(unsigned int *)(v11 + 376));
    *((_QWORD *)v19 + PriorityClass + 25) += v9;
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v19) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(v21, v23, v22, IsHighPriorityProcess);
    }
  }
}
