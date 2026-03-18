/*
 * XREFs of vEfToLfx @ 0x1C02456E4
 * Callers:
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C024563C (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall vEfToLfx(int *a1, __int64 *a2)
{
  __int64 v2; // r8
  char result; // al
  __int64 v4; // r8

  v2 = *a1 & 0x7FFFFF | 0x800000LL;
  result = (*a1 >> 23) - 118;
  if ( result < 0 )
    v4 = v2 >> (118 - (unsigned __int8)(*a1 >> 23));
  else
    v4 = v2 << result;
  if ( *a1 < 0 )
    v4 = -v4;
  *a2 = v4;
  return result;
}
