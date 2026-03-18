/*
 * XREFs of ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0087BB8
 * Callers:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0087A3C (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005A00C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C005D46C (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  char v1; // bp
  unsigned int v2; // esi
  __int64 v4; // rbx
  VIDMM_PROCESS_BUDGET_STATE *v5; // r14
  _QWORD *v6; // r9
  int v7; // r8d
  unsigned int *v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rbx
  _BYTE v13[32]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 6416LL) )
  {
    do
    {
      v4 = 264LL * v2;
      v5 = (VIDMM_PROCESS_BUDGET_STATE *)(v4 + *((_QWORD *)this + 6));
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
        (DXGAUTOPUSHLOCKSHARED *)v13,
        (VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 328));
      v6 = (_QWORD *)((char *)v5 + 184);
      v7 = 0;
      v8 = (unsigned int *)(v4 + *(_QWORD *)(*(_QWORD *)this + 41200LL) + 224LL);
      while ( 1 )
      {
        v9 = *(v6 - 6);
        if ( v7 == 1 )
        {
          v10 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v5);
          v9 = v10 + v11;
        }
        v12 = *v8;
        if ( v9 > *v6 * (v12 + 100) / 0x64uLL || v9 < *v6 * (100 - v12) / 0x64uLL )
          break;
        ++v7;
        ++v8;
        ++v6;
        if ( v7 >= 2 )
          goto LABEL_10;
      }
      v1 = 1;
LABEL_10:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      ++v2;
    }
    while ( v2 < *(_DWORD *)(*(_QWORD *)this + 6416LL) );
    if ( v1 )
      VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 1);
  }
}
