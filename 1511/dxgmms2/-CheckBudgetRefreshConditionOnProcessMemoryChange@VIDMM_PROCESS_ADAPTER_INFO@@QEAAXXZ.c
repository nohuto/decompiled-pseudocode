/*
 * XREFs of ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0079E1C
 * Callers:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0079CA0 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004222C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0056550 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bp
  unsigned int v5; // esi
  VIDMM_PROCESS_BUDGET_STATE *v7; // r14
  _QWORD *v8; // r9
  int v9; // r8d
  unsigned int *v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rbx
  _BYTE v15[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 6416LL) )
  {
    do
    {
      v7 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)this + 6) + 240LL * v5);
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, (struct _KTHREAD **)this + 38, a3, a4);
      v8 = (_QWORD *)((char *)v7 + 160);
      v9 = 0;
      v10 = (unsigned int *)(264LL * v5 + *(_QWORD *)(*(_QWORD *)this + 40888LL) + 224LL);
      while ( 1 )
      {
        v11 = *(v8 - 3);
        if ( v9 == 1 )
        {
          v12 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v7);
          v11 = v12 + v13;
        }
        v14 = *v10;
        if ( v11 > *v8 * (v14 + 100) / 0x64uLL || v11 < *v8 * (100 - v14) / 0x64uLL )
          break;
        ++v9;
        ++v10;
        ++v8;
        if ( v9 >= 2 )
          goto LABEL_10;
      }
      v4 = 1;
LABEL_10:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
      ++v5;
    }
    while ( v5 < *(_DWORD *)(*(_QWORD *)this + 6416LL) );
    if ( v4 )
      VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 1);
  }
}
