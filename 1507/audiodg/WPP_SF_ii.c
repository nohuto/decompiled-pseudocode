/*
 * XREFs of WPP_SF_ii @ 0x14003AC00
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140039AC0 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003B670 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_ii(TRACEHANDLE a1, USHORT a2, const GUID *a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, a3, a2, va, 8LL, va1, 8LL, 0LL);
}
