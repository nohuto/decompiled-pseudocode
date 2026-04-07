/*
 * XREFs of ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180089530
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008DEC8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
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
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
