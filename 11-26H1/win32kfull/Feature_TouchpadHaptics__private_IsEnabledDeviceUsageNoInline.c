/*
 * XREFs of Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     EditionPostInputMessage @ 0x140277240 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x1402773C0 (EditionPostMouseMoveToQ.c)
 *     EditionPostMouseWheelToForeground @ 0x140277510 (EditionPostMouseWheelToForeground.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x14027B068 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     NtUserGetLatestInputMessageData @ 0x1402B3E10 (NtUserGetLatestInputMessageData.c)
 *     NtUserGetPointerIdForPromotion @ 0x1402B44F0 (NtUserGetPointerIdForPromotion.c)
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x14029D190 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadHaptics__private_featureState & 0x10) != 0 )
    return Feature_TouchpadHaptics__private_featureState & 1;
  else
    return Feature_TouchpadHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadHaptics__private_featureState,
             3LL);
}
