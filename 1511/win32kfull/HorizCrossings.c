/*
 * XREFs of HorizCrossings @ 0x1C00A728C
 * Callers:
 *     DoVertDropout @ 0x1C00A7098 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C0104D54 (DoHorizDropout.c)
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

  if ( a2 >= dword_1C0323C1C || a2 < dword_1C0323C20 )
    return 0LL;
  v3 = 0;
  v4 = a2 - dword_1C0323C20;
  v5 = *(_WORD **)(qword_1C0323C38 + 8LL * v4);
  v6 = *(_WORD **)(qword_1C0323C40 + 8LL * v4);
  v7 = *(_QWORD *)(qword_1C0323C48 + 8LL * v4);
  if ( (unsigned __int64)v5 < v7 )
  {
    v8 = 2LL * (__int16)dword_1C0323D12;
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
