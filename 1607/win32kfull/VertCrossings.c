/*
 * XREFs of VertCrossings @ 0x1C00BF198
 * Callers:
 *     DoHorizDropout @ 0x1C00BD3C4 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C00BEF34 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertCrossings(int a1, __int16 a2)
{
  unsigned int v3; // r8d
  int v4; // ecx
  _WORD *v5; // rdx
  _WORD *v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rax

  if ( a1 >= dword_1C032930C || a1 < dword_1C0329308 )
    return 0LL;
  v3 = 0;
  v4 = a1 - dword_1C0329308;
  v5 = *(_WORD **)(qword_1C0329378 + 8LL * v4);
  v6 = *(_WORD **)(qword_1C0329380 + 8LL * v4);
  v7 = *(_QWORD *)(qword_1C0329388 + 8LL * v4);
  if ( (unsigned __int64)v5 < v7 )
  {
    v8 = 2LL * (__int16)dword_1C0329412;
    do
    {
      if ( *v5 == a2 )
        ++v3;
      v5 = (_WORD *)((char *)v5 + v8);
      if ( *v6 == a2 )
        ++v3;
      v6 = (_WORD *)((char *)v6 + v8);
    }
    while ( (unsigned __int64)v5 < v7 );
  }
  return v3;
}
