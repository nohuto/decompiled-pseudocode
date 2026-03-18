/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C000AEE4
 * Callers:
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00B3660 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00B3744 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00BDA68 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00BDB08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFA64 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 * Callees:
 *     ?ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z @ 0x1C015A7A8 (-ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rdi
  DXGDODPRESENT *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = 1008LL * a2;
  if ( !*(_QWORD *)(*((_QWORD *)this + 14) + v4 + 672) )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v6 + 24) = 3925LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 14) + v4 + 680) )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v7 + 24) = 3926LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v5 = (DXGDODPRESENT *)*((_QWORD *)this + 31);
  if ( v5 )
    DXGDODPRESENT::ReleaseVidPnSourceOwnership(v5, a2);
  *(_QWORD *)(*((_QWORD *)this + 14) + v4 + 672) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 14) + v4 + 680) = 0;
  *(_DWORD *)(*((_QWORD *)this + 14) + v4 + 684) = 0;
  *(_QWORD *)(*((_QWORD *)this + 14) + v4 + 688) = 0LL;
  OUTPUTDUPL_MGR::ProcessReleaseVidPnOwnership(*((OUTPUTDUPL_MGR **)this + 13), a2);
}
