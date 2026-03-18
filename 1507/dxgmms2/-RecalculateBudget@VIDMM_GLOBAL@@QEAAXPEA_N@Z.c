/*
 * XREFs of ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D0C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C007212C (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00727B8 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C0072858 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecalculateBudget(VIDMM_GLOBAL *this, bool *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int i; // esi
  __int64 v7; // r10
  _QWORD **v8; // rdx
  _QWORD *v9; // rcx
  _QWORD **v10; // r11
  _QWORD *v11; // r8
  _QWORD **v12; // r9
  __int64 v13; // rax
  int v14; // r8d
  __int64 **v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  _BYTE v21[32]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v22[48]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v23[15]; // [rsp+70h] [rbp-90h] BYREF

  v3 = *((_QWORD *)this + 5153);
  if ( v3 == *((_QWORD *)this + 5154) )
  {
    *a2 = 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      Template_q((__int64)this, &EventVidMmProfilerEnter, a3, 14001);
    for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
    {
      memset(v22, 0, sizeof(v22));
      memset(v23, 0, 0xE8uLL);
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v21, (VIDMM_GLOBAL *)((char *)this + 40648));
      VIDMM_GLOBAL::SetupBudgetState(this, (struct VIDMM_BUDGET_STATE *)v22, i);
      VIDMM_GLOBAL::AssignBudgets(this, (struct VIDMM_BUDGET_STATE *)v22, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
      if ( *(_QWORD *)(264LL * i + *((_QWORD *)this + 5104) + 24) )
      {
        v7 = 0LL;
        v8 = (_QWORD **)v23 + 1;
        do
        {
          v9 = v8 - 1;
          v10 = (_QWORD **)*(v8 - 1);
          if ( v10 != v8 - 1 )
          {
            v11 = *(v8 - 6);
            v12 = v8 - 7;
            if ( (_QWORD **)(*(v8 - 7))[1] != v8 - 7 || (_QWORD **)*v11 != v12 )
              __fastfail(3u);
            if ( v10[1] != v9 || (_QWORD *)**v8 != v9 )
              __fastfail(3u);
            *v11 = v9;
            *(v8 - 6) = *v8;
            **v8 = v12;
            *v8 = v11;
            v13 = *v9;
            if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
              __fastfail(3u);
            *v11 = v13;
            *(_QWORD *)(v13 + 8) = v11;
            *v8 = v9;
            *v9 = v9;
          }
          ++v7;
          v8 += 2;
        }
        while ( v7 < 3 );
        VIDMM_GLOBAL::AssignBudgets(this, (struct VIDMM_BUDGET_STATE *)v22, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
      }
      v14 = 0;
      v15 = (__int64 **)v23;
      do
      {
        v16 = *v15;
        v17 = **v15;
        if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
          __fastfail(3u);
        *v15 = (__int64 *)v17;
        *(_QWORD *)(v17 + 8) = v15;
        while ( v16 != (__int64 *)&v23[v14] )
        {
          *v16 = 0LL;
          v16[1] = 0LL;
          v16 = *v15;
          v18 = **v15;
          if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v18 + 8) != v16 )
            __fastfail(3u);
          *v15 = (__int64 *)v18;
          *(_QWORD *)(v18 + 8) = v15;
        }
        ++v14;
        v15 += 2;
      }
      while ( v14 < 3 );
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    }
    *((_QWORD *)this + 5154) = v3;
    VIDMM_GLOBAL::SendBudgetChangeNotifications(this);
    *a2 = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      Template_q(v19, &EventVidMmProfilerExit, v20, 14001);
  }
}
