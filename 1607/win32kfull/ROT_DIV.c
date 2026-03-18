/*
 * XREFs of ROT_DIV @ 0x1C000550C
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0003FA0 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ROT_DIV(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = a2 / a3;
  v4 = a2 % a3;
  *a1 = result;
  a1[1] = v4;
  if ( v4 < 0 )
  {
    *a1 = result - 1;
    result = v4 + a3;
    a1[1] = v4 + a3;
  }
  return result;
}
