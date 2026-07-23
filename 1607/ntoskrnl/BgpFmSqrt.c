/*
 * XREFs of BgpFmSqrt @ 0x140128C00
 * Callers:
 *     RaspTestIntersection @ 0x140128920 (RaspTestIntersection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmSqrt(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  result = 0LL;
  if ( a1 > 0 )
  {
    v3 = a1 * a2 * (unsigned __int64)a2;
    v4 = (a1 + 1) >> 1;
    if ( v4 > 0 )
    {
      do
        v4 -= result++;
      while ( v4 > result );
    }
    result *= a2;
    if ( result )
    {
      v5 = (__int64)(v3
                   + (__int64)(v3 + result * result) / (2 * result) * ((__int64)(v3 + result * result) / (2 * result)))
         / (2
          * ((__int64)(v3 + result * result)
           / (2
            * result)));
      v6 = (__int64)(v3 + (__int64)(v3 + v5 * v5) / (2 * v5) * ((__int64)(v3 + v5 * v5) / (2 * v5)))
         / (2
          * ((__int64)(v3 + v5 * v5)
           / (2
            * v5)));
      v7 = (__int64)(v3 + (__int64)(v3 + v6 * v6) / (2 * v6) * ((__int64)(v3 + v6 * v6) / (2 * v6)))
         / (2
          * ((__int64)(v3 + v6 * v6)
           / (2
            * v6)));
      return (__int64)(v3 + v7 * v7) / (2 * v7);
    }
  }
  return result;
}
