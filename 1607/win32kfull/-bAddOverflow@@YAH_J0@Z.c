/*
 * XREFs of ?bAddOverflow@@YAH_J0@Z @ 0x1C00054E0
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0003FA0 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bAddOverflow(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( (a2 ^ a1) >= 0 && (a2 < 0 ? a1 < (__int64)(0x8000000000000000uLL - a2) : 0x7FFFFFFFFFFFFFFFLL - a1 < a2) )
    return 1;
  return result;
}
