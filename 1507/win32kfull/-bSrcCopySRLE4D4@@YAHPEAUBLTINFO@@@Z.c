/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02C7400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  int v2; // r13d
  int v3; // r12d
  char *v4; // r11
  __int64 v5; // rdi
  int v6; // r15d
  int v7; // ebp
  int v8; // r8d
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // r9
  unsigned int v16; // r15d
  unsigned int v17; // edx
  unsigned __int8 *v18; // r11
  unsigned int v19; // r14d
  unsigned int v20; // r15d
  BOOL v21; // edx
  unsigned int v22; // ecx
  char v23; // al
  char v24; // cl
  unsigned int v25; // r13d
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // cl
  __int64 v29; // rsi
  unsigned int v30; // r14d
  char v31; // r9
  unsigned __int64 v32; // rax
  char v33; // cl
  unsigned __int64 v34; // rax
  unsigned int v35; // r14d
  unsigned __int64 v36; // rax
  unsigned int v37; // edx
  int v38; // eax
  unsigned __int8 *v39; // r11
  int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  int v44; // r13d
  __int64 v45; // rcx
  char v46; // r14
  char v47; // r12
  __int64 v48; // rax
  char v49; // cl
  char v50; // r14
  char v51; // r14
  unsigned int v52; // r8d
  unsigned int i; // edx
  __int64 v54; // rax
  int v55; // [rsp+0h] [rbp-78h]
  __int64 v56; // [rsp+8h] [rbp-70h]
  int v57; // [rsp+10h] [rbp-68h]
  int v58; // [rsp+14h] [rbp-64h]
  int v59; // [rsp+18h] [rbp-60h]
  int v60; // [rsp+1Ch] [rbp-5Ch]
  int v61; // [rsp+24h] [rbp-54h]
  __int64 v62; // [rsp+28h] [rbp-50h]
  int v63; // [rsp+80h] [rbp+8h]
  unsigned int v64; // [rsp+88h] [rbp+10h]
  unsigned int v65; // [rsp+90h] [rbp+18h]
  unsigned int v66; // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 32);
  v57 = *((_DWORD *)a1 + 11);
  v61 = v2;
  v55 = v3;
  v59 = *((_DWORD *)a1 + 14);
  v66 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v58 = *((_DWORD *)a1 + 23);
  v56 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 25);
  v63 = v9;
  if ( v7 < v58 )
    return 1LL;
  v11 = (unsigned int)v2 >> 1;
  v12 = (unsigned int)(v3 - 1) >> 1;
  v65 = (unsigned int)v2 >> 1;
  v64 = v12;
  v13 = (unsigned int)(v8 >> 1);
  v60 = v3 & 1;
  if ( v7 >= v9 )
  {
    v15 = v9;
  }
  else
  {
    if ( (unsigned int)v13 < v11 )
    {
      v14 = v11;
    }
    else
    {
      v14 = v12;
      if ( (unsigned int)v13 <= v12 )
        v14 = (unsigned int)v13;
    }
    v15 = *(_BYTE *)(v14 + v5);
    v9 = v63;
  }
  v16 = v6 + 2;
  if ( v16 <= v66 )
  {
    v62 = v3 & 1;
    while ( 1 )
    {
      v17 = (unsigned __int8)*v4;
      v18 = (unsigned __int8 *)(v4 + 1);
      v19 = *v18;
      v4 = (char *)(v18 + 1);
      if ( v17 )
      {
        if ( v7 < v9 && v8 < v3 )
        {
          if ( (int)(v17 + v8) > v2 )
          {
            if ( v8 < v2 )
            {
              LODWORD(v13) = v11;
              v43 = v2 - v8;
              v8 = v2;
              v17 -= v43;
            }
            if ( (int)(v17 + v8) <= v3 )
            {
              v44 = 0;
            }
            else
            {
              v44 = v8 + v17 - v3;
              v17 = v3 - v8;
            }
            v45 = v19 & 0xF;
            v46 = *(_BYTE *)(v56 + 4LL * ((unsigned __int8)v19 >> 4));
            v47 = *(_BYTE *)(v56 + 4 * v45);
            if ( (v8 & 1) != 0 )
            {
              v48 = (unsigned int)v13;
              v49 = v15 ^ v46;
              v50 = v47 ^ v46;
              LODWORD(v13) = v13 + 1;
              ++v8;
              --v17;
              *(_BYTE *)(v48 + v5) = v15 ^ v49 & 0xF;
              v47 ^= v50;
              v46 = v47 ^ v50;
            }
            v51 = 16 * v46;
            v52 = v17 + v8;
            v15 = v51 | v47 & 0xF;
            for ( i = v17 >> 1; i; --i )
            {
              v54 = (unsigned int)v13;
              LODWORD(v13) = v13 + 1;
              *(_BYTE *)(v54 + v5) = v15;
            }
            if ( (v52 & 1) != 0 )
              v15 = v51 | v51 & 0xF | v47 & 0xF;
            v3 = v55;
            v8 = v44 + v52;
            goto LABEL_96;
          }
          v9 = v63;
        }
        v8 += v17;
        goto LABEL_67;
      }
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          if ( v7 < v63 )
          {
            if ( v8 >= v2 && v8 < v3 && (v8 & 1) != 0 )
            {
              *(_BYTE *)(v13 + v5) = v15 ^ (v15 ^ *(_BYTE *)(v13 + v5)) & 0xF;
            }
            else if ( v60 && v8 >= v3 )
            {
              *(_BYTE *)(v64 + v5) = v15 ^ (v15 ^ *(_BYTE *)(v64 + v5)) & 0xF;
            }
          }
          return 0LL;
        }
        if ( v19 != 2 )
        {
          v20 = ((v19 + 1) >> 1) + v16;
          if ( v20 > v66 )
            return 0LL;
          v21 = ((v19 + 1) & 2) != 0;
          if ( v7 >= v63 || v8 >= v3 || (int)(v19 + v8) <= v2 )
          {
            v8 += v19;
            v4 += (unsigned __int64)(v19 + 1) >> 1;
            goto LABEL_27;
          }
          if ( v8 < v2 )
          {
            v13 = v65;
            v22 = v2 - v8;
            v8 = v2;
            v19 -= v22;
            v4 += (unsigned __int64)v22 >> 1;
            if ( (v22 & 1) != 0 )
            {
              v23 = *v4++;
              v24 = *(_BYTE *)(v56 + 4LL * (v23 & 0xF));
              if ( (v2 & 1) != 0 )
              {
                v15 ^= (v15 ^ v24) & 0xF;
                *(_BYTE *)(v65 + v5) = v15;
                v13 = v65 + 1;
              }
              else
              {
                v15 = v15 & 0xF | (16 * v24);
              }
              v8 = v2 + 1;
              if ( !--v19 )
              {
LABEL_27:
                v16 = v21 + v20;
                v4 += v21;
LABEL_96:
                v9 = v63;
                goto LABEL_67;
              }
            }
          }
          if ( (int)(v19 + v8) <= v3 )
          {
            v25 = 0;
          }
          else
          {
            v25 = v8 + v19 - v3;
            v19 = v3 - v8;
          }
          if ( v19 )
          {
            if ( (v8 & 1) != 0 )
            {
              v8 += v19;
              v26 = (unsigned __int64)(unsigned __int8)*v4 >> 4;
              v27 = *v4++ & 0xF;
              v15 ^= (v15 ^ *(_BYTE *)(v56 + 4 * v26)) & 0xF;
              v28 = *(_BYTE *)(v56 + 4 * v27);
              *(_BYTE *)(v13 + v5) = v15;
              v29 = (unsigned int)(v13 + 1);
              v30 = (v19 - 1) >> 1;
              if ( v30 )
              {
                do
                {
                  v31 = v15 & 0xF | (16 * v28);
                  v32 = (unsigned __int8)*v4;
                  v33 = *v4++;
                  v28 = *(_BYTE *)(v56 + 4LL * (v33 & 0xF));
                  v15 = (v31 ^ *(_BYTE *)(v56 + 4 * (v32 >> 4))) & 0xF ^ v31;
                  *(_BYTE *)(v29 + v5) = v15;
                  v29 = (unsigned int)(v29 + 1);
                  --v30;
                }
                while ( v30 );
                v3 = v55;
              }
              if ( (v8 & 1) != 0 )
              {
                v15 = v15 & 0xF | (16 * v28);
                goto LABEL_38;
              }
              v34 = (unsigned __int64)v25 >> 1;
LABEL_46:
              v4 += v34;
LABEL_39:
              v8 += v25;
              goto LABEL_27;
            }
            v8 += v19;
            v35 = v19 >> 1;
            if ( v35 )
            {
              do
              {
                v36 = (unsigned __int8)*v4++;
                v15 = (16 * *(_BYTE *)(v56 + 4 * (v36 >> 4))) | *(_BYTE *)(v56 + 4 * (v36 & 0xF)) & 0xF;
                *(_BYTE *)(v13 + v5) = v15;
                v13 = (unsigned int)(v13 + 1);
                --v35;
              }
              while ( v35 );
              v3 = v55;
            }
            if ( (v8 & 1) != 0 )
            {
              v15 = v15 & 0xF | (16 * *(_BYTE *)(v56 + 4 * ((unsigned __int64)(unsigned __int8)*v4 >> 4)));
              v34 = (unsigned __int64)v25 >> 1;
              ++v4;
              goto LABEL_46;
            }
          }
LABEL_38:
          v4 += (unsigned __int64)(v25 + 1) >> 1;
          goto LABEL_39;
        }
        if ( v7 >= v63 )
          goto LABEL_53;
        if ( v8 >= v2 && v8 < v3 && (v8 & 1) != 0 )
        {
          v15 ^= (v15 ^ *(_BYTE *)(v13 + v5)) & 0xF;
          *(_BYTE *)(v13 + v5) = v15;
          goto LABEL_53;
        }
        if ( v62 && v8 >= v3 )
        {
          v37 = v64;
          v15 ^= (v15 ^ *(_BYTE *)(v64 + v5)) & 0xF;
          *(_BYTE *)(v64 + v5) = v15;
        }
        else
        {
LABEL_53:
          v37 = v64;
        }
        v16 += 2;
        if ( v16 > v66 )
          return 0LL;
        v38 = (unsigned __int8)*v4;
        v39 = (unsigned __int8 *)(v4 + 1);
        v8 += v38;
        v40 = *v39;
        v4 = (char *)(v39 + 1);
        v7 -= v40;
        v5 += v57 * v40;
        if ( v7 < v58 )
        {
          *((_DWORD *)a1 + 34) = v8;
LABEL_110:
          result = 1LL;
          *((_DWORD *)a1 + 33) = v7;
          *((_QWORD *)a1 + 14) = v5;
          *((_QWORD *)a1 + 13) = v4;
          *((_DWORD *)a1 + 31) = v16;
          return result;
        }
        v41 = v8 >> 1;
        if ( v7 < v63 )
        {
          if ( v41 < v65 )
          {
            v42 = v65;
          }
          else
          {
            v42 = v37;
            if ( v41 <= v37 )
              v42 = v8 >> 1;
          }
          v15 = *(_BYTE *)(v42 + v5);
        }
        v9 = v63;
        goto LABEL_67;
      }
      v9 = v63;
      if ( v7 < v63 )
      {
        if ( v8 >= v2 && v8 < v3 && (v8 & 1) != 0 )
        {
          v15 ^= (v15 ^ *(_BYTE *)(v13 + v5)) & 0xF;
          *(_BYTE *)(v13 + v5) = v15;
LABEL_77:
          v9 = v63;
          v11 = v65;
          goto LABEL_78;
        }
        if ( v62 && v8 >= v3 )
        {
          v15 ^= (v15 ^ *(_BYTE *)(v64 + v5)) & 0xF;
          *(_BYTE *)(v64 + v5) = v15;
          goto LABEL_77;
        }
      }
LABEL_78:
      --v7;
      v5 += v57;
      v8 = v59;
      if ( v7 < v58 )
      {
        *((_DWORD *)a1 + 34) = v59;
        goto LABEL_110;
      }
      if ( v7 < v9 )
      {
        v15 = *(_BYTE *)(v11 + v5);
        goto LABEL_96;
      }
LABEL_67:
      v16 += 2;
      v13 = (unsigned int)(v8 >> 1);
      if ( v16 > v66 )
        return 0LL;
      v2 = v61;
      v11 = v65;
    }
  }
  return 0LL;
}
