/*
 * XREFs of sub_180015BA0 @ 0x180015BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004A0C @ 0x180004A0C (sub_180004A0C.c)
 */

_QWORD *__fastcall sub_180015BA0(__int64 a1, _QWORD *a2)
{
  size_t v3; // r8
  char *v4; // rdx
  __int64 v5; // rax

  v3 = 0LL;
  v4 = *(char **)(a1 + 16);
  a2[3] = 15LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  if ( *v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    v3 = v5;
  }
  sub_180004A0C(a2, v4, v3);
  return a2;
}
