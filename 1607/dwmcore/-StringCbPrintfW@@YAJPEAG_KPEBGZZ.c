/*
 * XREFs of ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A4648
 * Callers:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800A459C (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B8844 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1800A46A0 (StringVPrintfWorkerW.c)
 */

__int64 StringCbPrintfW(unsigned __int16 *a1, unsigned __int64 a2, size_t *a3, ...)
{
  size_t v3; // rdx
  int v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringVPrintfWorkerW(a1, v3, a3, (STRSAFE_LPCWSTR)a3, va);
  }
  return (unsigned int)v4;
}
