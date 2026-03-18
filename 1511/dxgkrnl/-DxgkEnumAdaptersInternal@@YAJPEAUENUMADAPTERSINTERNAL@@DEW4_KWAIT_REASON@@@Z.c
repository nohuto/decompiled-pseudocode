/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D3B0
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D060 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C012BA90 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C009E0A8 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00B98D4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(
        struct ENUMADAPTERSINTERNAL *a1,
        char a2,
        __int64 a3,
        enum _KWAIT_REASON a4)
{
  char v5; // di
  struct DXGGLOBAL *Global; // rax
  union _LARGE_INTEGER *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct DXGGLOBAL *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // r8
  unsigned int v23; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE v33[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGPROCESS *v34; // [rsp+28h] [rbp-20h]
  char v35; // [rsp+30h] [rbp-18h]

  v5 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2078);
  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v25 + 24) = 4426LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v10 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 88), a4, a2, v9);
    v12 = v10;
    if ( v10 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v26 + 24) = v12;
      WdLogEvent5_WdError(v26);
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v34 = Current;
    v35 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v33, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v16 = DXGGLOBAL::GetGlobal(v15);
    v17 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v16,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            1);
    v18 = *((unsigned int *)a1 + 1);
    v19 = v17;
    if ( *(_DWORD *)a1 > (unsigned int)v18 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v28 + 24) = 4484LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v20 = *((unsigned int *)a1 + 2);
    if ( *(_DWORD *)a1 > (unsigned int)v20 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v29 + 24) = 4485LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v19 < 0 )
      goto LABEL_25;
    v21 = DXGGLOBAL::GetGlobal(v20);
    v19 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v21,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            3);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v30 + 24) = 4497LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v31 + 24) = 4498LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v19 < 0 )
    {
LABEL_25:
      v32 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v32 + 24) = v19;
      WdLogEvent5_WdError(v32);
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(*(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v23 = v19;
    if ( v35 )
    {
      v35 = 0;
      (*(void (**)(void))(*((_QWORD *)v34 + 10) + 40LL))();
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v14);
    v23 = -1073741811;
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v22, 2078);
  return v23;
}
