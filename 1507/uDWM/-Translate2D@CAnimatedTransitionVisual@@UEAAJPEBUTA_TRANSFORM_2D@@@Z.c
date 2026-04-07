/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180038AF0
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180030FE8 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008DEC8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x18008F024 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 184) != v2 || *((float *)this + 185) != *((float *)a2 + 6) )
  {
    *((float *)this + 184) = v2;
    *(_QWORD *)((char *)this + 740) = *((unsigned int *)a2 + 6);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
