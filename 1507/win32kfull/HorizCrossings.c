/*
 * XREFs of HorizCrossings @ 0x1C00AEA20
 * Callers:
 *     DoVertDropout @ 0x1C00AE834 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C00FF94C (DoHorizDropout.c)
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

  if ( a2 >= dword_1C0322EFC || a2 < dword_1C0322F00 )
    return 0LL;
  v3 = 0;
  v4 = a2 - dword_1C0322F00;
  v5 = *(_WORD **)(qword_1C0322F18 + 8LL * v4);
  v6 = *(_WORD **)(qword_1C0322F20 + 8LL * v4);
  v7 = *(_QWORD *)(qword_1C0322F28 + 8LL * v4);
  if ( (unsigned __int64)v5 < v7 )
  {
    v8 = 2LL * (__int16)dword_1C0322FF2;
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
