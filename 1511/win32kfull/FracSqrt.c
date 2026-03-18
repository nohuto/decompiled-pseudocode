/*
 * XREFs of FracSqrt @ 0x1C00B3C4C
 * Callers:
 *     itrp_GetCVTScale @ 0x1C00B0D08 (itrp_GetCVTScale.c)
 *     itrp_Normalize @ 0x1C00B3B68 (itrp_Normalize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FracSqrt(unsigned int a1)
{
  int v1; // r8d
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ecx
  unsigned int v6; // ecx

  v1 = 0;
  v2 = 0;
  if ( (a1 & 0x80000000) != 0 )
    return 0x80000000LL;
  if ( a1 >= 0x40000000 )
  {
    a1 -= 0x40000000;
    v2 = 0x40000000;
  }
  v3 = 0x10000000;
  do
  {
    if ( a1 >= v3 + v2 )
    {
      a1 -= v3 + v2;
      v2 += 2 * v3;
    }
    a1 *= 2;
    v3 >>= 1;
  }
  while ( v3 );
  if ( a1 > v2 )
  {
    v6 = a1 - v2++;
    v4 = 2 * v6 - 1;
  }
  else
  {
    v4 = 2 * a1;
  }
  LOBYTE(v1) = v4 > v2;
  return v1 + v2;
}
