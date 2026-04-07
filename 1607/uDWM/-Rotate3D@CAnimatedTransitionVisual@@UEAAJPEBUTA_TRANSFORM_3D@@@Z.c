/*
 * XREFs of ?Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x18008C010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z @ 0x18008C8F0 (-_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  CAnimatedTransitionVisual *v4; // rcx
  CAnimatedTransitionVisual *v5; // rcx
  float v6; // xmm0_4
  bool v7; // zf

  if ( *((float *)this + 193) != *((float *)a2 + 5)
    || *((float *)this + 194) != *((float *)a2 + 6)
    || *((float *)this + 195) != *((float *)a2 + 7)
    || !*((_BYTE *)this + 957)
    && (*((float *)this + 196) != *((float *)a2 + 11)
     || *((float *)this + 197) != *((float *)a2 + 12)
     || *((float *)this + 198) != *((float *)a2 + 13)) )
  {
    *((float *)this + 193) = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(this, *((float *)a2 + 5));
    *((float *)this + 194) = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(v4, *((float *)a2 + 6));
    v6 = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(v5, *((float *)a2 + 7));
    v7 = *((_BYTE *)this + 957) == 0;
    *((float *)this + 195) = v6;
    if ( v7 )
    {
      *((_DWORD *)this + 196) = *((_DWORD *)a2 + 11);
      *((_DWORD *)this + 197) = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 198) = *((_DWORD *)a2 + 13);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
