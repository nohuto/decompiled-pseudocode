/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C012DA40
 * Callers:
 *     DxgkQueryStatistics @ 0x1C0131A30 (DxgkQueryStatistics.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C001BD2C (-VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QU.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C001BE64 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C001BEE0 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C001BF60 (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C001BFDC (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct _KTHREAD ***a3)
{
  struct _KTHREAD *v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int ProcessStatistics; // r14d
  __int64 v17; // rax
  unsigned int ProcessNodeStatistics; // eax
  __int64 v19; // rax
  struct _KTHREAD **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  struct _KTHREAD **v23; // rcx
  __int64 v24; // r8
  struct _KTHREAD *v25; // rdx

  v3 = 0LL;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v7 + 24) = 9193LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 || !*((_QWORD *)a2 + 249) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 9194LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 9196LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *a3[11] != KeGetCurrentThread() && a3 != (struct _KTHREAD ***)DXGPROCESS::GetCurrent() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 9197LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    ProcessStatistics = VIDMM_EXPORT::VidMmQueryProcessStatistics(
                          *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 249) + 424LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 249) + 432LL),
                          (struct DXGPROCESS *)a3,
                          (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    if ( ProcessStatistics < 0 )
      return (unsigned int)ProcessStatistics;
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 249) + 400LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 249) + 408LL),
                           (struct DXGPROCESS *)a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( *(_DWORD *)a1 != 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 4:
        v19 = *((_QWORD *)a2 + 249);
        v20 = a3[9];
        v21 = *(_QWORD *)(v19 + 424);
        if ( v20 )
          v3 = v20[*(_DWORD *)v21 - 1];
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KTHREAD *, char *))(*(_QWORD *)(v21 + 8) + 312LL))(
                                  *(_QWORD *)(v19 + 432),
                                  *((unsigned int *)a1 + 200),
                                  v3,
                                  (char *)a1 + 24);
        break;
      case 6:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 249) + 400LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 249) + 408LL),
                                  *((_DWORD *)a1 + 200),
                                  (struct DXGPROCESS *)a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 8:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 249) + 400LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 249) + 408LL),
                                  *((_DWORD *)a1 + 200),
                                  (struct DXGPROCESS *)a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      default:
        ProcessStatistics = -1073741811;
        v17 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 6), v9, v11, v12);
        *(_QWORD *)(v17 + 24) = *(int *)a1;
        WdLogEvent5_WdWarning(v17);
        return (unsigned int)ProcessStatistics;
    }
    return ProcessNodeStatistics;
  }
  v22 = *((_QWORD *)a2 + 249);
  v23 = a3[9];
  v24 = *(_QWORD *)(v22 + 424);
  if ( v23 )
    v25 = v23[*(_DWORD *)v24 - 1];
  else
    v25 = 0LL;
  ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD *, char *))(*(_QWORD *)(v24 + 8) + 296LL))(
                        *(_QWORD *)(v22 + 432),
                        v25,
                        (char *)a1 + 24);
  if ( ProcessStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 249) + 400LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 249) + 408LL),
                           (struct DXGPROCESS *)a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  return (unsigned int)ProcessStatistics;
}
