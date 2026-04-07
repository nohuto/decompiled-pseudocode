/*
 * XREFs of ?GetChopStart@CAnimatedTransitionVisual@@UEAAJPEAN@Z @ 0x180089300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopStart(CAnimatedTransitionVisual *this, double *a2)
{
  if ( !*((_BYTE *)this + 984) )
    return 2147943568LL;
  *a2 = *((double *)this + 122);
  return 0LL;
}
