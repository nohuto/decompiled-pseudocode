/*
 * XREFs of LookForDropouts @ 0x1C00AE6A0
 * Callers:
 *     fsc_FillBitMap @ 0x1C00AF2A0 (fsc_FillBitMap.c)
 * Callees:
 *     DoVertDropout @ 0x1C00AE834 (DoVertDropout.c)
 *     DoHorizDropout @ 0x1C00FF94C (DoHorizDropout.c)
 */

__int64 __fastcall LookForDropouts(int a1, char a2)
{
  int v2; // r10d
  int v3; // esi
  int v4; // r9d
  int v5; // r13d
  __int64 v6; // r8
  _WORD **v7; // r14
  _WORD **v8; // r15
  unsigned __int64 *i; // r12
  _WORD *v10; // rbx
  _WORD *v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // ebp
  int v15; // ecx
  int v16; // esi
  unsigned __int64 *v17; // r14
  _WORD **v18; // r15
  _WORD **v19; // r12
  unsigned __int64 v20; // r13
  _WORD *v21; // rbx
  _WORD *v22; // rdi
  __int64 v23; // rax
  __int64 result; // rax
  char v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v2 = dword_1C0322F04;
  v3 = 0;
  v4 = a1;
  v5 = dword_1C0322F04 - dword_1C0322F08;
  v6 = dword_1C0322F04 - dword_1C0322F00 - 1;
  v7 = (_WORD **)(qword_1C0322F18 + 8 * v6);
  v8 = (_WORD **)(qword_1C0322F20 + 8 * v6);
  for ( i = (unsigned __int64 *)(qword_1C0322F28 + 8 * v6); v3 < v5; ++v3 )
  {
    v10 = *v7--;
    v11 = *v8--;
    v12 = *i--;
    while ( (unsigned __int64)v10 < v12 )
    {
      if ( *v10 == *v11 )
      {
        result = DoHorizDropout((_DWORD)v10, (_DWORD)v11, v2 - v3 - 1, v4, a2);
        if ( (_DWORD)result )
          return result;
        v2 = dword_1C0322F04;
        a2 = v26;
        v4 = a1;
      }
      v13 = 2LL * (__int16)dword_1C0322FF2;
      v10 = (_WORD *)((char *)v10 + v13);
      v11 = (_WORD *)((char *)v11 + v13);
    }
  }
  v14 = 0;
  v15 = dword_1C0322EE8;
  v16 = dword_1C0322EEC - dword_1C0322EE8;
  v17 = (unsigned __int64 *)qword_1C0322F58;
  v18 = (_WORD **)qword_1C0322F68;
  v19 = (_WORD **)qword_1C0322F70;
  if ( dword_1C0322EEC - dword_1C0322EE8 > 0 )
  {
    while ( 1 )
    {
      v20 = *v17++;
      v21 = *v18++;
      v22 = *v19++;
      while ( 1 )
      {
        v23 = 2LL * (__int16)dword_1C0322FF2;
        v21 = (_WORD *)((char *)v21 - v23);
        v22 = (_WORD *)((char *)v22 - v23);
        if ( (unsigned __int64)v21 < v20 )
          break;
        if ( *v21 == *v22 )
        {
          result = DoVertDropout((_DWORD)v21, (_DWORD)v22, v15 + v14, v4, a2);
          if ( (_DWORD)result )
            return result;
          v15 = dword_1C0322EE8;
        }
        a2 = v26;
        v4 = a1;
      }
      if ( ++v14 >= v16 )
        break;
      a2 = v26;
      v4 = a1;
    }
  }
  return 0LL;
}
