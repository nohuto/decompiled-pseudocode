/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054604
 * Callers:
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00532B0 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0010420 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C005F6BC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C007F3D4 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00860B8 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        char a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  char v12; // cl
  _QWORD *v13; // r9
  _QWORD *v14; // rax
  int PriorityClass; // eax
  VIDMM_PROCESS_BUDGET_STATE *v16; // r8
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v18; // rcx
  struct VIDMM_PROCESS_BUDGET_STATE *v19; // r8
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *v20; // r10

  v8 = a3;
  v9 = *((_QWORD *)a6 + 2);
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
  if ( v10 )
    v11 = *(_QWORD *)(v10 + 16) + 184LL * *((unsigned int *)a4 + 5);
  else
    v11 = 0LL;
  *(_QWORD *)(v11 + 16) += v9;
  v12 = 1;
  ++*(_DWORD *)(v11 + 56);
  if ( !a5 )
    goto LABEL_8;
  ++*(_DWORD *)(v11 + 8);
  v13 = *(_QWORD **)(v11 + 48);
  a2 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)a2 + 16);
  *(_QWORD *)a2 = v11 + 40;
  *((_QWORD *)a2 + 1) = v13;
  if ( *v13 != v11 + 40 )
    __fastfail(3u);
  *v13 = a2;
  *(_QWORD *)(v11 + 48) = a2;
  if ( *(_DWORD *)(v11 + 8) != 1 )
LABEL_8:
    v12 = 0;
  v14 = (_QWORD *)(v11 + 24);
  if ( v12 )
  {
    a2 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)*((_QWORD *)a4 + 17);
    *v14 = (char *)a4 + 128;
    v14[1] = a2;
    if ( *(struct VIDMM_SEGMENT **)a2 != (struct VIDMM_SEGMENT *)((char *)a4 + 128) )
      __fastfail(3u);
    *(_QWORD *)a2 = v14;
    *((_QWORD *)a4 + 17) = v14;
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v8) + 48LL)
                              + 240LL * (*((_DWORD *)a6 + 19) & 0x3F)
                              + 8LL * *((int *)a4 + 108)
                              + 176),
    v9);
  if ( (*((_DWORD *)a4 + 14) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 94), a2);
    *((_QWORD *)v16 + PriorityClass + 25) += v9;
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v16) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*((DXGPROCESS **)this + 4));
      VIDMM_GLOBAL::AddToPromotionCandidateList(v18, v20, v19, IsHighPriorityProcess);
    }
  }
}
