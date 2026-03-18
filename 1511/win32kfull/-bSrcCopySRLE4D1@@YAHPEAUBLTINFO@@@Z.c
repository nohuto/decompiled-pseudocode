/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02C5700
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
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
  int v41; // eax
  __int64 v42; // rcx
  char v43; // r12
  unsigned __int8 v44; // cl
  unsigned int v45; // r9d
  unsigned int v46; // ebx
  __int64 v47; // r14
  unsigned __int64 v48; // rdx
  __int64 v49; // r14
  int v50; // [rsp+20h] [rbp-88h]
  int v51; // [rsp+24h] [rbp-84h]
  unsigned int v52; // [rsp+28h] [rbp-80h]
  int v53; // [rsp+2Ch] [rbp-7Ch]
  int v54; // [rsp+30h] [rbp-78h]
  unsigned int v55; // [rsp+30h] [rbp-78h]
  BOOL v56; // [rsp+34h] [rbp-74h]
  unsigned int v57; // [rsp+34h] [rbp-74h]
  unsigned int v58; // [rsp+38h] [rbp-70h]
  int v59; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v60; // [rsp+40h] [rbp-68h]
  int v61; // [rsp+44h] [rbp-64h]
  __int64 v62; // [rsp+48h] [rbp-60h]
  int v63; // [rsp+50h] [rbp-58h]
  char v65; // [rsp+B8h] [rbp+10h]
  char v66; // [rsp+C0h] [rbp+18h]
  char v67; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v68; // [rsp+C9h] [rbp+21h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 32);
  v61 = *((_DWORD *)a1 + 11);
  v50 = v6;
  v63 = *((_DWORD *)a1 + 14);
  v53 = v5;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v58 = v9;
  v51 = v11;
  v62 = *(_QWORD *)(v10 + 16);
  v59 = *((_DWORD *)a1 + 23);
  if ( v5 < v59 )
    return 1LL;
  v13 = 0;
  v60 = v11 >> 3;
  v66 = EndMask[v11 & 7];
  v52 = (unsigned int)v7 >> 3;
  v14 = a1;
  v65 = ~EndMask[v7 & 7];
  if ( v5 >= v6 )
    goto LABEL_10;
  if ( v8 >= (int)v11 )
  {
    if ( v8 < v7 )
    {
      v13 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v7 )
  {
LABEL_8:
    v13 = *(_BYTE *)(((unsigned int)v7 >> 3) + v3);
    goto LABEL_10;
  }
  v13 = EndMask[v11 & 7] & *(_BYTE *)((v11 >> 3) + v3);
LABEL_10:
  v15 = 1;
  v16 = (int *)(v62 + 4);
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
  for ( i = v18 <= v9; ; i = v18 <= v58 )
  {
    v55 = v18;
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
          v41 = v51 - v8;
          v8 = v51;
          v20 -= v41;
          v22 = (unsigned int)(v51 >> 3);
        }
        if ( (int)(v20 + v8) <= v7 )
        {
          v57 = 0;
        }
        else
        {
          v57 = v8 + v20 - v7;
          v20 = v7 - v8;
        }
        v42 = *(unsigned __int8 *)(v62 + 4LL * ((unsigned __int8)v23 >> 4));
        v68 = *(_BYTE *)(v62 + 4LL * (v23 & 0xF));
        v67 = v42;
        v43 = byte_1C02ED3E0[2 * v42 + 12 + v68];
        v44 = 7 - (v8 & 7);
        if ( v20 >= (unsigned int)v44 + 1 )
          v45 = ((unsigned __int8)v20 - v44 - 1) >> 3;
        else
          v45 = 0;
        v46 = v20 + v8;
        v47 = v20 - 8 * v45;
        v48 = 0x1C0000000uLL;
        if ( v44 < (int)v47 )
        {
          *(_BYTE *)(v22 + v3) = v13 | ((unsigned __int8)(v43 & EndMask[v44 + 1]) >> (7 - v44));
          if ( (v44 & 1) == 0 )
          {
            if ( v43 >= 0 )
              v43 *= 2;
            else
              v43 = (2 * v43) | 1;
          }
          LODWORD(v22) = v22 + 1;
          v13 = 0;
          v49 = -1 - v44 + (unsigned int)v47;
        }
        else
        {
          v43 &= EndMask[v47];
          v13 |= (unsigned __int8)v43 >> (7 - v44);
          v49 = 0LL;
        }
        if ( v45 )
        {
          LOBYTE(v48) = v43;
          memset((void *)(v3 + (unsigned int)v22), v48, v45);
          v5 = v53;
          v13 = 0;
        }
        if ( (unsigned int)v49 < 9 )
          v13 |= v43 & EndMask[v49];
        v8 = v57 + v46;
        v18 = v55;
      }
      goto LABEL_98;
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
        *(_BYTE *)(v22 + v3) = v13 | *(_BYTE *)(v22 + v3) & ~EndMask[v8 & 7];
        return 0LL;
      }
      *(_BYTE *)(v52 + v3) = v13 | v65 & *(_BYTE *)(v52 + v3);
      return 0LL;
    }
    if ( v23 == 2 )
    {
      v35 = v51;
      if ( v5 >= v50 )
      {
        v36 = (unsigned int)v7 >> 3;
      }
      else
      {
        if ( (v8 & 7) == 0 )
          goto LABEL_55;
        if ( v8 < v51 )
        {
          if ( v8 >= v7 )
            goto LABEL_52;
LABEL_55:
          v36 = (unsigned int)v7 >> 3;
        }
        else
        {
          if ( v8 < v7 )
          {
            *(_BYTE *)((unsigned int)v22 + v3) = v13 | *(_BYTE *)((unsigned int)v22 + v3) & ~EndMask[v8 & 7];
            v35 = v51;
            goto LABEL_55;
          }
LABEL_52:
          v36 = (unsigned int)v7 >> 3;
          *(_BYTE *)(v52 + v3) = v13 | v65 & *(_BYTE *)(v52 + v3);
        }
      }
      v18 += 2;
      if ( v18 > v58 )
        return 0LL;
      v37 = *v2;
      v38 = v2 + 1;
      v8 += v37;
      v39 = *v38;
      v2 = v38 + 1;
      v5 -= v39;
      v53 = v5;
      v3 += v61 * v39;
      if ( v5 < v59 )
      {
        *((_DWORD *)v14 + 34) = v8;
        goto LABEL_110;
      }
      if ( v8 >= v35 )
      {
        if ( v8 < v7 )
        {
          v13 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v3);
          goto LABEL_98;
        }
LABEL_62:
        v13 = *(_BYTE *)(v36 + v3);
        goto LABEL_98;
      }
      if ( v8 >= v7 )
        goto LABEL_62;
LABEL_73:
      v13 = v66 & *(_BYTE *)(v60 + v3);
      goto LABEL_98;
    }
    v24 = ((unsigned int)(v23 + 1) >> 1) + v18;
    if ( v24 > v58 )
      return 0LL;
    v25 = ((v23 + 1) & 2) != 0;
    v56 = v25;
    if ( v5 >= v50 || v8 >= v7 || v23 + v8 <= v51 )
    {
      v8 += v23;
      v34 = &v2[(unsigned __int64)(unsigned int)(v23 + 1) >> 1];
    }
    else
    {
      if ( v8 >= v51 )
      {
        v27 = byte_1C02ED3E0[(unsigned __int8)(7 - (v8 & 7))];
      }
      else
      {
        v26 = v51 - v8;
        v8 = v51;
        v2 += (unsigned __int64)v26 >> 1;
        v22 = (unsigned int)(v51 >> 3);
        v23 -= v26;
        v27 = byte_1C02ED3E0[(unsigned __int8)(7 - (v51 & 7))];
        if ( (v26 & 1) != 0 )
        {
          v28 = *v2++;
          if ( *(_BYTE *)(v62 + 4LL * (v28 & 0xF)) )
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
              v67 = *(_BYTE *)(v62 + 4 * (v32 >> 4));
              v68 = *(_BYTE *)(v62 + 4 * (v32 & 0xF));
            }
            if ( *(&v67 + v31) )
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
      v5 = v53;
      v34 = &v2[v33 >> 1];
      v8 = v29 + v30;
      v25 = v56;
    }
    v18 = v25 + v24;
    v2 = &v34[v25];
LABEL_98:
    v18 += 2;
  }
  v40 = v50;
  if ( v5 < v50 )
  {
    if ( (v8 & 7) == 0 )
      goto LABEL_70;
    if ( v8 < v51 )
    {
      if ( v8 >= v7 )
        goto LABEL_69;
    }
    else
    {
      if ( v8 < v7 )
      {
        *(_BYTE *)(v22 + v3) = v13 | *(_BYTE *)(v22 + v3) & ~EndMask[v8 & 7];
        goto LABEL_70;
      }
LABEL_69:
      *(_BYTE *)(v52 + v3) = v13 | v65 & *(_BYTE *)(v52 + v3);
    }
LABEL_70:
    v40 = v50;
  }
  --v5;
  v3 += v61;
  v8 = v63;
  v53 = v5;
  if ( v5 >= v59 )
  {
    if ( v5 >= v40 )
      goto LABEL_98;
    goto LABEL_73;
  }
  *((_DWORD *)v14 + 34) = v63;
LABEL_110:
  result = 1LL;
  *((_DWORD *)v14 + 33) = v5;
  *((_QWORD *)v14 + 14) = v3;
  *((_QWORD *)v14 + 13) = v2;
  *((_DWORD *)v14 + 31) = v18;
  return result;
}
