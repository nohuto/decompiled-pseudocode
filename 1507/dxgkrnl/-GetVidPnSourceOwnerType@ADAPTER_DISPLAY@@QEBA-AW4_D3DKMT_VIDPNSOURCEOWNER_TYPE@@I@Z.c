/*
 * XREFs of ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C
 * Callers:
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B52D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     DxgkIsVidPnSourceOwnerExclusive @ 0x1C00DD300 (DxgkIsVidPnSourceOwnerExclusive.c)
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0127B00 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C01299D0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C0138D70 (DxgkSetGammaRamp.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0152AC4 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerType(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v5 + 24) = 4003LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v6 + 24) = 4004LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return *((unsigned int *)this[14] + 252 * v3 + 170);
}
