/*
 * XREFs of ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C017E6EC
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01479BC (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00780F0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C017DBCC (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(OUTPUTDUPL_MGR_INDIRECT *this, struct _LUID a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, *((struct _KTHREAD ***)this + 6));
  DXGPUSHLOCK::AcquireExclusive(v5);
  *((_DWORD *)this + 18) = 0;
  v6 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  OUTPUTDUPL_MGR::ProcessAdapterReset((OUTPUTDUPL_CONTEXT **)this + 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR_INDIRECT *)((char *)this + 24), 0LL, 1);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, *((struct _KTHREAD ***)this + 6));
  DXGPUSHLOCK::AcquireExclusive(v5);
  *((struct _LUID *)this + 14) = a2;
  v6 = 2;
  *((_DWORD *)this + 18) = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  return 0LL;
}
