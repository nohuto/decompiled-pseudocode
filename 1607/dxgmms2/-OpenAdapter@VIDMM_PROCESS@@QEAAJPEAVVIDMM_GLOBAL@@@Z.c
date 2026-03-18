/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D228
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0044B54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0057AA0 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005B250 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006FFC4 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005CD7C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C0064A28 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C009BAF8 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C009BB34 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(
        struct DXGPROCESS **this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v11; // rax
  VIDMM_GLOBAL *v12; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v13; // rsi
  __int64 v14; // r14
  _DWORD *v15; // r15

  v6 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 200LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = this;
  }
  v8 = v6;
  v9 = *((_QWORD *)this[2] + v6);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    return 0LL;
  }
  v11 = VIDMM_PROCESS::InitializeProcessAdapterInfo((VIDMM_PROCESS *)this, a2, a3);
  v13 = v11;
  if ( v11 )
  {
    *((_QWORD *)this[2] + v8) = v11;
    _InterlockedIncrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v8);
    v14 = 0LL;
    if ( *((_DWORD *)a2 + 926) )
    {
      v15 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
      {
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8 * v14), v15[v8]);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < *((_DWORD *)a2 + 926) );
    }
    if ( bTracingEnabled )
    {
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        v12,
        this[4],
        (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v13 + 360),
        (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v13 + 352));
      VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v13);
    }
    return 0LL;
  }
  return 3221225495LL;
}
