/*
 * XREFs of sub_180002E90 @ 0x180002E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004A0C @ 0x180004A0C (sub_180004A0C.c)
 *     sub_180020F34 @ 0x180020F34 (sub_180020F34.c)
 */

_QWORD *__fastcall sub_180002E90(__int64 a1, _QWORD *a2, unsigned int a3)
{
  size_t v3; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  __int64 v7; // rax

  v3 = 0LL;
  v5 = sub_180020F34(a3);
  a2[3] = 15LL;
  a2[2] = 0LL;
  v6 = "unknown error";
  if ( v5 )
    v6 = (char *)v5;
  *(_BYTE *)a2 = 0;
  if ( *v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v3 = v7;
  }
  sub_180004A0C(a2, v6, v3);
  return a2;
}
