/*
 * XREFs of eFraction @ 0x1C007BF80
 * Callers:
 *     efSin @ 0x1C007ACC0 (efSin.c)
 * Callees:
 *     <none>
 */

double __fastcall eFraction(double result)
{
  double v1; // xmm1_8
  int v2; // ecx

  HIDWORD(v1) = HIDWORD(result);
  v2 = (unsigned __int8)(SLODWORD(result) >> 23) - 127;
  if ( v2 >= 0 )
  {
    if ( v2 >= 23 )
    {
      return 0.0;
    }
    else
    {
      *(float *)&v1 = *(float *)&result - (float)((LODWORD(result) & 0x7FFFFF | 0x800000) >> (23 - v2));
      return v1;
    }
  }
  return result;
}
