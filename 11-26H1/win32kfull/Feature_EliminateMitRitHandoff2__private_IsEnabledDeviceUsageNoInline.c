/*
 * XREFs of Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C
 * Callers:
 *     EditionInitiateMouseEventProcessing @ 0x140133E70 (EditionInitiateMouseEventProcessing.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1401364E0 (xxxCleanupThreadPointerInputInfo.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x140249400 (EditionPrepareHidForInputThreadMigration.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 *     EditionExtensibility_WakeMITForInterceptCallout @ 0x14029CF00 (EditionExtensibility_WakeMITForInterceptCallout.c)
 *     EditionActivateMitInput @ 0x1402A9E80 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1402A9FC0 (EditionDeactivateMitInput.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x14029D0C4 (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 */

__int64 Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EliminateMitRitHandoff2__private_featureState & 0x10) != 0 )
    return Feature_EliminateMitRitHandoff2__private_featureState & 1;
  else
    return Feature_EliminateMitRitHandoff2__private_IsEnabledFallback(
             (unsigned int)Feature_EliminateMitRitHandoff2__private_featureState,
             3LL);
}
