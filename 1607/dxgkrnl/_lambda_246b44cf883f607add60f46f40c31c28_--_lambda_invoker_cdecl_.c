/*
 * XREFs of _lambda_246b44cf883f607add60f46f40c31c28_::_lambda_invoker_cdecl_ @ 0x1C0183060
 * Callers:
 *     <none>
 * Callees:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C018F3A0 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

LONG_PTR __fastcall lambda_246b44cf883f607add60f46f40c31c28_::_lambda_invoker_cdecl_(struct DXGSWAPCHAIN **Object)
{
  struct DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // rdi
  LONG_PTR result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // [rsp+20h] [rbp-38h]
  struct _D3DKMT_RELEASESWAPCHAIN v8; // [rsp+30h] [rbp-28h] BYREF

  v8.pMetaData = 0LL;
  v2 = *Object;
  v8.hNtSwapChain = 0LL;
  v8.MetaDataSize = 0;
  v8.pMetaData = 0LL;
  v8.bProducer = 1;
  v3 = (int)SwapChainReleaseInternal(v2, &v8, 0LL, 0, v7);
  result = ObfDereferenceObject(Object);
  if ( (int)v3 < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = v3;
    return WdLogEvent5_WdAssertion(v6);
  }
  return result;
}
