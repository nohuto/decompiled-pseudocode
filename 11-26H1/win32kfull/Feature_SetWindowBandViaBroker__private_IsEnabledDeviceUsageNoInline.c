/*
 * XREFs of Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline @ 0x1402AF2A4
 * Callers:
 *     NtUserSetWindowBand @ 0x14027A3C0 (NtUserSetWindowBand.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     Feature_SetWindowBandViaBroker__private_IsEnabledFallback @ 0x1402AF2E0 (Feature_SetWindowBandViaBroker__private_IsEnabledFallback.c)
 */

__int64 Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetWindowBandViaBroker__private_featureState & 0x10) != 0 )
    return Feature_SetWindowBandViaBroker__private_featureState & 1;
  else
    return Feature_SetWindowBandViaBroker__private_IsEnabledFallback(
             (unsigned int)Feature_SetWindowBandViaBroker__private_featureState,
             3LL);
}
