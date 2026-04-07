/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180014980
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180011000 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008FE28 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x180090F00 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180020D60 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  int v3; // eax
  CVisual *v4; // rcx
  int v5; // eax

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 184) != v2 || *((float *)this + 185) != *((float *)a2 + 6) )
  {
    *((float *)this + 184) = v2;
    v3 = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 186) = 0;
    *((_DWORD *)this + 185) = v3;
    v4 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v5 = *((_DWORD *)v4 + 20);
    if ( (v5 & 0x1000) == 0 )
    {
      *((_DWORD *)v4 + 20) = v5 | 0x1000;
      CVisual::PropagateDirtyChildren(v4);
    }
  }
  return 0LL;
}
