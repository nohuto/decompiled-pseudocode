/*
 * XREFs of QDiv2 @ 0x1C00B9658
 * Callers:
 *     FQuadraticEqn @ 0x1C00B9580 (FQuadraticEqn.c)
 *     CurveTransitionsSegment @ 0x1C00BA034 (CurveTransitionsSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QDiv2(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = a2;
  if ( a1 < 0 == a2 < 0 )
  {
    if ( a1 < 0 )
    {
      a1 = -a1;
      v2 = -a2;
    }
    if ( a1 < v2 )
    {
      return 1LL;
    }
    else if ( a1 > v2 << 16 )
    {
      return 65537LL;
    }
    else
    {
      return (a1 + (v2 >> 1)) / v2;
    }
  }
  else
  {
    if ( a1 < 0 )
      a1 = -a1;
    else
      v2 = -a2;
    if ( a1 < v2 )
    {
      return -1LL;
    }
    else if ( a1 <= v2 << 16 )
    {
      return -((a1 + (v2 >> 1)) / v2);
    }
    else
    {
      return -65537LL;
    }
  }
}
