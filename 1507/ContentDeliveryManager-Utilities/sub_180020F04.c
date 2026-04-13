/*
 * XREFs of sub_180020F04 @ 0x180020F04
 * Callers:
 *     sub_180002DB0 @ 0x180002DB0 (sub_180002DB0.c)
 *     sub_180002F00 @ 0x180002F00 (sub_180002F00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180020F04(int a1)
{
  const char *v1; // rax

  v1 = "f";
  if ( !"address family not supported" )
    return 0LL;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 16;
    if ( !*((_QWORD *)v1 + 1) )
      return 0LL;
  }
  return *((_QWORD *)v1 + 1);
}
