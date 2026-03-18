/*
 * XREFs of ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0052898
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C008B568 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0052C68 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyBudgetGroups(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a5)
{
  __int64 v5; // r15
  unsigned int v7; // edi
  unsigned __int8 v9; // si
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cl
  char v13; // r10
  int v14; // r8d
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r11d
  int v18; // ebx
  __int64 v20; // rax

  v5 = a2;
  v7 = a3;
  v9 = VIDMM_GLOBAL::VerifySegmentSetAny(this, a2, a3, 0x80000u);
  v10 = VIDMM_GLOBAL::VerifySegmentSetAny(this, v5, v7, 0x100000u);
  if ( a4 )
  {
    v11 = (*((_DWORD *)a4 + 14) & 0x80000) != 0;
    v12 = (*((_DWORD *)a4 + 14) & 0x100000) != 0;
  }
  else
  {
    if ( v9 )
      goto LABEL_4;
    if ( v10 )
    {
      v13 = 1;
      goto LABEL_19;
    }
    v11 = 0;
    v12 = 0;
  }
  if ( v11 )
  {
LABEL_4:
    v13 = 0;
    v14 = v10 != 0 ? 2 : 0;
    goto LABEL_5;
  }
  if ( v12 )
  {
    v13 = 1;
    if ( !v9 )
    {
LABEL_19:
      v14 = 1;
      goto LABEL_5;
    }
    v14 = 2;
  }
  else
  {
    v13 = 2;
    v14 = 3;
  }
LABEL_5:
  if ( *((_DWORD *)this + 8) < 0x5013u || v14 == 3 )
    goto LABEL_14;
  v15 = (_DWORD *)*((_QWORD *)this + 5017);
  v16 = 456 * v5;
  v17 = 0;
  v18 = 0;
  if ( (~*v15 & v7) != 0 )
    goto LABEL_26;
  if ( !v7 )
    goto LABEL_14;
  do
  {
    if ( (v7 & 1) != 0 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v15[114 * v5 + 1] + v17));
      if ( (*(_DWORD *)(v16 + 56) & 0x180000) == 0 )
      {
        v16 = v17;
        v18 |= 1 << v17;
      }
    }
    ++v17;
    v7 >>= 1;
  }
  while ( v7 );
  if ( v18 )
  {
LABEL_26:
    v20 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v20 + 24) = 11459LL;
    WdLogEvent5_WdAssertion(v20);
    return 0;
  }
  else
  {
LABEL_14:
    if ( a5 )
      *(_DWORD *)a5 = v13 & 0xF | *(_DWORD *)a5 & 0xFFFFFF00 | (16 * (v14 & 0xF));
    return 1;
  }
}
