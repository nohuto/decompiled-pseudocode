/*
 * XREFs of Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x14008C09C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x14008A040 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x14008C000 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 * Callees:
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x14029D0E0 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback.c)
 */

__int64 Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 0x10) != 0 )
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 1;
  else
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback(
             (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState,
             3LL);
}
