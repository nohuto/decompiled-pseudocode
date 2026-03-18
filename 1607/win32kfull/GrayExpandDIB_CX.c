/*
 * XREFs of GrayExpandDIB_CX @ 0x1C0254050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrayExpandDIB_CX(__int128 *a1, char *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int128 v7; // xmm0
  __int64 result; // rax
  char v9; // al
  char v10; // cl
  char *v11; // rdx
  char v12; // al
  unsigned __int8 *v13; // rdx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r10
  unsigned __int8 v17; // bl
  int v18; // ecx
  char v19; // cl
  __int64 v20; // r10
  __int64 *v21; // r10
  _BYTE *v22; // r14
  __int64 v23; // rax
  unsigned __int16 v24; // r9
  unsigned __int8 v25; // r8
  int v26; // ecx
  int v27; // r8d
  __int128 v28; // [rsp+10h] [rbp-F0h]
  _BYTE v29[7]; // [rsp+100h] [rbp+0h] BYREF
  char v30; // [rsp+107h] [rbp+7h]

  v28 = *a1;
  v7 = a1[2];
  memset(v29, 0, sizeof(v29));
  result = 0LL;
  v30 = 0;
  if ( a2 )
  {
    v9 = a2[(int)v28 - 1];
    a2[(int)v28] = v9;
    a2[(int)v28 + 1] = v9;
    a2[(int)v28 + 2] = v9;
    v10 = *a2;
    v11 = &a2[BYTE8(v28) & 1];
    v29[5] = v10;
    v12 = *v11;
    v13 = (unsigned __int8 *)(v11 + 1);
    v29[6] = v12;
    v14 = WORD6(v28) >> 4;
    v15 = BYTE12(v28) & 0xF;
    if ( !v15 && v14 )
    {
      --v14;
      v29[6] = v10;
      --v13;
      v15 = 1;
    }
    v16 = (unsigned int)(4 - v15);
    while ( v15 )
    {
      --v15;
      v17 = *v13++;
      *(_DWORD *)v29 = *(_DWORD *)&v29[1];
      *(_WORD *)&v29[4] = *(_WORD *)&v29[5];
      v29[6] = v17;
      if ( (BYTE8(v28) & 4) != 0 )
      {
        v29[3] = v29[5];
      }
      else
      {
        v18 = (6 * v29[5] - v29[4] - v17) >> 2;
        if ( (v18 & 0xFF00) != 0 )
          LOBYTE(v18) = ~HIBYTE(v18);
        v29[3] = v18;
      }
    }
    v19 = v29[v16];
    v20 = (unsigned int)(v16 - 1);
    v30 = v19;
    if ( v14 )
    {
      while ( 1 )
      {
        v29[v20] = v19;
        v20 = (unsigned int)(v20 - 1);
        if ( !--v14 )
          break;
        v19 = v30;
      }
    }
    v21 = (__int64 *)*((_QWORD *)&v7 + 1);
    v22 = (_BYTE *)(a5 + a4);
    do
    {
      v23 = *v21++;
      v24 = v23;
      if ( (v23 & 0x8000u) != 0LL )
      {
        v25 = *v13++;
        *(_DWORD *)v29 = *(_DWORD *)&v29[1];
        *(_WORD *)&v29[4] = *(_WORD *)&v29[5];
        v29[6] = v25;
        if ( (BYTE8(v28) & 4) != 0 )
        {
          v29[3] = v29[5];
        }
        else
        {
          v26 = (6 * v29[5] - v29[4] - v25) >> 2;
          if ( (v26 & 0xFF00) != 0 )
            LOBYTE(v26) = ~HIBYTE(v26);
          v29[3] = v26;
        }
        v24 = v23 & 0x3FFF;
      }
      v27 = v29[3] * HIWORD(v23);
      if ( WORD2(v23) )
      {
        v27 += WORD2(v23) * v29[2];
        if ( WORD1(v23) )
        {
          v27 += WORD1(v23) * v29[1];
          if ( v24 )
            v27 += v29[0] * v24;
        }
      }
      result = (unsigned int)(v27 + 4096) >> 13;
      *a3 = result;
      a3 += a5;
    }
    while ( a3 != v22 );
  }
  return result;
}
