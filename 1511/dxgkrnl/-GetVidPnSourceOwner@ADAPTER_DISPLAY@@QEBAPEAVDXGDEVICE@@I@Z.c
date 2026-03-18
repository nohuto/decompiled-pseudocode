/*
 * XREFs of ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0007E78
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B059C (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129B60 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012DCD0 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0130060 (DxgkAdjustFullscreenGamma.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C0130680 (DxgkNeedToEnableCddPrimary.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C01589B8 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwner(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 4156LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 4157LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return (struct DXGDEVICE *)*((_QWORD *)this[17] + 127 * v3 + 84);
}
