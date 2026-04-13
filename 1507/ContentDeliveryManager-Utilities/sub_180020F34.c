/*
 * XREFs of sub_180020F34 @ 0x180020F34
 * Callers:
 *     sub_180002E90 @ 0x180002E90 (sub_180002E90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180020F34(int a1)
{
  _QWORD *v1; // rax

  v1 = &unk_18002A090;
  if ( !"permission denied" )
    return 0LL;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( !v1[1] )
      return 0LL;
  }
  return v1[1];
}
