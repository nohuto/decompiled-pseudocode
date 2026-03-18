/*
 * XREFs of Feature_YieldInputQueue2__private_GetVariant @ 0x14018AA6C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140158B00 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ?ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14018A7EC (-ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1401948F0 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1402A0944 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 Feature_YieldInputQueue2__private_GetVariant()
{
  unsigned int v0; // eax

  v0 = Feature_YieldInputQueue2__private_featureState;
  if ( (Feature_YieldInputQueue2__private_featureState & 8) == 0 )
    v0 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
           &Feature_YieldInputQueue2__private_featureState,
           Feature_YieldInputQueue2__private_featureState,
           &Feature_YieldInputQueue2__private_descriptor);
  return (v0 >> 12) & 0x3F;
}
