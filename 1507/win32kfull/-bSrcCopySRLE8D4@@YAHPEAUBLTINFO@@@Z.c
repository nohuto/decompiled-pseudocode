/*
 * XREFs of ?bSrcCopySRLE8D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02C5D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  unsigned __int8 *v2; // rbp
  __int64 v3; // r10
  int v4; // r12d
  int v5; // r14d
  int v6; // r15d
  int v7; // r13d
  int v8; // edx
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // rbx
  char v16; // r9
  unsigned int v17; // r12d
  unsigned int v18; // esi
  unsigned __int8 *v19; // rbp
  __int64 v20; // rdi
  int v21; // esi
  unsigned int v22; // r12d
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  unsigned int v27; // edi
  __int64 v28; // rax
  unsigned __int8 *v29; // rbp
  char v30; // r9
  __int64 v31; // rax
  unsigned __int8 *v32; // rbp
  unsigned int v33; // ebx
  int v34; // eax
  unsigned __int8 *v35; // rbp
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  int v40; // eax
  int v41; // r15d
  int v42; // edi
  unsigned int v43; // edx
  unsigned int i; // esi
  int v45; // [rsp+0h] [rbp-78h]
  int v46; // [rsp+4h] [rbp-74h]
  unsigned int v47; // [rsp+8h] [rbp-70h]
  int v48; // [rsp+Ch] [rbp-6Ch]
  int v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+18h] [rbp-60h]
  unsigned int v52; // [rsp+88h] [rbp+10h]
  int v53; // [rsp+90h] [rbp+18h]
  unsigned int v54; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 24);
  v45 = *((_DWORD *)a1 + 11);
  v48 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v53 = v6;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v54 = v9;
  v49 = v11;
  v50 = *(_QWORD *)(v10 + 16);
  v46 = *((_DWORD *)v1 + 23);
  if ( v5 < v46 )
    return 1LL;
  v13 = (unsigned int)v11 >> 1;
  v14 = (unsigned int)(v7 - 1) >> 1;
  v47 = (unsigned int)v11 >> 1;
  v52 = v14;
  v15 = (unsigned int)(v8 >> 1);
  if ( v5 >= v6 )
  {
    v16 = (char)a1;
  }
  else
  {
    if ( (unsigned int)v15 >= (unsigned int)v13 )
    {
      v13 = v14;
      if ( (unsigned int)v15 <= v14 )
        v13 = (unsigned int)v15;
    }
    v16 = *(_BYTE *)(v13 + v3);
  }
  v17 = v4 + 2;
  if ( v17 <= v9 )
  {
    while ( 1 )
    {
      v18 = *v2;
      v19 = v2 + 1;
      v20 = *v19;
      v2 = v19 + 1;
      if ( v18 )
      {
        if ( v5 < v6 && v8 < v7 && (int)(v18 + v8) > v11 )
        {
          if ( v8 < v11 )
          {
            v40 = v11 - v8;
            v8 = v11;
            v18 -= v40;
            v15 = (unsigned int)(v11 >> 1);
          }
          if ( (int)(v18 + v8) <= v7 )
          {
            v41 = 0;
          }
          else
          {
            v41 = v8 + v18 - v7;
            v18 = v7 - v8;
          }
          v42 = *(_DWORD *)(v50 + 4 * v20);
          if ( (v8 & 1) != 0 )
          {
            ++v8;
            *(_BYTE *)(v15 + v3) = v16 ^ (v16 ^ v42) & 0xF;
            v15 = (unsigned int)(v15 + 1);
            --v18;
          }
          v16 = (16 * v42) | v42 & 0xF;
          v43 = v18 + v8;
          for ( i = v18 >> 1; i; --i )
          {
            *(_BYTE *)(v15 + v3) = v16;
            v15 = (unsigned int)(v15 + 1);
          }
          if ( (v43 & 1) != 0 )
            v16 = (16 * v42) | v42 & 0xF;
          v8 = v41 + v43;
LABEL_75:
          v6 = v53;
          goto LABEL_77;
        }
        v8 += v18;
      }
      else
      {
        v21 = 0;
        if ( (_DWORD)v20 )
        {
          if ( (_DWORD)v20 == 1 )
          {
            if ( v5 < v6 )
            {
              if ( v8 >= v11 && v8 < v7 && (v8 & 1) != 0 )
              {
                *(_BYTE *)(v15 + v3) = v16 ^ (*(_BYTE *)(v15 + v3) ^ v16) & 0xF;
              }
              else if ( (v7 & 1) != 0 && v8 >= v7 )
              {
                *(_BYTE *)(v52 + v3) = v16 ^ (v16 ^ *(_BYTE *)(v52 + v3)) & 0xF;
              }
            }
            return 0LL;
          }
          if ( (_DWORD)v20 != 2 )
          {
            v22 = v20 + v17;
            if ( v22 > v54 )
              return 0LL;
            v23 = v20 & 1;
            if ( v5 >= v53 || v8 >= v7 || (int)v20 + v8 <= v11 )
            {
              v32 = &v2[v20];
              v8 += v20;
            }
            else
            {
              if ( v8 < v11 )
              {
                v24 = (unsigned int)(v11 - v8);
                v8 = v11;
                LODWORD(v20) = v20 - v24;
                v15 = (unsigned int)(v11 >> 1);
                v2 += v24;
              }
              if ( (int)v20 + v8 > v7 )
              {
                v21 = v8 + v20 - v7;
                LODWORD(v20) = v7 - v8;
              }
              if ( (v8 & 1) != 0 )
              {
                v25 = *v2;
                ++v8;
                ++v2;
                v16 ^= (v16 ^ *(_BYTE *)(v50 + 4 * v25)) & 0xF;
                *(_BYTE *)(v15 + v3) = v16;
                v15 = (unsigned int)(v15 + 1);
                LODWORD(v20) = v20 - 1;
              }
              v26 = v20 + v8;
              v27 = (unsigned int)v20 >> 1;
              if ( v27 )
              {
                do
                {
                  v28 = *v2;
                  v29 = v2 + 1;
                  v30 = *(_BYTE *)(v50 + 4 * v28);
                  v31 = *v29;
                  v2 = v29 + 1;
                  v16 = ((16 * v30) ^ *(_BYTE *)(v50 + 4 * v31)) & 0xF ^ (16 * v30);
                  *(_BYTE *)(v15 + v3) = v16;
                  v15 = (unsigned int)(v15 + 1);
                  --v27;
                }
                while ( v27 );
                v1 = a1;
              }
              if ( (v26 & 1) != 0 )
                v16 = v16 & 0xF | (16 * *(_BYTE *)(v50 + 4LL * *v2++));
              v32 = &v2[v21];
              v8 = v21 + v26;
            }
            v17 = v23 + v22;
            v2 = &v32[v23];
            goto LABEL_75;
          }
          if ( v5 >= v6 )
            goto LABEL_37;
          if ( v8 >= v11 && v8 < v7 && (v8 & 1) != 0 )
          {
            v16 ^= (*(_BYTE *)(v15 + v3) ^ v16) & 0xF;
            *(_BYTE *)(v15 + v3) = v16;
            goto LABEL_37;
          }
          if ( (v7 & 1) != 0 && v8 >= v7 )
          {
            v33 = (unsigned int)(v7 - 1) >> 1;
            v16 ^= (v16 ^ *(_BYTE *)(v52 + v3)) & 0xF;
            *(_BYTE *)(v52 + v3) = v16;
          }
          else
          {
LABEL_37:
            v33 = (unsigned int)(v7 - 1) >> 1;
          }
          v17 += 2;
          if ( v17 > v54 )
            return 0LL;
          v34 = *v2;
          v35 = v2 + 1;
          v8 += v34;
          v36 = *v35;
          v2 = v35 + 1;
          v5 -= v36;
          v3 += v45 * v36;
          if ( v5 < v46 )
          {
            *((_DWORD *)v1 + 34) = v8;
LABEL_90:
            result = 1LL;
            *((_DWORD *)v1 + 33) = v5;
            *((_QWORD *)v1 + 14) = v3;
            *((_QWORD *)v1 + 13) = v2;
            *((_DWORD *)v1 + 31) = v17;
            return result;
          }
          v37 = v8 >> 1;
          if ( v5 < v6 )
          {
            v38 = v47;
            if ( v37 >= v47 )
            {
              v38 = v33;
              if ( v37 <= v33 )
                v38 = v8 >> 1;
            }
            v39 = v38;
            goto LABEL_59;
          }
          goto LABEL_77;
        }
        if ( v5 < v6 )
        {
          if ( v8 >= v11 && v8 < v7 && (v8 & 1) != 0 )
          {
            v16 ^= (*(_BYTE *)(v15 + v3) ^ v16) & 0xF;
            *(_BYTE *)(v15 + v3) = v16;
          }
          else if ( (v7 & 1) != 0 && v8 >= v7 )
          {
            v16 ^= (v16 ^ *(_BYTE *)(v52 + v3)) & 0xF;
            *(_BYTE *)(v52 + v3) = v16;
          }
        }
        --v5;
        v3 += v45;
        v8 = v48;
        if ( v5 < v46 )
        {
          *((_DWORD *)v1 + 34) = v48;
          goto LABEL_90;
        }
        if ( v5 < v6 )
        {
          v39 = v47;
LABEL_59:
          v16 = *(_BYTE *)(v39 + v3);
        }
      }
LABEL_77:
      v17 += 2;
      v15 = (unsigned int)(v8 >> 1);
      if ( v17 > v54 )
        return 0LL;
      v11 = v49;
    }
  }
  return 0LL;
}
