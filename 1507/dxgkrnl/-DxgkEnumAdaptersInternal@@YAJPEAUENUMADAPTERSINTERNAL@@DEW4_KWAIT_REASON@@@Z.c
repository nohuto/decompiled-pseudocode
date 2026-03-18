/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C008A9CC
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00A7870 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C01258F0 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00098B8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C008DA30 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00ADB3C (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  enum _KWAIT_REASON v4; // esi
  char v5; // di
  char v6; // bp
  struct DXGGLOBAL *Global; // rax
  union _LARGE_INTEGER *v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGGLOBAL *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rcx
  struct DXGGLOBAL *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // ebx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE v40[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGPROCESS *v41; // [rsp+28h] [rbp-20h]
  char v42; // [rsp+30h] [rbp-18h]

  v4 = (int)a4;
  v5 = a3;
  v6 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2078);
  if ( !a1 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v32 + 24) = 4317LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
    v10 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 70), v4, v6, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      v33 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v33 + 24) = v11;
      WdLogEvent5_WdError(v33);
    }
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( Current )
  {
    v41 = Current;
    v42 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v40, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v18 = DXGGLOBAL::GetGlobal(v15, v14, v16, v17);
    v19 = DXGGLOBAL::IterateAdaptersWithCallback(v18, EnumAdaptersCallback, a1, 1LL);
    v23 = *((unsigned int *)a1 + 1);
    v24 = v19;
    if ( *(_DWORD *)a1 > (unsigned int)v23 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v23, v20, v21, v22);
      *(_QWORD *)(v35 + 24) = 4375LL;
      WdLogEvent5_WdAssertion(v35);
    }
    v25 = *((unsigned int *)a1 + 2);
    if ( *(_DWORD *)a1 > (unsigned int)v25 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v25, v20, v21, v22);
      *(_QWORD *)(v36 + 24) = 4376LL;
      WdLogEvent5_WdAssertion(v36);
    }
    if ( v24 < 0 )
      goto LABEL_25;
    v26 = DXGGLOBAL::GetGlobal(v25, v20, v21, v22);
    v24 = DXGGLOBAL::IterateAdaptersWithCallback(v26, EnumAdaptersCallback, a1, 3LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v25, v27, v28, v29);
      *(_QWORD *)(v37 + 24) = 4388LL;
      WdLogEvent5_WdAssertion(v37);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v25, v27, v28, v29);
      *(_QWORD *)(v38 + 24) = 4389LL;
      WdLogEvent5_WdAssertion(v38);
    }
    if ( v24 < 0 )
    {
LABEL_25:
      v39 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v39 + 24) = v24;
      WdLogEvent5_WdError(v39);
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(*(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v30 = v24;
    if ( v42 )
    {
      v42 = 0;
      (*(void (**)(void))(*((_QWORD *)v41 + 10) + 40LL))();
    }
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v13);
    v30 = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v28, 2078);
  return v30;
}
