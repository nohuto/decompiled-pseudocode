/*
 * XREFs of ?Rotate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800893A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 193) != v2
    || *((float *)this + 196) != *((float *)a2 + 9)
    || *((float *)this + 197) != *((float *)a2 + 10) )
  {
    *((float *)this + 193) = v2;
    *((_QWORD *)this + 97) = 0LL;
    if ( !*((_BYTE *)this + 957) )
    {
      *((_DWORD *)this + 196) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 788) = *((unsigned int *)a2 + 10);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
