/*
 * XREFs of ?NetDmaRegisterProvider@@YAJPEAXPEAPEAXPEAU_NET_DMA_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C0064E60
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z @ 0x1C006E44C (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z.c)
 */

NTSTATUS __stdcall NetDmaRegisterProvider(
        PVOID ProviderContext,
        PVOID *pNetDmaProviderHandle,
        PNET_DMA_PROVIDER_CHARACTERISTICS ProviderCharacteristics)
{
  NdisTraceLoggingDeprecationCandidate(0LL, pNetDmaProviderHandle, ProviderCharacteristics);
  *pNetDmaProviderHandle = 0LL;
  return 0;
}
