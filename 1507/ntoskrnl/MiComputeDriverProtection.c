/*
 * XREFs of MiComputeDriverProtection @ 0x140597764
 * Callers:
 *     MiProtectSystemImage @ 0x1405973F8 (MiProtectSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeDriverProtection(int a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (a2 & 0x20000000) != 0 )
    v2 = 2;
  if ( (a2 & 0x40000000) != 0 )
    v2 |= 1u;
  if ( a2 < 0 )
  {
    if ( a1 == 1 )
      return v2 & 2 | 5;
    if ( (v2 & 2) != 0 )
      return 6;
    v2 = 4;
  }
  if ( !v2 )
    return 24;
  return v2;
}
