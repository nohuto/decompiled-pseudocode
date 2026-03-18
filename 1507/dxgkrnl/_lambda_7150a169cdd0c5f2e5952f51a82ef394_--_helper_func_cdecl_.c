/*
 * XREFs of _lambda_7150a169cdd0c5f2e5952f51a82ef394_::_helper_func_cdecl_ @ 0x1C01594D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0162FF0 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

LONG_PTR __fastcall lambda_7150a169cdd0c5f2e5952f51a82ef394_::_helper_func_cdecl_(struct DXGSWAPCHAIN **Object)
{
  struct DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // rdi
  LONG_PTR result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-38h]
  struct _D3DKMT_RELEASESWAPCHAIN v11; // [rsp+30h] [rbp-28h] BYREF

  v11.pMetaData = 0LL;
  v2 = *Object;
  v11.hNtSwapChain = 0LL;
  v11.MetaDataSize = 0;
  v11.pMetaData = 0LL;
  v11.bProducer = 1;
  v3 = (int)SwapChainReleaseInternal(v2, &v11, 0LL, 0, v10);
  result = ObfDereferenceObject(Object);
  if ( (int)v3 < 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = v3;
    return WdLogEvent5_WdAssertion(v9);
  }
  return result;
}
