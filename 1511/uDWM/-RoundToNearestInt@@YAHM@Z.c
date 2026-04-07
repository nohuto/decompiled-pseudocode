/*
 * XREFs of ?RoundToNearestInt@@YAHM@Z @ 0x18003E990
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C908 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D198 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D3AC (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180037490 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x18008CB58 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D3B8 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18009B870 (-Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18009BAD0 (-Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 * Callees:
 *     ceilf_0 @ 0x18004FF12 (ceilf_0.c)
 *     floorf_0 @ 0x18004FF36 (floorf_0.c)
 */

__int64 __fastcall RoundToNearestInt(float a1)
{
  float v1; // xmm0_4

  if ( a1 < 0.0 )
    v1 = ceilf_0(a1 - 0.5);
  else
    v1 = floorf_0(a1 + 0.5);
  return (unsigned int)(int)v1;
}
