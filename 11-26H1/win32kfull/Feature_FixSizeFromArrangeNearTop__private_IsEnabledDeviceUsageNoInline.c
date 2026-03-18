/*
 * XREFs of Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402C83D8
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402C43E4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402C5058 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 * Callees:
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback @ 0x1402C8414 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback.c)
 */

__int64 Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixSizeFromArrangeNearTop__private_featureState & 0x10) != 0 )
    return Feature_FixSizeFromArrangeNearTop__private_featureState & 1;
  else
    return Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback(
             (unsigned int)Feature_FixSizeFromArrangeNearTop__private_featureState,
             3LL);
}
