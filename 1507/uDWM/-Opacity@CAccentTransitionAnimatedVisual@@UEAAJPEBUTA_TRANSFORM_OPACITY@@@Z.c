/*
 * XREFs of ?Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180098010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::Opacity(
        CAccentTransitionAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  unsigned int v2; // ebx
  CVisual *v3; // rcx

  v2 = 0;
  if ( *((_DWORD *)this + 8) == 1 )
  {
    v3 = (CVisual *)*((_QWORD *)this + 3);
    *((_DWORD *)v3 + 86) = *((_DWORD *)a2 + 5);
    CVisual::SetDirtyFlags(v3, 0x2000);
  }
  else if ( *((int *)this + 8) <= 1 || *((int *)this + 8) > 6 )
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
