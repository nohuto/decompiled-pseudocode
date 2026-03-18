/*
 * XREFs of Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x140287538
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserSetWindowPos @ 0x14025CDA0 (NtUserSetWindowPos.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402DB9D8 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback @ 0x140287574 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback.c)
 */

__int64 Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NoMoreSwpIamNotifyPosChanged__private_featureState & 0x10) != 0 )
    return Feature_NoMoreSwpIamNotifyPosChanged__private_featureState & 1;
  else
    return Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback(
             (unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_featureState,
             3LL);
}
