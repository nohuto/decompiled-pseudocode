/*
 * XREFs of HorizCrossings @ 0x1C00BF120
 * Callers:
 *     DoHorizDropout @ 0x1C00BD3C4 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C00BEF34 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HorizCrossings(__int16 a1, int a2)
{
  unsigned int v3; // r8d
  int v4; // edx
  _WORD *v5; // rcx
  _WORD *v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rax

  if ( a2 >= dword_1C032931C || a2 < dword_1C0329320 )
    return 0LL;
  v3 = 0;
  v4 = a2 - dword_1C0329320;
  v5 = *(_WORD **)(qword_1C0329338 + 8LL * v4);
  v6 = *(_WORD **)(qword_1C0329340 + 8LL * v4);
  v7 = *(_QWORD *)(qword_1C0329348 + 8LL * v4);
  if ( (unsigned __int64)v5 < v7 )
  {
    v8 = 2LL * (__int16)dword_1C0329412;
    do
    {
      if ( *v5 == a1 )
        ++v3;
      v5 = (_WORD *)((char *)v5 + v8);
      if ( *v6 == a1 )
        ++v3;
      v6 = (_WORD *)((char *)v6 + v8);
    }
    while ( (unsigned __int64)v5 < v7 );
  }
  return v3;
}
