/*
 * XREFs of ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800913A0
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x180090DD0 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     ??_GCCubicBezierInterpolator@@IEAAPEAXI@Z @ 0x180090CB8 (--_GCCubicBezierInterpolator@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Release(CCubicBezierInterpolator *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 19))-- == 1;
  v2 = *((_DWORD *)this + 19);
  if ( v1 )
    CCubicBezierInterpolator::`scalar deleting destructor'(this);
  return v2;
}
