/*
 * XREFs of sub_1C00E2858 @ 0x1C00E2858
 * Callers:
 *     sub_1C00E2758 @ 0x1C00E2758 (sub_1C00E2758.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00E2858(unsigned __int16 *a1)
{
  unsigned int v2; // ecx
  unsigned __int16 v3; // dx

  v2 = 0;
  while ( 1 )
  {
    v3 = *a1;
    if ( (unsigned __int16)(*a1 - 48) > 9u && v3 != 32 )
      break;
    if ( v3 != 32 )
      v2 = v3 + 2 * (5 * v2 - 24);
    ++a1;
  }
  return v2;
}
