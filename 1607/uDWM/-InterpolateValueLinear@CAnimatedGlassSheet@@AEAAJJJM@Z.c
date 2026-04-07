/*
 * XREFs of ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x180083C94
 * Callers:
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x180084208 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedGlassSheet::InterpolateValueLinear(CAnimatedGlassSheet *this, int a2, int a3, float a4)
{
  unsigned int v4; // ecx
  int v5; // eax

  if ( a2 != a3 )
  {
    v4 = a2;
    v5 = (int)(float)((float)((float)(1.0 - a4) * (float)a2) + (float)((float)a3 * a4));
    if ( a3 < a2 )
    {
      v4 = a3;
      a3 = a2;
    }
    if ( v5 > (int)v4 )
    {
      if ( v5 >= a3 )
        return (unsigned int)a3;
      return (unsigned int)v5;
    }
    else
    {
      return v4;
    }
  }
  return (unsigned int)a3;
}
