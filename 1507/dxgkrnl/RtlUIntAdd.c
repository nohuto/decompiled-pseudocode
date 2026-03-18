/*
 * XREFs of RtlUIntAdd @ 0x1C000A2D0
 * Callers:
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C0162BEC (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  if ( uAugend + uAddend < uAugend )
  {
    *puResult = -1;
    return -1073741675;
  }
  else
  {
    *puResult = uAugend + uAddend;
    return 0;
  }
}
