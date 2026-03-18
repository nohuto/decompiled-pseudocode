/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02C79B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v2; // r13d
  int v3; // r9d
  unsigned __int8 *v4; // r14
  int v5; // r10d
  __int64 v6; // rbp
  int v7; // r12d
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  char v12; // r8
  int v13; // ecx
  __int64 i; // rax
  unsigned int v15; // r12d
  __int64 v16; // rsi
  unsigned __int8 *v17; // r14
  __int64 v18; // r11
  __int64 v19; // rdx
  unsigned int v20; // r12d
  int v21; // esi
  __int64 v22; // rax
  int v23; // r10d
  __int64 v24; // rcx
  int v25; // ebx
  unsigned __int8 v26; // r9
  __int64 v27; // rax
  unsigned __int8 *v28; // r14
  unsigned int v29; // r11d
  int v30; // eax
  unsigned __int8 *v31; // r14
  int v32; // ecx
  int v33; // eax
  int v34; // r13d
  unsigned __int8 v35; // r9
  int v36; // ebx
  int v37; // r12d
  char v38; // dl
  int v39; // edx
  __int64 v40; // rcx
  unsigned int v41; // r14d
  char v42; // r8
  unsigned int v43; // r11d
  __int64 v44; // rsi
  int v45; // [rsp+20h] [rbp-88h]
  unsigned int v46; // [rsp+24h] [rbp-84h]
  int v47; // [rsp+28h] [rbp-80h]
  int v48; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v49; // [rsp+30h] [rbp-78h]
  int v50; // [rsp+34h] [rbp-74h]
  unsigned int v51; // [rsp+38h] [rbp-70h]
  unsigned __int8 *v52; // [rsp+40h] [rbp-68h]
  int v53; // [rsp+48h] [rbp-60h]
  int v54; // [rsp+4Ch] [rbp-5Ch]
  __int64 v55; // [rsp+50h] [rbp-58h]
  char v56; // [rsp+B0h] [rbp+8h]
  char v57; // [rsp+B8h] [rbp+10h]
  int v58; // [rsp+C0h] [rbp+18h]
  unsigned int v59; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_QWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 30);
  v8 = *((_DWORD *)a1 + 32);
  v47 = *((_DWORD *)a1 + 11);
  v50 = v2;
  v54 = v3;
  v53 = *((_DWORD *)a1 + 14);
  v46 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v45 = v5;
  v55 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 23);
  v10 = *((_DWORD *)a1 + 25);
  v58 = v10;
  v48 = v9;
  if ( v5 < v9 )
    return 1LL;
  v12 = 0;
  v49 = (unsigned int)v2 >> 3;
  v57 = EndMask[v2 & 7];
  v59 = (unsigned int)(v3 - 1) >> 3;
  v56 = ~EndMask[v3 & 7];
  if ( v5 >= v10 )
    goto LABEL_10;
  if ( v8 < v2 )
  {
    if ( v8 < v3 )
    {
      v12 = EndMask[v2 & 7] & *(_BYTE *)(((unsigned int)v2 >> 3) + v6);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v3 )
  {
LABEL_8:
    v12 = *(_BYTE *)(((unsigned int)(v3 - 1) >> 3) + v6);
    goto LABEL_10;
  }
  v12 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v6);
LABEL_10:
  v13 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v55 + 4 * i) = v13;
    v13 ^= 1u;
  }
  v15 = v7 + 2;
  v51 = v15;
  if ( v15 > v46 )
    return 0LL;
  while ( 1 )
  {
    v16 = *v4;
    v17 = v4 + 1;
    v18 = (unsigned int)(v8 >> 3);
    v19 = *v17;
    v4 = v17 + 1;
    v52 = v4;
    if ( !(_DWORD)v16 )
      break;
    if ( v5 < v58 && v8 < v3 && (int)v16 + v8 > v2 )
    {
      if ( v8 < v2 )
      {
        v33 = v2 - v8;
        v8 = v2;
        v16 = (unsigned int)(v16 - v33);
        v18 = (unsigned int)(v2 >> 3);
      }
      if ( (int)v16 + v8 <= v3 )
      {
        v34 = 0;
      }
      else
      {
        v34 = v8 + v16 - v3;
        v16 = (unsigned int)(v3 - v8);
      }
      v35 = 7 - (v8 & 7);
      v36 = v16 + v8;
      v37 = *(_DWORD *)(v55 + 4 * v19);
      if ( v35 < (unsigned __int8)v16 )
      {
        v39 = v35;
        v40 = 7 - v35;
        v41 = ((unsigned __int8)v16 - v35 - 1) >> 3;
        if ( v37 )
          v42 = ~EndMask[v40] | v12;
        else
          v42 = EndMask[v40] & v12;
        *(_BYTE *)(v18 + v6) = v42;
        v43 = v18 + 1;
        v44 = -1 - v35 + (unsigned int)v16;
        v12 = 0;
        if ( v41 )
        {
          LOBYTE(v39) = -(v37 != 0);
          memset((void *)(v6 + v43), v39, v41);
          v5 = v45;
          v12 = 0;
          v44 = (unsigned int)v44 - 8 * v41;
        }
        if ( (_DWORD)v44 )
        {
          if ( v37 )
          {
            v4 = v52;
            if ( (unsigned int)v44 < 9 )
              v12 = EndMask[v44];
            goto LABEL_90;
          }
          v12 = 0;
        }
        v4 = v52;
      }
      else if ( (unsigned int)v16 < 9 )
      {
        v38 = EndMask[v16] >> (7 - v35);
        if ( v37 )
          v12 |= v38;
        else
          v12 &= ~v38;
      }
LABEL_90:
      v15 = v51;
      v8 = v34 + v36;
      v2 = v50;
      goto LABEL_92;
    }
    v8 += v16;
LABEL_92:
    v15 += 2;
    v51 = v15;
    if ( v15 > v46 )
      return 0LL;
    v3 = v54;
  }
  if ( !(_DWORD)v19 )
  {
    if ( v5 < v58 && (v8 & 7) != 0 )
    {
      if ( v8 < v2 )
      {
        if ( v8 < v3 )
          goto LABEL_63;
      }
      else if ( v8 < v3 )
      {
        *(_BYTE *)(v18 + v6) = v12 | *(_BYTE *)(v18 + v6) & ~EndMask[v8 & 7];
        goto LABEL_63;
      }
      *(_BYTE *)(v59 + v6) = v12 | *(_BYTE *)(v59 + v6) & v56;
    }
LABEL_63:
    --v5;
    v6 += v47;
    v8 = v53;
    v45 = v5;
    if ( v5 < v48 )
    {
      *((_DWORD *)a1 + 34) = v53;
      goto LABEL_104;
    }
    if ( v5 < v58 )
      goto LABEL_65;
    goto LABEL_92;
  }
  if ( (_DWORD)v19 != 1 )
  {
    if ( (_DWORD)v19 != 2 )
    {
      v20 = v19 + v15;
      if ( v20 > v46 )
        return 0LL;
      v21 = v19 & 1;
      if ( v5 >= v58 || v8 >= v3 || (int)v19 + v8 <= v2 )
      {
        v8 += v19;
        v28 = &v4[v19];
      }
      else
      {
        if ( v8 < v2 )
        {
          v22 = (unsigned int)(v2 - v8);
          v8 = v2;
          LODWORD(v19) = v19 - v22;
          v18 = (unsigned int)(v2 >> 3);
          v4 += v22;
        }
        if ( (int)v19 + v8 <= v3 )
        {
          v23 = 0;
        }
        else
        {
          v23 = v8 + v19 - v3;
          LODWORD(v19) = v3 - v8;
        }
        v24 = (unsigned __int8)(7 - (v8 & 7));
        v25 = v19 + v8;
        v26 = byte_1C02F29F8[v24];
        do
        {
          if ( v26 )
          {
            do
            {
              if ( !(_DWORD)v19 )
                break;
              v27 = *v4++;
              if ( *(_DWORD *)(v55 + 4 * v27) )
                v12 |= v26;
              LODWORD(v19) = v19 - 1;
              v26 >>= 1;
            }
            while ( v26 );
            if ( v26 )
              continue;
          }
          *(_BYTE *)(v18 + v6) = v12;
          v26 = 0x80;
          v18 = (unsigned int)(v18 + 1);
          v12 = 0;
        }
        while ( (_DWORD)v19 );
        v2 = v50;
        v28 = &v4[v23];
        v8 = v23 + v25;
        v5 = v45;
      }
      v15 = v21 + v20;
      v4 = &v28[v21];
      goto LABEL_92;
    }
    if ( v5 >= v58 )
    {
      v29 = v59;
LABEL_48:
      v15 += 2;
      if ( v15 > v46 )
        return 0LL;
      v30 = *v4;
      v31 = v4 + 1;
      v8 += v30;
      v32 = *v31;
      v4 = v31 + 1;
      v5 -= v32;
      v45 = v5;
      v6 += v47 * v32;
      if ( v5 < v48 )
      {
        *((_DWORD *)a1 + 34) = v8;
LABEL_104:
        result = 1LL;
        *((_DWORD *)a1 + 33) = v5;
        *((_QWORD *)a1 + 14) = v6;
        *((_QWORD *)a1 + 13) = v4;
        *((_DWORD *)a1 + 31) = v15;
        return result;
      }
      if ( v5 < v58 )
      {
        if ( v8 >= v2 )
        {
          if ( v8 < v3 )
          {
            v12 = EndMask[v8 & 7] & *(_BYTE *)((unsigned int)(v8 >> 3) + v6);
            goto LABEL_92;
          }
LABEL_55:
          v12 = *(_BYTE *)(v29 + v6);
          goto LABEL_92;
        }
        if ( v8 >= v3 )
          goto LABEL_55;
LABEL_65:
        v12 = v57 & *(_BYTE *)(v49 + v6);
        goto LABEL_92;
      }
      goto LABEL_92;
    }
    if ( (v8 & 7) != 0 )
    {
      if ( v8 < v2 )
      {
        if ( v8 < v3 )
          goto LABEL_47;
      }
      else if ( v8 < v3 )
      {
        *(_BYTE *)(v18 + v6) = v12 | *(_BYTE *)(v18 + v6) & ~EndMask[v8 & 7];
        goto LABEL_47;
      }
      v29 = v59;
      *(_BYTE *)(v59 + v6) = v12 | *(_BYTE *)(v59 + v6) & v56;
      goto LABEL_48;
    }
LABEL_47:
    v29 = v59;
    goto LABEL_48;
  }
  if ( v5 < v58 && (v8 & 7) != 0 )
  {
    if ( v8 < v2 )
    {
      if ( v8 < v3 )
        return 0LL;
    }
    else if ( v8 < v3 )
    {
      *(_BYTE *)(v18 + v6) = v12 | *(_BYTE *)(v18 + v6) & ~EndMask[v8 & 7];
      return 0LL;
    }
    *(_BYTE *)(v59 + v6) = v12 | *(_BYTE *)(v59 + v6) & v56;
  }
  return 0LL;
}
