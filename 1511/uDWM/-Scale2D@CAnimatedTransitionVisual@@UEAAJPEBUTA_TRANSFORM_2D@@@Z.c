/*
 * XREFs of ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18000DBB0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180036850 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180091438 (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 187) != v2
    || *((float *)this + 188) != *((float *)a2 + 6)
    || *((float *)this + 190) != *((float *)a2 + 9)
    || *((float *)this + 191) != *((float *)a2 + 10) )
  {
    v3 = *((_BYTE *)this + 958) == 0;
    *((float *)this + 187) = v2;
    *((_DWORD *)this + 188) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 189) = 1065353216;
    if ( v3 )
    {
      *((_DWORD *)this + 190) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 764) = *((unsigned int *)a2 + 10);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x1000u);
  }
  return 0LL;
}
