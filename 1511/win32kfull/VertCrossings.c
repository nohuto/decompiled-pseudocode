/*
 * XREFs of VertCrossings @ 0x1C00A7304
 * Callers:
 *     DoVertDropout @ 0x1C00A7098 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C0104D54 (DoHorizDropout.c)
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

  if ( a1 >= dword_1C0323C0C || a1 < dword_1C0323C08 )
    return 0LL;
  v3 = 0;
  v4 = a1 - dword_1C0323C08;
  v5 = *(_WORD **)(qword_1C0323C78 + 8LL * v4);
  v6 = *(_WORD **)(qword_1C0323C80 + 8LL * v4);
  v7 = *(_QWORD *)(qword_1C0323C88 + 8LL * v4);
  if ( (unsigned __int64)v5 < v7 )
  {
    v8 = 2LL * (__int16)dword_1C0323D12;
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
