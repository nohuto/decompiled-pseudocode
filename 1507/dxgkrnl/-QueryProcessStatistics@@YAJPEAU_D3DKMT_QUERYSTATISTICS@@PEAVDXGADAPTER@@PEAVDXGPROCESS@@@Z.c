/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C0127860
 * Callers:
 *     DxgkQueryStatistics @ 0x1C012B490 (DxgkQueryStatistics.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C001B27C (-VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QU.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C001B3B4 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C001B430 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C001B4B0 (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C001B52C (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessStatistics; // r14d
  __int64 v19; // rax
  unsigned int ProcessNodeStatistics; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx

  v4 = 0LL;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 8848LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 || !*((_QWORD *)a2 + 248) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 8849LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  if ( !a3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 8851LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a3 + 11) + 8LL) != CurrentThread
    && a3 != DXGPROCESS::GetCurrent((__int64)CurrentThread) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = 8852LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    ProcessStatistics = VIDMM_EXPORT::VidMmQueryProcessStatistics(
                          *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 248) + 400LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 248) + 408LL),
                          a3,
                          (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    if ( ProcessStatistics < 0 )
      return (unsigned int)ProcessStatistics;
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 248) + 376LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 248) + 384LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( *(_DWORD *)a1 != 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 4:
        v21 = *((_QWORD *)a2 + 248);
        v22 = *((_QWORD *)a3 + 9);
        v23 = *(_QWORD *)(v21 + 400);
        if ( v22 )
          v4 = *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)v23 - 1));
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v23 + 8) + 312LL))(
                                  *(_QWORD *)(v21 + 408),
                                  *((unsigned int *)a1 + 200),
                                  v4,
                                  (char *)a1 + 24);
        break;
      case 6:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 248) + 376LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 248) + 384LL),
                                  *((_DWORD *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 8:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 248) + 376LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 248) + 384LL),
                                  *((_DWORD *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      default:
        ProcessStatistics = -1073741811;
        v19 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 6), v10, v12, v13);
        *(_QWORD *)(v19 + 24) = *(int *)a1;
        WdLogEvent5_WdWarning(v19);
        return (unsigned int)ProcessStatistics;
    }
    return ProcessNodeStatistics;
  }
  v24 = *((_QWORD *)a2 + 248);
  v25 = *((_QWORD *)a3 + 9);
  v26 = *(_QWORD *)(v24 + 400);
  if ( v25 )
    v27 = *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)v26 - 1));
  else
    v27 = 0LL;
  ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v26 + 8) + 296LL))(
                        *(_QWORD *)(v24 + 408),
                        v27,
                        (char *)a1 + 24);
  if ( ProcessStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 248) + 376LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 248) + 384LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  return (unsigned int)ProcessStatistics;
}
