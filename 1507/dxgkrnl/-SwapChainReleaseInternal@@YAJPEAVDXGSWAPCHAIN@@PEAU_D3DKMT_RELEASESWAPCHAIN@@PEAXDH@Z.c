/*
 * XREFs of ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0162FF0
 * Callers:
 *     _lambda_7150a169cdd0c5f2e5952f51a82ef394_::_helper_func_cdecl_ @ 0x1C01594D0 (_lambda_7150a169cdd0c5f2e5952f51a82ef394_--_helper_func_cdecl_.c)
 *     DxgkReleaseSwapChain @ 0x1C01640E0 (DxgkReleaseSwapChain.c)
 * Callees:
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0161030 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C016108C (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01610B8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C016291C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall SwapChainReleaseInternal(
        struct DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        __int64 a4)
{
  char v4; // si
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // r9
  _BYTE v12[80]; // [rsp+20h] [rbp-68h] BYREF
  struct DXGDEVICE *v13; // [rsp+98h] [rbp+10h] BYREF

  v4 = a4;
  if ( a2->pMetaData )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 988LL;
    WdLogEvent5_WdAssertion(v8);
  }
  a2->pMetaData = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12, this, a2->bProducer, v4);
  v9 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v12, &v13, 1);
  if ( v9 >= 0 )
  {
    LOBYTE(v10) = v4;
    v9 = DXGSWAPCHAIN::ReleaseBuffer((struct _KTHREAD **)this, a2, a3, v10);
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12);
  return (unsigned int)v9;
}
