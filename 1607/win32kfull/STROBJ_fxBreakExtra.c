/*
 * XREFs of STROBJ_fxBreakExtra @ 0x1C0280190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FIX __stdcall STROBJ_fxBreakExtra(STROBJ *pstro)
{
  if ( (pstro->flAccel & 0x1000) != 0 )
    return (FIX)pstro[2].pgp;
  else
    return 0;
}
