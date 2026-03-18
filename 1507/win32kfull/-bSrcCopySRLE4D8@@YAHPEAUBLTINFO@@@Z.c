/*
 * XREFs of ?bSrcCopySRLE4D8@@YAHPEAUBLTINFO@@@Z @ 0x1C02C7A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  int v2; // r15d
  int v3; // esi
  int v4; // r12d
  char *v5; // r10
  __int64 v6; // r14
  int v7; // ebp
  int v8; // r8d
  unsigned int v9; // r13d
  int v10; // eax
  int v11; // ecx
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int v14; // edx
  unsigned __int8 *v15; // r10
  unsigned int v16; // ebx
  unsigned int v17; // edi
  BOOL v18; // r15d
  unsigned int v19; // ecx
  char v20; // al
  unsigned int v21; // esi
  int v22; // r12d
  unsigned int v23; // ebx
  __int64 v24; // rax
  _BYTE *v25; // r13
  unsigned __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rcx
  unsigned __int64 v29; // r10
  int v30; // eax
  unsigned __int8 *v31; // r10
  int v32; // ecx
  int v33; // esi
  __int64 v34; // rcx
  int v35; // r15d
  unsigned int v36; // edx
  char v37; // bl
  char v38; // r12
  _BYTE *v39; // rcx
  __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-68h]
  unsigned int v42; // [rsp+4h] [rbp-64h]
  int v43; // [rsp+8h] [rbp-60h]
  int v44; // [rsp+Ch] [rbp-5Ch]
  __int64 v45; // [rsp+10h] [rbp-58h]
  int v47; // [rsp+78h] [rbp+10h]
  int v48; // [rsp+80h] [rbp+18h]
  int v49; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 22);
  v4 = *((_DWORD *)a1 + 24);
  v5 = (char *)*((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 32);
  v48 = *((_DWORD *)a1 + 11);
  v43 = v3;
  v44 = v4;
  v49 = v2;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v42 = v9;
  v45 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v10 = *((_DWORD *)a1 + 25);
  v11 = *((_DWORD *)a1 + 14);
  v47 = v11;
  v41 = v10;
  if ( v7 < v2 )
    return 1LL;
  v13 = *((_DWORD *)v1 + 30) + 2;
  if ( v13 > v9 )
    return 0LL;
  while ( 1 )
  {
    v14 = (unsigned __int8)*v5;
    v15 = (unsigned __int8 *)(v5 + 1);
    v16 = *v15;
    v5 = (char *)(v15 + 1);
    if ( !v14 )
      break;
    if ( v7 < v10 && v8 < v4 && (int)(v14 + v8) > v3 )
    {
      if ( v8 < v3 )
      {
        v14 -= v3 - v8;
        v8 = v3;
      }
      if ( (int)(v14 + v8) <= v4 )
      {
        v33 = 0;
      }
      else
      {
        v33 = v8 + v14 - v4;
        v14 = v4 - v8;
      }
      v34 = v16 & 0xF;
      v35 = v14 & 1;
      v36 = v14 >> 1;
      v37 = *(_BYTE *)(v45 + 4LL * ((unsigned __int8)v16 >> 4));
      v38 = *(_BYTE *)(v45 + 4 * v34);
      if ( v36 )
      {
        v39 = (_BYTE *)(v8 + v6 + 1);
        v8 += 2 * v36;
        do
        {
          *(v39 - 1) = v37;
          *v39 = v38;
          v39 += 2;
          --v36;
        }
        while ( v36 );
      }
      if ( v35 )
      {
        v40 = v8++;
        *(_BYTE *)(v40 + v6) = v37;
      }
      v8 += v33;
      goto LABEL_48;
    }
    v8 += v14;
LABEL_51:
    v13 += 2;
    if ( v13 > v9 )
      return 0LL;
    v3 = v43;
    v4 = v44;
    v10 = v41;
  }
  if ( v16 )
  {
    if ( v16 == 1 )
      return 0LL;
    if ( v16 == 2 )
    {
      v13 += 2;
      if ( v13 > v9 )
        return 0LL;
      v30 = (unsigned __int8)*v5;
      v31 = (unsigned __int8 *)(v5 + 1);
      v8 += v30;
      v32 = *v31;
      v5 = (char *)(v31 + 1);
      v7 -= v32;
      v6 += v48 * v32;
      if ( v7 < v2 )
      {
        *((_DWORD *)v1 + 34) = v8;
        goto LABEL_33;
      }
    }
    else
    {
      v17 = ((v16 + 1) >> 1) + v13;
      if ( v17 > v9 )
        return 0LL;
      v18 = ((v16 + 1) & 2) != 0;
      if ( v7 >= v41 || v8 >= v4 || (int)(v16 + v8) <= v3 )
      {
        v8 += v16;
        v29 = (unsigned __int64)&v5[(unsigned __int64)(v16 + 1) >> 1];
      }
      else
      {
        if ( v8 < v3 )
        {
          v19 = v3 - v8;
          v16 -= v3 - v8;
          v8 = v3;
          v5 += (unsigned __int64)v19 >> 1;
          if ( (v19 & 1) != 0 )
          {
            v20 = *v5++;
            v8 = v3 + 1;
            --v16;
            *(_BYTE *)(v3 + v6) = *(_BYTE *)(v45 + 4LL * (v20 & 0xF));
          }
        }
        if ( (int)(v16 + v8) <= v4 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v8 + v16 - v4;
          v16 = v4 - v8;
        }
        v22 = v16 & 1;
        v23 = v16 >> 1;
        if ( v23 )
        {
          v24 = v8;
          v8 += 2 * v23;
          v25 = (_BYTE *)(v24 + v6 + 1);
          do
          {
            v26 = (unsigned __int8)*v5++;
            v27 = *(_BYTE *)(v45 + 4 * (v26 >> 4));
            *v25 = *(_BYTE *)(v45 + 4 * (v26 & 0xF));
            *(v25 - 1) = v27;
            v25 += 2;
            --v23;
          }
          while ( v23 );
          v1 = a1;
          v9 = v42;
        }
        if ( v22 )
        {
          v28 = v8++;
          *(_BYTE *)(v28 + v6) = *(_BYTE *)(v45 + 4 * ((unsigned __int64)(unsigned __int8)*v5 >> 4));
          v29 = (unsigned __int64)&v5[((unsigned __int64)v21 >> 1) + 1];
        }
        else
        {
          v29 = (unsigned __int64)&v5[(unsigned __int64)(v21 + 1) >> 1];
        }
        v8 += v21;
      }
      v13 = v18 + v17;
      v5 = (char *)(v18 + v29);
LABEL_48:
      v2 = v49;
    }
    v11 = v47;
    goto LABEL_51;
  }
  --v7;
  v6 += v48;
  v8 = v11;
  if ( v7 >= v2 )
    goto LABEL_51;
  *((_DWORD *)v1 + 34) = v11;
LABEL_33:
  result = 1LL;
  *((_DWORD *)v1 + 33) = v7;
  *((_QWORD *)v1 + 14) = v6;
  *((_QWORD *)v1 + 13) = v5;
  *((_DWORD *)v1 + 31) = v13;
  return result;
}
