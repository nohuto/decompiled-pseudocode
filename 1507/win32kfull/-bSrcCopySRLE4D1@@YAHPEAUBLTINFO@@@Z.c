/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02C6890
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r15
  __int64 v3; // rsi
  int v4; // r12d
  int v5; // r10d
  int v6; // edx
  int v7; // r13d
  int v8; // ebx
  unsigned int v9; // r14d
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 result; // rax
  char v13; // r8
  struct BLTINFO *v14; // rdi
  int v15; // eax
  int *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r12d
  bool i; // cc
  unsigned int v20; // r14d
  unsigned __int8 *v21; // r15
  __int64 v22; // r11
  int v23; // r9d
  unsigned int v24; // r12d
  BOOL v25; // edx
  unsigned int v26; // edx
  unsigned __int8 v27; // r10
  char v28; // al
  int v29; // edx
  int v30; // ebx
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned __int8 *v34; // r15
  int v35; // edx
  unsigned int v36; // r9d
  int v37; // eax
  unsigned __int8 *v38; // r15
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rcx
  char v42; // r12
  unsigned __int8 v43; // cl
  unsigned int v44; // r9d
  unsigned int v45; // ebx
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  __int64 v48; // r14
  unsigned int v49; // [rsp+20h] [rbp-88h]
  int v50; // [rsp+24h] [rbp-84h]
  int v51; // [rsp+28h] [rbp-80h]
  int v52; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v53; // [rsp+30h] [rbp-78h]
  int v54; // [rsp+30h] [rbp-78h]
  BOOL v55; // [rsp+34h] [rbp-74h]
  unsigned int v56; // [rsp+34h] [rbp-74h]
  unsigned int v57; // [rsp+38h] [rbp-70h]
  int v58; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v59; // [rsp+40h] [rbp-68h]
  int v60; // [rsp+44h] [rbp-64h]
  __int64 v61; // [rsp+48h] [rbp-60h]
  int v62; // [rsp+50h] [rbp-58h]
  char v64; // [rsp+B8h] [rbp+10h]
  char v65; // [rsp+C0h] [rbp+18h]
  char v66; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v67; // [rsp+C9h] [rbp+21h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 32);
  v60 = *((_DWORD *)a1 + 11);
  v50 = v6;
  v62 = *((_DWORD *)a1 + 14);
  v52 = v5;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v57 = v9;
  v51 = v11;
  v61 = *(_QWORD *)(v10 + 16);
  v58 = *((_DWORD *)a1 + 23);
  if ( v5 < v58 )
    return 1LL;
  v13 = 0;
  v59 = v11 >> 3;
  v65 = byte_1C02E7408[v11 & 7];
  v49 = (unsigned int)(v7 - 1) >> 3;
  v14 = a1;
  v64 = ~byte_1C02E7408[v7 & 7];
  if ( v5 >= v6 )
    goto LABEL_10;
  if ( v8 >= (int)v11 )
  {
    if ( v8 < v7 )
    {
      v13 = byte_1C02E7408[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v7 )
  {
LABEL_8:
    v13 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v13 = byte_1C02E7408[v11 & 7] & *(_BYTE *)((v11 >> 3) + v3);
LABEL_10:
  v15 = 1;
  v16 = (int *)(v61 + 4);
  v17 = 15LL;
  do
  {
    *v16 = v15;
    v15 ^= 1u;
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = v4 + 2;
  for ( i = v18 <= v9; ; i = v18 <= v57 )
  {
    v53 = v18;
    if ( !i )
      return 0LL;
    v20 = *v2;
    v21 = v2 + 1;
    v22 = (unsigned int)(v8 >> 3);
    v23 = *v21;
    v2 = v21 + 1;
    if ( v20 )
    {
      if ( v5 >= v50 || v8 >= v7 || (int)(v20 + v8) <= v51 )
      {
        v8 += v20;
      }
      else
      {
        if ( v8 < v51 )
        {
          v40 = v51 - v8;
          v8 = v51;
          v20 -= v40;
          v22 = (unsigned int)(v51 >> 3);
        }
        if ( (int)(v20 + v8) <= v7 )
        {
          v56 = 0;
        }
        else
        {
          v56 = v8 + v20 - v7;
          v20 = v7 - v8;
        }
        v41 = *(unsigned __int8 *)(v61 + 4LL * ((unsigned __int8)v23 >> 4));
        v67 = *(_BYTE *)(v61 + 4LL * (v23 & 0xF));
        v66 = v41;
        v42 = acBits[2 * v41 + 16 + v67];
        v43 = 7 - (v8 & 7);
        if ( v20 >= (unsigned int)v43 + 1 )
          v44 = ((unsigned __int8)v20 - v43 - 1) >> 3;
        else
          v44 = 0;
        v45 = v20 + v8;
        v46 = v20 - 8 * v44;
        v47 = 0x1C0000000uLL;
        if ( v43 < (int)v46 )
        {
          *(_BYTE *)(v22 + v3) = v13 | ((unsigned __int8)(v42 & byte_1C02E7408[v43 + 1]) >> (7 - v43));
          if ( (v43 & 1) == 0 )
          {
            if ( v42 >= 0 )
              v42 *= 2;
            else
              v42 = (2 * v42) | 1;
          }
          LODWORD(v22) = v22 + 1;
          v13 = 0;
          v48 = -1 - v43 + (unsigned int)v46;
        }
        else
        {
          v42 &= byte_1C02E7408[v46];
          v13 |= (unsigned __int8)v42 >> (7 - v43);
          v48 = 0LL;
        }
        if ( v44 )
        {
          LOBYTE(v47) = v42;
          memset((void *)(v3 + (unsigned int)v22), v47, v44);
          v5 = v52;
          v13 = 0;
        }
        if ( (unsigned int)v48 < 9 )
          v13 |= v42 & byte_1C02E7408[v48];
        v8 = v56 + v45;
        v18 = v53;
      }
      goto LABEL_99;
    }
    if ( !v23 )
      break;
    if ( v23 == 1 )
    {
      if ( v5 >= v50 || (v8 & 7) == 0 )
        return 0LL;
      if ( v8 < v51 )
      {
        if ( v8 < v7 )
          return 0LL;
      }
      else if ( v8 < v7 )
      {
        *(_BYTE *)(v22 + v3) = v13 | *(_BYTE *)(v22 + v3) & ~byte_1C02E7408[v8 & 7];
        return 0LL;
      }
      *(_BYTE *)(v49 + v3) = v13 | *(_BYTE *)(v49 + v3) & v64;
      return 0LL;
    }
    if ( v23 != 2 )
    {
      v24 = ((unsigned int)(v23 + 1) >> 1) + v18;
      if ( v24 > v57 )
        return 0LL;
      v25 = ((v23 + 1) & 2) != 0;
      v55 = v25;
      if ( v5 >= v50 || v8 >= v7 || v23 + v8 <= v51 )
      {
        v8 += v23;
        v34 = &v2[(unsigned __int64)(unsigned int)(v23 + 1) >> 1];
      }
      else
      {
        if ( v8 >= v51 )
        {
          v27 = acBits[(unsigned __int8)(7 - (v8 & 7)) + 24];
        }
        else
        {
          v26 = v51 - v8;
          v8 = v51;
          v2 += (unsigned __int64)v26 >> 1;
          v22 = (unsigned int)(v51 >> 3);
          v23 -= v26;
          v27 = acBits[(unsigned __int8)(7 - (v51 & 7)) + 24];
          if ( (v26 & 1) != 0 )
          {
            v28 = *v2++;
            if ( *(_BYTE *)(v61 + 4LL * (v28 & 0xF)) )
              v13 |= v27;
            v27 >>= 1;
            v8 = v51 + 1;
            --v23;
          }
        }
        if ( v23 + v8 <= v7 )
        {
          v29 = 0;
        }
        else
        {
          v29 = v8 + v23 - v7;
          v23 = v7 - v8;
        }
        v30 = v23 + v8;
        v54 = v23 & 1;
        v31 = 0LL;
        do
        {
          if ( v27 )
          {
            do
            {
              if ( !v23 )
                break;
              if ( !(_DWORD)v31 )
              {
                v32 = *v2++;
                v66 = *(_BYTE *)(v61 + 4 * (v32 >> 4));
                v67 = *(_BYTE *)(v61 + 4 * (v32 & 0xF));
              }
              if ( *(&v66 + v31) )
                v13 |= v27;
              --v23;
              v31 = (unsigned int)v31 ^ 1;
              v27 >>= 1;
            }
            while ( v27 );
            if ( v27 )
              continue;
          }
          *(_BYTE *)(v22 + v3) = v13;
          v27 = 0x80;
          v22 = (unsigned int)(v22 + 1);
          v13 = 0;
        }
        while ( v23 );
        v33 = v29;
        v14 = a1;
        if ( !v54 )
          v33 = v29 + 1;
        v5 = v52;
        v34 = &v2[v33 >> 1];
        v8 = v29 + v30;
        v25 = v55;
      }
      v18 = v25 + v24;
      v2 = &v34[v25];
      goto LABEL_99;
    }
    v35 = v50;
    if ( v5 >= v50 )
    {
      v36 = (unsigned int)(v7 - 1) >> 3;
    }
    else
    {
      if ( (v8 & 7) != 0 )
      {
        if ( v8 < v51 )
        {
          if ( v8 >= v7 )
          {
LABEL_53:
            v36 = (unsigned int)(v7 - 1) >> 3;
            *(_BYTE *)(v49 + v3) = v13 | *(_BYTE *)(v49 + v3) & v64;
            goto LABEL_57;
          }
        }
        else
        {
          if ( v8 >= v7 )
            goto LABEL_53;
          *(_BYTE *)((unsigned int)v22 + v3) = v13 | *(_BYTE *)((unsigned int)v22 + v3) & ~byte_1C02E7408[v8 & 7];
          v35 = v50;
        }
      }
      v36 = (unsigned int)(v7 - 1) >> 3;
    }
LABEL_57:
    v18 += 2;
    if ( v18 > v57 )
      return 0LL;
    v37 = *v2;
    v38 = v2 + 1;
    v8 += v37;
    v39 = *v38;
    v2 = v38 + 1;
    v5 -= v39;
    v52 = v5;
    v3 += v60 * v39;
    if ( v5 < v58 )
    {
      *((_DWORD *)v14 + 34) = v8;
      goto LABEL_110;
    }
    if ( v5 < v35 )
    {
      if ( v8 >= v51 )
      {
        if ( v8 < v7 )
        {
          v13 = byte_1C02E7408[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
          goto LABEL_99;
        }
LABEL_64:
        v13 = *(_BYTE *)(v36 + v3);
        goto LABEL_99;
      }
      if ( v8 >= v7 )
        goto LABEL_64;
LABEL_74:
      v13 = v65 & *(_BYTE *)(v59 + v3);
    }
LABEL_99:
    v18 += 2;
  }
  if ( v5 < v50 && (v8 & 7) != 0 )
  {
    if ( v8 < v51 )
    {
      if ( v8 >= v7 )
        goto LABEL_71;
    }
    else
    {
      if ( v8 < v7 )
      {
        *(_BYTE *)(v22 + v3) = v13 | *(_BYTE *)(v22 + v3) & ~byte_1C02E7408[v8 & 7];
        goto LABEL_72;
      }
LABEL_71:
      *(_BYTE *)(v49 + v3) = v13 | *(_BYTE *)(v49 + v3) & v64;
    }
  }
LABEL_72:
  --v5;
  v3 += v60;
  v8 = v62;
  v52 = v5;
  if ( v5 >= v58 )
  {
    if ( v5 >= v50 )
      goto LABEL_99;
    goto LABEL_74;
  }
  *((_DWORD *)v14 + 34) = v62;
LABEL_110:
  result = 1LL;
  *((_DWORD *)v14 + 33) = v5;
  *((_QWORD *)v14 + 14) = v3;
  *((_QWORD *)v14 + 13) = v2;
  *((_DWORD *)v14 + 31) = v18;
  return result;
}
