/*
 * XREFs of ?ShouldMerge@CDirtyRegion@@AEAA_NIIW4DirtyRegionOptimization@@@Z @ 0x18000CA84
 * Callers:
 *     ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x18000CB24 (-Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004BBD0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800AF2EC (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 */

char __fastcall CDirtyRegion::ShouldMerge(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  char DoesIntersectUnsafe; // bl
  const struct MilRectF *v5; // rdx
  const struct MilRectF *v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // r11

  DoesIntersectUnsafe = 1;
  if ( a4 != 2 )
  {
    DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                            16LL * a2 + a1 + 24,
                            16LL * a3 + a1 + 24);
    if ( !DoesIntersectUnsafe
      && v8
      && (*(float *)(v9 + 4 * (v10 + 8 * v7) + 2288) >= 0.86000001 || CalcOvehead(v6, v5) < 50000.0) )
    {
      return 1;
    }
  }
  return DoesIntersectUnsafe;
}
