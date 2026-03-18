/*
 * XREFs of mth_max_abs @ 0x1C00A32F4
 * Callers:
 *     scl_InitializeScaling @ 0x1C00A2E10 (scl_InitializeScaling.c)
 *     scl_CalcComponentOffset @ 0x1C00ADBAC (scl_CalcComponentOffset.c)
 *     scl_InitializeChildScaling @ 0x1C014D298 (scl_InitializeChildScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_max_abs(int a1, int a2)
{
  if ( a1 < 0 )
    a1 = -a1;
  if ( a2 < 0 )
    a2 = -a2;
  if ( a1 > a2 )
    return (unsigned int)a1;
  return (unsigned int)a2;
}
