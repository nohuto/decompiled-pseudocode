/*
 * XREFs of lNormAngle @ 0x1C0075F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lNormAngle(int a1)
{
  if ( a1 >= 3600 )
    return (unsigned int)(a1 % 3600);
  if ( a1 < 0 )
    return (unsigned int)(3599 - (-1 - a1) % 3600);
  return (unsigned int)a1;
}
