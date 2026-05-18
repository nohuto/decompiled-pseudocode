/*
 * XREFs of sub_180003B00 @ 0x180003B00
 * Callers:
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180003B00(int a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // eax

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( a1 != *a2 )
  {
    ++v3;
    ++a2;
    if ( v3 >= a3 )
      return 0;
  }
  return 1;
}
