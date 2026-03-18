/*
 * XREFs of ?bSubOverflow@@YAH_J0@Z @ 0x1C00C876C
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C00C7478 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSubOverflow(__int64 a1, __int64 a2)
{
  if ( (a2 ^ a1) >= 0 )
    return 0LL;
  if ( a1 >= 0 )
    return a1 > a2 + 0x7FFFFFFFFFFFFFFFLL;
  return a1 < (__int64)(a2 + 0x8000000000000000uLL);
}
