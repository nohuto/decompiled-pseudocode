/*
 * XREFs of ?bSrcCopySRLE8D8@@YAHPEAUBLTINFO@@@Z @ 0x1C013B2B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D8(struct BLTINFO *a1)
{
  int v2; // r10d
  int v3; // r15d
  int v4; // r9d
  unsigned int v5; // ebx
  int v6; // r11d
  unsigned __int8 *v7; // rbp
  __int64 v8; // r13
  int v9; // r12d
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // r14d
  size_t v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r15d
  int v18; // ebx
  unsigned int v19; // r14d
  int v20; // r10d
  int v21; // r8d
  _BYTE *v22; // r9
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  __int64 result; // rax
  unsigned int v26; // ecx
  int v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+24h] [rbp-64h]
  int v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 22);
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v6 = *((_DWORD *)a1 + 24);
  v7 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a1 + 15);
  v10 = *((_DWORD *)a1 + 32);
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v11 = *((_DWORD *)a1 + 25);
  v12 = *((_DWORD *)a1 + 14);
  v30 = v12;
  v33 = v3;
  v28 = v5;
  v32 = v4;
  v35 = v6;
  v29 = v2;
  v34 = v11;
  if ( v9 < v2 )
    return 1LL;
  v13 = *((_DWORD *)a1 + 30) + 2;
  if ( v13 > v5 )
    return 0LL;
  while ( 1 )
  {
    v14 = *v7;
    v15 = v7[1];
    v7 += 2;
    if ( (_DWORD)v14 )
    {
      if ( v9 >= v11 || v10 >= v6 || (int)v14 + v10 <= v4 )
      {
        v10 += v14;
      }
      else
      {
        v16 = *(_DWORD *)(v31 + 4 * v15);
        if ( v10 < v4 )
        {
          v14 = (unsigned int)(v14 - (v4 - v10));
          v10 = v4;
        }
        if ( (int)v14 + v10 > v6 )
        {
          v17 = v10 + v14 - v6;
          v14 = (unsigned int)(v6 - v10);
        }
        else
        {
          v17 = 0;
        }
        if ( (_DWORD)v14 )
        {
          v18 = v14;
          memset((void *)(v8 + v10), v16, v14);
          v4 = v32;
          v10 += v18;
          v5 = v28;
          v6 = v35;
        }
        v10 += v17;
        v3 = v33;
      }
      goto LABEL_14;
    }
    if ( !(_DWORD)v15 )
    {
      --v9;
      v8 += v3;
      v10 = v12;
      if ( v9 < v2 )
      {
        *((_DWORD *)a1 + 34) = v12;
        goto LABEL_44;
      }
      goto LABEL_14;
    }
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v19 = v15 + v13;
      if ( v19 > v5 )
        return 0LL;
      v20 = v15 & 1;
      if ( v9 >= v34 || v10 >= v6 || (int)v15 + v10 <= v4 )
      {
        v10 += v15;
        v24 = &v7[v15];
      }
      else
      {
        if ( v10 < v4 )
        {
          v26 = v4 - v10;
          v10 = v4;
          v7 += v26;
          LODWORD(v15) = v15 - v26;
        }
        if ( (int)v15 + v10 > v6 )
        {
          v21 = v10 + v15 - v6;
          LODWORD(v15) = v6 - v10;
        }
        else
        {
          v21 = 0;
        }
        if ( (_DWORD)v15 )
        {
          v22 = (_BYTE *)(v8 + v10);
          v10 += v15;
          do
          {
            v23 = *v7++;
            *v22++ = *(_BYTE *)(v31 + 4 * v23);
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
          v4 = v32;
          v3 = v33;
        }
        v24 = &v7[v21];
        v10 += v21;
      }
      v13 = v20 + v19;
      v7 = &v24[v20];
      goto LABEL_14;
    }
    v13 += 2;
    if ( v13 > v5 )
      return 0LL;
    v27 = v7[1];
    v10 += *v7;
    v7 += 2;
    v9 -= v27;
    v8 += v3 * v27;
    if ( v9 < v2 )
      break;
LABEL_14:
    v13 += 2;
    if ( v13 > v5 )
      return 0LL;
    v2 = v29;
    v12 = v30;
    v11 = v34;
  }
  *((_DWORD *)a1 + 34) = v10;
LABEL_44:
  result = 1LL;
  *((_DWORD *)a1 + 33) = v9;
  *((_QWORD *)a1 + 14) = v8;
  *((_QWORD *)a1 + 13) = v7;
  *((_DWORD *)a1 + 31) = v13;
  return result;
}
