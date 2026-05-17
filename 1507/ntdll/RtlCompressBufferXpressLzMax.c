/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1800F2328
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1800F2290 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     memset @ 0x180098540 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1800F2F1C (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v8; // rbx
  __int64 v10; // r12
  unsigned __int8 *v11; // rbp
  unsigned __int64 v13; // r8
  __int16 v14; // cx
  _BYTE *v15; // rbx
  int v16; // esi
  unsigned __int8 *v17; // r10
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // r9
  char *v20; // r8
  unsigned __int8 *v21; // r11
  __int64 v22; // rcx
  char *v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r15
  __int64 XpressCallback; // rax
  int v27; // r10d
  unsigned __int64 v28; // rdx
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r14
  unsigned __int8 *v34; // r9
  unsigned __int8 *v35; // rdi
  unsigned __int8 *i; // rcx
  __int64 v37; // rax
  __int64 v38; // r12
  _BYTE *v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  int *v42; // rdx
  int *v43; // rcx
  int v44; // eax
  int *v45; // rcx
  int v46; // eax
  char v47; // al
  int v48; // eax
  unsigned int v49; // ebx
  _BYTE *v50; // [rsp+20h] [rbp-88h]
  unsigned __int8 *v51; // [rsp+28h] [rbp-80h]
  unsigned __int64 v52; // [rsp+30h] [rbp-78h]
  __int16 v53; // [rsp+38h] [rbp-70h]
  unsigned __int8 *v54; // [rsp+40h] [rbp-68h]
  unsigned __int64 v55; // [rsp+48h] [rbp-60h]
  _QWORD v56[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-48h]
  int *v58; // [rsp+B0h] [rbp+8h]
  int v59; // [rsp+C0h] [rbp+18h]
  __int64 v61; // [rsp+E0h] [rbp+38h]

  v59 = a3;
  v6 = a2;
  v8 = a3 + a4;
  v55 = v8;
  v10 = 0LL;
  v11 = &a1[a2];
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( (unsigned __int64)a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v50 = 0LL;
  v52 = v8 - 41;
  v13 = (unsigned __int64)(v11 - 5);
  *(_BYTE *)(a3 + 4) = *a1;
  v14 = 0;
  v56[0] = 0LL;
  v15 = (_BYTE *)(a3 + 5);
  v56[1] = 0LL;
  v16 = 2;
  v58 = (int *)a3;
  v17 = a1;
  v61 = 0LL;
  v18 = a1 + 1;
  v57 = v6;
  v54 = a1;
LABEL_6:
  v19 = v17 + 0x2000;
  if ( (unsigned __int64)(v17 + 0x2000) > v13 )
    v19 = (unsigned __int8 *)v13;
  v20 = a6;
  v21 = &v18[v6];
  v51 = v19;
  if ( v19 < v21 )
    v21 = v19;
  v22 = v14 & 0x3FFF;
  v53 = v22;
  if ( v17 < v19 )
  {
    v23 = &a6[8 * v22 + 0x40000];
    v53 = (_WORD)v19 - (_WORD)v17 + v22;
    do
    {
      v24 = (unsigned __int16)XpressHashFunction[v17[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v17] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v17[1] + 256];
      *(_QWORD *)v23 = *(_QWORD *)&a6[8 * v24];
      v23 += 8;
      *(_QWORD *)&a6[8 * v24] = v17++;
    }
    while ( v17 < v19 );
    v54 = v17;
  }
LABEL_14:
  while ( 2 )
  {
    v25 = (unsigned __int64)(v18 - 0x2000);
    while ( 1 )
    {
      if ( v18 >= v21 )
      {
        if ( v18 >= v19 )
        {
          v6 = a2;
          v13 = (unsigned __int64)(v11 - 5);
          v14 = v53;
          v17 = v54;
          if ( v18 >= v11 - 5 )
          {
            v42 = v58;
            goto LABEL_91;
          }
          goto LABEL_6;
        }
        XpressCallback = RtlpMakeXpressCallback(v56, v19, v18);
        v19 = v51;
        v21 = (unsigned __int8 *)XpressCallback;
        v20 = a6;
      }
      v27 = *(_DWORD *)v18;
      v28 = *(_QWORD *)&v20[8 * ((0x2000 - (_WORD)a1 + (_WORD)v25) & 0x3FFF) + 0x40000];
      if ( v28 >= v25 )
      {
        v29 = v27 ^ *(_DWORD *)v28;
        if ( !v29 )
          goto LABEL_30;
        if ( (v29 & 0xFFFFFF) == 0 )
          goto LABEL_29;
        v28 = *(_QWORD *)&v20[8 * (((_WORD)v28 - (_WORD)a1) & 0x3FFF) + 0x40000];
        if ( v28 >= v25 )
        {
          v30 = v27 ^ *(_DWORD *)v28;
          if ( !v30 )
            goto LABEL_30;
          if ( (v30 & 0xFFFFFF) == 0 )
          {
LABEL_29:
            v32 = 0LL;
            v25 = (unsigned __int64)(v18 - 0x2000);
            v33 = 3LL;
            v10 = (__int64)&v18[-v28];
            goto LABEL_65;
          }
          v28 = *(_QWORD *)&v20[8 * (((_WORD)v28 - (_WORD)a1) & 0x3FFF) + 0x40000];
          if ( v28 >= v25 )
            break;
        }
      }
LABEL_27:
      *v15 = v27;
      ++v18;
      ++v15;
      ++v25;
      if ( v16 <= 0 )
      {
        v45 = v58;
        v46 = 2 * v16;
        v58 = (int *)v15;
        v42 = (int *)v15;
        v15 += 4;
        v16 = 1;
        *v45 = v46;
        if ( (unsigned __int64)v15 >= v52 )
          goto LABEL_91;
        goto LABEL_14;
      }
      v16 *= 2;
    }
    v31 = v27 ^ *(_DWORD *)v28;
    if ( v31 )
    {
      if ( (v31 & 0xFFFFFF) == 0 )
        goto LABEL_29;
      goto LABEL_27;
    }
LABEL_30:
    v33 = 3LL;
LABEL_31:
    v34 = v18;
    v35 = v18 + 4;
    v28 += 4LL;
    for ( i = v35 + 32; ; i += 32 )
    {
      if ( i >= v11 )
      {
        while ( v35 < v11 && *v35 == *(_BYTE *)v28 )
        {
          ++v35;
          ++v28;
        }
        goto LABEL_59;
      }
      if ( *(_DWORD *)v35 != *(_DWORD *)v28 )
        break;
      if ( *((_DWORD *)v35 + 1) != *(_DWORD *)(v28 + 4) )
      {
        v35 += 4;
        v28 += 4LL;
        break;
      }
      if ( *((_DWORD *)v35 + 2) != *(_DWORD *)(v28 + 8) )
      {
        v35 += 8;
        v28 += 8LL;
        break;
      }
      if ( *((_DWORD *)v35 + 3) != *(_DWORD *)(v28 + 12) )
      {
        v35 += 12;
        v28 += 12LL;
        break;
      }
      if ( *((_DWORD *)v35 + 4) != *(_DWORD *)(v28 + 16) )
      {
        v35 += 16;
        v28 += 16LL;
        break;
      }
      if ( *((_DWORD *)v35 + 5) != *(_DWORD *)(v28 + 20) )
      {
        v35 += 20;
        v28 += 20LL;
        break;
      }
      if ( *((_DWORD *)v35 + 6) != *(_DWORD *)(v28 + 24) )
      {
        v35 += 24;
        v28 += 24LL;
        break;
      }
      if ( *((_DWORD *)v35 + 7) != *(_DWORD *)(v28 + 28) )
      {
        v35 += 28;
        v28 += 28LL;
        break;
      }
      v28 += 32LL;
      v35 = i;
    }
    if ( *v35 == *(_BYTE *)v28 )
    {
      v20 = a6;
      if ( v35[1] == *(_BYTE *)(v28 + 1) )
      {
        if ( v35[2] == *(_BYTE *)(v28 + 2) )
        {
          v35 += 3;
          v28 += 3LL;
        }
        else
        {
          v35 += 2;
          v28 += 2LL;
        }
      }
      else
      {
        ++v35;
        ++v28;
      }
    }
LABEL_59:
    v37 = v35 - v34;
    if ( v35 - v34 <= v33 )
    {
      v32 = v37 + v61;
      goto LABEL_63;
    }
    v33 = v35 - v34;
    v10 = (__int64)&v35[-v28];
    if ( v28 > (unsigned __int64)v34 )
    {
      v18 = v34;
    }
    else
    {
      v32 = v61;
LABEL_63:
      LOWORD(v28) = v28 - v37;
      v18 = v34;
      while ( 1 )
      {
        v61 = ++v32;
        if ( v32 >= 0x18 )
          break;
LABEL_65:
        v28 = *(_QWORD *)&v20[8 * (((_WORD)v28 - (_WORD)a1) & 0x3FFF) + 0x40000];
        if ( v28 < v25 )
          break;
        if ( v27 == *(_DWORD *)v28 )
          goto LABEL_31;
      }
    }
    v18 += v33;
    v61 = 0LL;
    v38 = 8 * v10 - 8;
    if ( v33 - 3 < 7 )
    {
      v10 = v33 - 3 + v38;
      *(_WORD *)v15 = v10;
      v15 += 2;
      goto LABEL_82;
    }
    v39 = v50;
    v10 = v38 | 7;
    *(_WORD *)v15 = v10;
    v40 = v33 - 10;
    v15 += 2;
    if ( v50 )
    {
      v50 = 0LL;
      if ( v40 >= 0xF )
      {
        *v39 |= 0xF0u;
        goto LABEL_77;
      }
      *v39 |= 16 * (_BYTE)v40;
    }
    else
    {
      v50 = v15;
      if ( v40 >= 0xF )
      {
        *v15++ = 15;
LABEL_77:
        v40 = v33 - 25;
        if ( v33 - 25 >= 0xFF )
        {
          v41 = v40 + 22;
          *v15 = -1;
          if ( v41 >= 0x10000 )
          {
            *(_WORD *)(v15 + 1) = 0;
            *(_DWORD *)(v15 + 3) = v41;
            v15 += 7;
          }
          else
          {
            *(_WORD *)(v15 + 1) = v41;
            v15 += 3;
          }
          goto LABEL_82;
        }
      }
      *v15++ = v40;
    }
LABEL_82:
    if ( v16 <= 0 )
    {
      v43 = v58;
      v44 = 2 * v16 + 1;
      v42 = (int *)v15;
      v58 = (int *)v15;
      v16 = 1;
      v15 += 4;
      *v43 = v44;
    }
    else
    {
      v42 = v58;
      v16 = 2 * v16 + 1;
    }
    if ( (unsigned __int64)v15 < v52 )
    {
      v19 = v51;
      continue;
    }
    break;
  }
LABEL_91:
  while ( v18 < v11 )
  {
    if ( (unsigned __int64)v15 >= v55 )
      return 3221225507LL;
    v47 = *v18++;
    *v15++ = v47;
    if ( v16 <= 0 )
    {
      v48 = 2 * v16;
      v16 = 1;
      *v42 = v48;
      v42 = (int *)v15;
      v15 += 4;
    }
    else
    {
      v16 *= 2;
    }
  }
  if ( (unsigned __int64)v15 >= v55 )
    return 3221225507LL;
  while ( v16 > 0 )
    v16 = 2 * v16 + 1;
  v49 = (_DWORD)v15 - v59;
  *v42 = 2 * v16 + 1;
  if ( v49 < 8 )
    v49 = 8;
  *a5 = v49;
  return 0LL;
}
