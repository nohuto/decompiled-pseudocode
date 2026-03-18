/*
 * XREFs of ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018E7CC
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C018D720 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018DA50 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C018E588 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C018E6A8 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C018ECE8 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C018EFB8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C018F1DC (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 * Callees:
 *     Template_ppp @ 0x1C0029068 (Template_ppp.c)
 */

void __fastcall DXGSWAPCHAIN::MarkAbandoned(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx

  if ( this[1] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2377LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (struct _KEVENT *)this[15];
  *((_DWORD *)this + 11) = 1;
  if ( v5 )
    KeSetEvent(v5, 2, 0);
  v6 = (struct _KEVENT *)this[22];
  if ( v6 )
    KeSetEvent(v6, 2, 0);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    Template_ppp((__int64)v6, a2, a3, this, this[22], this[15]);
}
