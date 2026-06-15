/*
 * XREFs of WPP_SF_ii @ 0x14002B318
 * Callers:
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x14002AF00 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 *     ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x14002F930 (-GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z.c)
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140038900 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003A5B0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ii(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
