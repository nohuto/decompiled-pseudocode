/*
 * XREFs of ?bSrcCopySRLE8D32@@YAHPEAUBLTINFO@@@Z @ 0x1C00066F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  unsigned __int8 *v2; // r10
  __int64 v3; // r14
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // edi
  unsigned int v8; // r13d
  int v9; // r15d
  int v10; // r12d
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r11d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ebp
  int v17; // ebx
  __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 result; // rax
  unsigned int v21; // r11d
  int v22; // ebp
  unsigned int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // rax
  _DWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 *v29; // r10
  int v30; // ecx
  int v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  int v34; // [rsp+68h] [rbp+10h]
  int v35; // [rsp+70h] [rbp+18h]
  int v36; // [rsp+78h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 23);
  v5 = *((_DWORD *)a1 + 11) / 4;
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 14);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *((_DWORD *)a1 + 22);
  v10 = *((_DWORD *)a1 + 24);
  v11 = *((_DWORD *)a1 + 32);
  v35 = v5;
  v32 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v12 = *((_DWORD *)a1 + 25);
  v36 = v12;
  v31 = v4;
  v34 = v7;
  if ( v6 < v4 )
    return 1LL;
  v13 = *((_DWORD *)a1 + 30) + 2;
  if ( v13 > v8 )
    return 0LL;
  while ( 1 )
  {
    v14 = *v2;
    v15 = v2[1];
    v2 += 2;
    if ( (_DWORD)v14 )
    {
      if ( v6 < v12 && v11 < v10 && (int)v14 + v11 > v9 )
      {
        v16 = *(_DWORD *)(v32 + 4LL * (unsigned int)v15);
        if ( v11 < v9 )
        {
          v14 = (unsigned int)(v14 - (v9 - v11));
          v11 = v9;
        }
        if ( (int)v14 + v11 > v10 )
        {
          v17 = v11 + v14 - v10;
          v14 = (unsigned int)(v10 - v11);
        }
        else
        {
          v17 = 0;
        }
        if ( (_DWORD)v14 )
        {
          v18 = v11;
          v11 += v14;
          v19 = (_DWORD *)(v3 + 4 * v18);
          while ( v14 )
          {
            *v19++ = v16;
            --v14;
          }
          v7 = v34;
        }
        v11 += v17;
LABEL_17:
        v5 = v35;
        goto LABEL_18;
      }
      v11 += v14;
      goto LABEL_18;
    }
    if ( !(_DWORD)v15 )
    {
      --v6;
      v11 = v7;
      v3 += 4LL * v5;
      if ( v6 < v4 )
      {
        *((_DWORD *)v1 + 34) = v7;
        goto LABEL_48;
      }
      goto LABEL_18;
    }
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 != 2 )
    {
      v21 = v15 + v13;
      if ( v21 > v8 )
        return 0LL;
      v22 = v15 & 1;
      if ( v6 >= v36 || v11 >= v10 || (int)v15 + v11 <= v9 )
      {
        v11 += v15;
        v29 = &v2[v15];
      }
      else
      {
        if ( v11 < v9 )
        {
          v23 = v9 - v11;
          v11 = v9;
          v2 += v23;
          LODWORD(v15) = v15 - v23;
        }
        if ( (int)v15 + v11 <= v10 )
        {
          v24 = 0;
        }
        else
        {
          v24 = v11 + v15 - v10;
          LODWORD(v15) = v10 - v11;
        }
        if ( (_DWORD)v15 )
        {
          v25 = v11;
          v11 += v15;
          v26 = (_DWORD *)(v3 + 4 * v25);
          do
          {
            v27 = *v2++;
            *v26++ = *(_DWORD *)(v32 + 4 * v27);
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
          v1 = a1;
        }
        v11 += v24;
        v28 = v24;
        v7 = v34;
        v29 = &v2[v28];
      }
      v13 = v22 + v21;
      v2 = &v29[v22];
      goto LABEL_17;
    }
    v13 += 2;
    if ( v13 > v8 )
      return 0LL;
    v30 = v2[1];
    v11 += *v2;
    v2 += 2;
    v6 -= v30;
    v3 += 4LL * v5 * v30;
    if ( v6 < v4 )
      break;
LABEL_18:
    v13 += 2;
    if ( v13 > v8 )
      return 0LL;
    v4 = v31;
    v12 = v36;
  }
  *((_DWORD *)v1 + 34) = v11;
LABEL_48:
  result = 1LL;
  *((_DWORD *)v1 + 33) = v6;
  *((_QWORD *)v1 + 14) = v3;
  *((_QWORD *)v1 + 13) = v2;
  *((_DWORD *)v1 + 31) = v13;
  return result;
}
