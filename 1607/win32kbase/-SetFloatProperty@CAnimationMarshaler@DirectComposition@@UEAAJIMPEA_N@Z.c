/*
 * XREFs of ?SetFloatProperty@CAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C004DB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetFloatProperty(
        DirectComposition::CAnimationMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  *a4 = 0;
  if ( a2 == 6 && _finite(a3) )
    *((float *)this + 36) = a3;
  else
    return (unsigned int)-1073741811;
  return v4;
}
