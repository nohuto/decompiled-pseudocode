/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C014E218
 * Callers:
 *     DxgkQueryStatistics @ 0x1C014FEC0 (DxgkQueryStatistics.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C0020E2C (-VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QU.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C0020F1C (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C0020F98 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C0021018 (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C0021094 (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int ProcessStatistics; // r14d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int ProcessNodeStatistics; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx

  v3 = 0LL;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v7 + 24) = 3194LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 || !*((_QWORD *)a2 + 267) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 3195LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 3197LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a3 + 10) + 8LL) != CurrentThread )
  {
    CurrentProcess = PsGetCurrentProcess(CurrentThread);
    if ( a3 != (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v16) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v18 + 24) = 3198LL;
      WdLogEvent5_WdAssertion(v18);
    }
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    ProcessStatistics = VIDMM_EXPORT::VidMmQueryProcessStatistics(
                          *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 267) + 400LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 267) + 408LL),
                          a3,
                          (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    if ( ProcessStatistics < 0 )
      return (unsigned int)ProcessStatistics;
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 267) + 376LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 267) + 384LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( *(_DWORD *)a1 != 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 4:
        v25 = *((_QWORD *)a2 + 267);
        v26 = *((_QWORD *)a3 + 8);
        v27 = *(_QWORD *)(v25 + 400);
        if ( v26 )
          v3 = *(_QWORD *)(v26 + 8LL * (unsigned int)(*(_DWORD *)v27 - 1));
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v27 + 8) + 320LL))(
                                  *(_QWORD *)(v25 + 408),
                                  *((unsigned int *)a1 + 200),
                                  v3,
                                  (char *)a1 + 24);
        break;
      case 6:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 267) + 376LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 267) + 384LL),
                                  *((_DWORD *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 8:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 267) + 376LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 267) + 384LL),
                                  *((_DWORD *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 9:
        v21 = *((_QWORD *)a2 + 267);
        v22 = *((_QWORD *)a3 + 8);
        v23 = *(_QWORD *)(v21 + 400);
        if ( v22 )
          v3 = *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)v23 - 1));
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v23 + 8) + 328LL))(
                                  *(_QWORD *)(v21 + 408),
                                  *((unsigned int *)a1 + 200),
                                  v3,
                                  (char *)a1 + 24);
        break;
      default:
        ProcessStatistics = -1073741811;
        v20 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 8), v9, v11, v12);
        *(_QWORD *)(v20 + 24) = *(int *)a1;
        WdLogEvent5_WdWarning(v20);
        return (unsigned int)ProcessStatistics;
    }
    return ProcessNodeStatistics;
  }
  v28 = *((_QWORD *)a2 + 267);
  v29 = *((_QWORD *)a3 + 8);
  v30 = *(_QWORD *)(v28 + 400);
  if ( v29 )
    v31 = *(_QWORD *)(v29 + 8LL * (unsigned int)(*(_DWORD *)v30 - 1));
  else
    v31 = 0LL;
  ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v30 + 8) + 304LL))(
                        *(_QWORD *)(v28 + 408),
                        v31,
                        (char *)a1 + 24);
  if ( ProcessStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 267) + 376LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 267) + 384LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  return (unsigned int)ProcessStatistics;
}
