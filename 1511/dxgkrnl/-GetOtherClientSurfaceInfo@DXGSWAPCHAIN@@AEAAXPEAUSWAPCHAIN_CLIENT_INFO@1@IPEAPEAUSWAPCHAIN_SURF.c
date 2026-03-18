/*
 * XREFs of ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C00224A4
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C0166E9C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0022524 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 */

void __fastcall DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        unsigned int a3,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO **a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **a5)
{
  __int64 v6; // rbx
  __int64 v9; // rax

  v6 = a3;
  if ( a3 >= *((_DWORD *)this + 16) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 253LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *a4 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 9) + 56 * v6);
  *a5 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)*a4
                                                   + 16
                                                   * (int)DXGSWAPCHAIN::SwitchClient(this, *((unsigned int *)a2 + 10))
                                                   + 24);
}
