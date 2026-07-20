/*
 * XREFs of sub_1400091A4 @ 0x1400091A4
 * Callers:
 *     sub_140009228 @ 0x140009228 (sub_140009228.c)
 * Callees:
 *     sub_140008F84 @ 0x140008F84 (sub_140008F84.c)
 */

__int64 __fastcall sub_1400091A4(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  int v5; // r8d
  __int64 v6; // rdx

  v2 = (__int64 *)qword_140020430;
  v5 = -1073741772;
  while ( v2 != &qword_140020430 )
  {
    v6 = (__int64)v2;
    v2 = (__int64 *)*v2;
    if ( (*(_BYTE *)(a1 + 92) & 4) != 0
       ? (*(_BYTE *)(v6 + 16) & 0x12) == 0
       : *(_WORD *)(v6 + 24) == *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
    {
      v5 = sub_140008F84(a1, v6, a2);
      if ( v5 >= 0 )
        break;
    }
  }
  return (unsigned int)v5;
}
