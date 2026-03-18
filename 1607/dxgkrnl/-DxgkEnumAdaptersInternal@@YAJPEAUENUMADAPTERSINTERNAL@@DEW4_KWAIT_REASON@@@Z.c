/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00747D0
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0074480 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C014D7A0 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001624 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C00779A8 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
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
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v16; // rcx
  struct DXGGLOBAL *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  struct DXGGLOBAL *v22; // rax
  __int64 v23; // r8
  unsigned int v24; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v35; // [rsp+28h] [rbp-20h]
  char v36; // [rsp+30h] [rbp-18h]

  v5 = a3;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2078);
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v26 + 24) = 966LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v10 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 69), a4, a2, v9);
    v12 = v10;
    if ( v10 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v27 + 24) = v12;
      WdLogEvent5_WdError(v27);
    }
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v14);
  if ( ProcessDxgProcess )
  {
    v35 = ProcessDxgProcess;
    v36 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v34, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v17 = DXGGLOBAL::GetGlobal();
    v18 = DXGGLOBAL::IterateAdaptersWithCallback(v17, EnumAdaptersCallback, a1, 1LL);
    v19 = *((unsigned int *)a1 + 1);
    v20 = v18;
    if ( *(_DWORD *)a1 > (unsigned int)v19 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v29 + 24) = 1024LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v21 = *((unsigned int *)a1 + 2);
    if ( *(_DWORD *)a1 > (unsigned int)v21 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v30 + 24) = 1025LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v20 < 0 )
      goto LABEL_25;
    v22 = DXGGLOBAL::GetGlobal();
    v20 = DXGGLOBAL::IterateAdaptersWithCallback(v22, EnumAdaptersCallback, a1, 3LL);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v31 + 24) = 1037LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v32 + 24) = 1038LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( v20 < 0 )
    {
LABEL_25:
      v33 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v33 + 24) = v20;
      WdLogEvent5_WdError(v33);
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(*(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v24 = v20;
    if ( v36 )
    {
      v36 = 0;
      (*(void (**)(void))(*(_QWORD *)(v35 + 72) + 40LL))();
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v16);
    v24 = -1073741811;
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v23, 2078);
  return v24;
}
