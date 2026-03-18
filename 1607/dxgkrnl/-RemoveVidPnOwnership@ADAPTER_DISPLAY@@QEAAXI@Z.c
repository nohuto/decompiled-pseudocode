/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00067C4
 * Callers:
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00875FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0088748 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00DE0B8 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00DE19C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1E90 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z @ 0x1C0184420 (-ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(OUTPUTDUPL_MGR **this, unsigned int a2)
{
  __int64 v4; // rdi
  DXGDODPRESENT *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = 1016LL * a2;
  if ( !*(_QWORD *)((char *)this[14] + v4 + 672) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 4219LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*(_DWORD *)((char *)this[14] + v4 + 680) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 4220LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v5 = this[32];
  if ( v5 )
    DXGDODPRESENT::ReleaseVidPnSourceOwnership(v5, a2);
  *(_QWORD *)((char *)this[14] + v4 + 672) = 0LL;
  *(_QWORD *)((char *)this[14] + v4 + 696) = 0LL;
  *(_DWORD *)((char *)this[14] + v4 + 680) = 0;
  *(_DWORD *)((char *)this[14] + v4 + 684) = 0;
  *(_QWORD *)((char *)this[14] + v4 + 688) = 0LL;
  OUTPUTDUPL_MGR::ProcessReleaseVidPnOwnership(this[13], a2);
}
