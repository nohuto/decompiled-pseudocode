/*
 * XREFs of ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C0162E10
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0021A88 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015A850 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     DxgkAbandonSwapChain @ 0x1C01630E0 (DxgkAbandonSwapChain.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C016241C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

__int64 __fastcall SwapChainAbandonInternal(struct DXGSWAPCHAIN *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v2, v3, v4);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return 0LL;
}
