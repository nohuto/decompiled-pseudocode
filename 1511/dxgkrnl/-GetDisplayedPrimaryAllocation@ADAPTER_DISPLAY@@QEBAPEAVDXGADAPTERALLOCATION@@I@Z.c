/*
 * XREFs of ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B794
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000D2D0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B8E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 */

struct DXGADAPTERALLOCATION *__fastcall ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
        DXGADAPTER **this,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct DXGADAPTERALLOCATION *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGDEVICE *v9; // rsi
  __int64 v10; // rcx
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v17 + 24) = 11115LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v18 + 24) = 11116LL;
    WdLogEvent5_WdAssertion(v18);
  }
  result = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v3);
  if ( !result )
  {
    v9 = (DXGDEVICE *)*((_QWORD *)this[17] + 127 * v3 + 84);
    if ( v9 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL)) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v19 + 24) = 11141LL;
        WdLogEvent5_WdAssertion(v19);
      }
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(v9, v3);
      if ( DisplayedPrimary )
        return (struct DXGADAPTERALLOCATION *)*((_QWORD *)DisplayedPrimary + 6);
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      v16[3] = v9;
      v16[4] = v3;
      v16[5] = this[2];
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(1016 * v3, v6, v7, v8);
      v16[3] = v3;
      v16[4] = this[2];
    }
    WdLogEvent5_WdWarning(v16);
    return 0LL;
  }
  return result;
}
