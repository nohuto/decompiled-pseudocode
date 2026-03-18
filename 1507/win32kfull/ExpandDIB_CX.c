/*
 * XREFs of ExpandDIB_CX @ 0x1C0254D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall ExpandDIB_CX(__int128 *a1, __int16 *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int16 v9; // r8
  char v10; // r11
  __int64 v11; // r10
  char v12; // al
  __int64 v13; // r10
  int v14; // r9d
  int v15; // edx
  __int64 v16; // r8
  __int128 v17; // xmm0
  unsigned __int8 v18; // di
  __int16 v19; // ax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int16 v23; // r11
  char v24; // al
  __int64 v25; // r8
  _BYTE *v26; // rcx
  __int64 *v27; // rdi
  _BYTE *v28; // r14
  __int64 v29; // rax
  unsigned __int16 v30; // r11
  __int128 v31; // xmm0
  unsigned __int8 v32; // dl
  __int16 v33; // ax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // edx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // [rsp+0h] [rbp-100h]
  __int128 v41; // [rsp+10h] [rbp-F0h]
  __int128 v42; // [rsp+30h] [rbp-D0h]
  _BYTE v43[21]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v44; // [rsp+115h] [rbp+15h]
  char v45; // [rsp+117h] [rbp+17h]

  v41 = *a1;
  memset(v43, 0, sizeof(v43));
  v42 = a1[2];
  result = 0LL;
  v44 = 0;
  v45 = 0;
  if ( a2 )
  {
    v8 = (__int64)&a2[(int)v41 + 3] + (int)v41;
    *(_WORD *)(v8 - 6) = *(_WORD *)(v8 - 9);
    *(_BYTE *)(v8 - 4) = *(_BYTE *)(v8 - 7);
    *(_WORD *)(v8 - 3) = *(_WORD *)(v8 - 6);
    *(_BYTE *)(v8 - 1) = *(_BYTE *)(v8 - 4);
    *(_WORD *)v8 = *(_WORD *)(v8 - 3);
    *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 - 1);
    v9 = *a2;
    v10 = *((_BYTE *)a2 + 2);
    *(_WORD *)&v43[15] = *a2;
    v43[17] = v10;
    v11 = (__int64)&a2[BYTE8(v41) & 1] + (BYTE8(v41) & 1);
    *(_WORD *)&v43[18] = *(_WORD *)v11;
    v12 = *(_BYTE *)(v11 + 2);
    v13 = v11 + 3;
    v43[20] = v12;
    v14 = WORD6(v41) >> 4;
    v15 = BYTE12(v41) & 0xF;
    if ( !v15 && v14 )
    {
      --v14;
      *(_WORD *)&v43[18] = v9;
      v13 -= 3LL;
      v43[20] = v10;
      v15 = 1;
    }
    v16 = (unsigned int)(4 - v15);
    while ( v15 )
    {
      --v15;
      v17 = *(_OWORD *)&v43[3];
      v18 = *(_BYTE *)(v13 + 2);
      *(_WORD *)&v43[16] = *(_WORD *)&v43[19];
      v19 = *(_WORD *)v13;
      v13 += 3LL;
      *(_WORD *)&v43[18] = v19;
      v43[20] = v18;
      *(_OWORD *)v43 = v17;
      if ( (BYTE8(v41) & 4) != 0 )
      {
        *(_WORD *)&v43[9] = *(_WORD *)&v43[15];
        v43[11] = v43[17];
      }
      else
      {
        v20 = (6 * v43[15] - v43[18] - v43[12]) >> 2;
        if ( (v20 & 0xFF00) != 0 )
          LOBYTE(v20) = ~HIBYTE(v20);
        v43[9] = v20;
        v21 = (6 * v43[16] - v43[19] - v43[13]) >> 2;
        if ( (v21 & 0xFF00) != 0 )
          LOBYTE(v21) = ~HIBYTE(v21);
        v43[10] = v21;
        v22 = (6 * v43[17] - v18 - v43[14]) >> 2;
        if ( (v22 & 0xFF00) != 0 )
          LOBYTE(v22) = ~HIBYTE(v22);
        v43[11] = v22;
      }
    }
    v23 = *(_WORD *)&v43[2 * v16 + (unsigned int)v16];
    v44 = v23;
    v24 = v43[2 * v16 + 2 + (unsigned int)v16];
    v25 = (unsigned int)(v16 - 1);
    v45 = v24;
    if ( v14 )
    {
      while ( 1 )
      {
        v26 = &v43[(unsigned int)v25];
        *(_WORD *)&v26[2 * v25] = v23;
        v26[2 * v25 + 2] = v45;
        v25 = (unsigned int)(v25 - 1);
        if ( !--v14 )
          break;
        v23 = v44;
      }
    }
    v27 = (__int64 *)*((_QWORD *)&v42 + 1);
    v28 = (_BYTE *)(a5 + a4);
    do
    {
      v29 = *v27++;
      v30 = v29;
      v40 = v29;
      if ( (v29 & 0x8000u) != 0LL )
      {
        v31 = *(_OWORD *)&v43[3];
        v32 = *(_BYTE *)(v13 + 2);
        *(_WORD *)&v43[16] = *(_WORD *)&v43[19];
        v33 = *(_WORD *)v13;
        v13 += 3LL;
        *(_OWORD *)v43 = v31;
        *(_WORD *)&v43[18] = v33;
        v43[20] = v32;
        if ( (BYTE8(v41) & 4) != 0 )
        {
          *(_WORD *)&v43[9] = *(_WORD *)&v43[15];
          v43[11] = v43[17];
        }
        else
        {
          v34 = (6 * v43[15] - v43[18] - v43[12]) >> 2;
          if ( (v34 & 0xFF00) != 0 )
            LOBYTE(v34) = ~HIBYTE(v34);
          v43[9] = v34;
          v35 = (6 * v43[16] - v43[19] - v43[13]) >> 2;
          if ( (v35 & 0xFF00) != 0 )
            LOBYTE(v35) = ~HIBYTE(v35);
          v43[10] = v35;
          v36 = (6 * v43[17] - v32 - v43[14]) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          v43[11] = v36;
        }
        v30 &= 0x3FFFu;
      }
      v37 = HIWORD(v40) * v43[11];
      v38 = HIWORD(v40) * v43[10];
      v39 = HIWORD(v40) * v43[9];
      if ( WORD2(v40) )
      {
        v37 += WORD2(v40) * v43[8];
        v38 += WORD2(v40) * v43[7];
        v39 += WORD2(v40) * v43[6];
        if ( WORD1(v40) )
        {
          v37 += WORD1(v40) * v43[5];
          v38 += WORD1(v40) * v43[4];
          v39 += WORD1(v40) * v43[3];
          if ( v30 )
          {
            v37 += v30 * v43[2];
            v38 += v30 * v43[1];
            v39 += v30 * v43[0];
          }
        }
      }
      a3[2] = (unsigned int)(v37 + 4096) >> 13;
      a3[1] = (unsigned int)(v38 + 4096) >> 13;
      result = (unsigned int)(v39 + 4096) >> 13;
      *a3 = result;
      a3 += a5;
    }
    while ( a3 != v28 );
  }
  return result;
}
