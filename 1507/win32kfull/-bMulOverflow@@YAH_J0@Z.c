/*
 * XREFs of ?bMulOverflow@@YAH_J0@Z @ 0x1C00C86E4
 * Callers:
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C00C7478 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bMulOverflow(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = a2;
  if ( !a1 || !a2 )
    return 0LL;
  if ( (a2 ^ a1) < 0 )
  {
    if ( a1 >= 0 )
      return a2 < (__int64)0x8000000000000000uLL / a1;
    else
      return a1 < (__int64)0x8000000000000000uLL / a2;
  }
  else
  {
    if ( a1 <= 0 )
    {
      if ( a1 == 0x8000000000000000uLL || a2 == 0x8000000000000000uLL )
        return 1LL;
      v3 = (__int64)0x8000000000000001uLL / a1;
      v2 = -a2;
    }
    else
    {
      v3 = 0x7FFFFFFFFFFFFFFFLL / a1;
    }
    return v3 < v2;
  }
}
