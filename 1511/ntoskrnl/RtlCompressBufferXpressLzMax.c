/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1401FDF1C
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1400C21E0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x140119A9C (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140119880 (RtlpMakeXpressCallback.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v11; // rdi
  __int64 v13; // r12
  unsigned __int8 *v14; // rbp
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  char *v18; // rdi
  __int16 v19; // r10
  int v20; // esi
  _BYTE *v21; // rbx
  unsigned __int8 *v22; // r14
  unsigned __int64 v23; // r9
  char *v24; // r8
  char *v25; // r11
  __int64 v26; // r10
  char *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r15
  unsigned __int64 XpressCallback; // rax
  int v31; // r10d
  unsigned __int64 v32; // rdx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r14
  char *v38; // r9
  unsigned __int8 *v39; // rdi
  unsigned __int8 *i; // rcx
  __int64 v41; // rax
  __int64 v42; // r12
  _BYTE *v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  int *v46; // rdx
  int *v47; // rcx
  int v48; // eax
  int *v49; // rcx
  int v50; // eax
  char v51; // al
  int v52; // eax
  unsigned int v53; // ebx
  unsigned __int64 v54; // [rsp+28h] [rbp-90h]
  _BYTE *v55; // [rsp+30h] [rbp-88h]
  unsigned __int64 v56; // [rsp+38h] [rbp-80h]
  unsigned __int8 *v57; // [rsp+40h] [rbp-78h]
  unsigned __int64 v58; // [rsp+48h] [rbp-70h]
  unsigned __int64 v59; // [rsp+50h] [rbp-68h]
  __int16 v60; // [rsp+58h] [rbp-60h]
  _QWORD v61[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+70h] [rbp-48h]
  int *v63; // [rsp+C0h] [rbp+8h]
  int v64; // [rsp+D0h] [rbp+18h]

  v64 = a3;
  v11 = a3 + a4;
  v59 = v11;
  v13 = 0LL;
  v14 = &a1[a2];
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( (unsigned __int64)a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v55 = 0LL;
  v56 = v11 - 41;
  v16 = (unsigned __int64)(v14 - 5);
  if ( !a7 || (v17 = a9, a9 > a2) )
  {
    v17 = a2;
    a9 = a2;
  }
  v61[0] = a7;
  v18 = (char *)(a1 + 1);
  v61[1] = a8;
  v19 = 0;
  v20 = 2;
  *(_BYTE *)(a3 + 4) = *a1;
  v21 = (_BYTE *)(a3 + 5);
  v63 = (int *)a3;
  v22 = a1;
  v54 = 0LL;
  v62 = v17;
  v57 = a1;
LABEL_9:
  v23 = (unsigned __int64)(v22 + 0x2000);
  if ( (unsigned __int64)(v22 + 0x2000) > v16 )
    v23 = v16;
  v24 = a6;
  v25 = &v18[v17];
  v58 = v23;
  if ( v23 < (unsigned __int64)v25 )
    v25 = (char *)v23;
  v26 = v19 & 0x3FFF;
  v60 = v26;
  if ( (unsigned __int64)v22 < v23 )
  {
    v27 = &a6[8 * v26 + 0x40000];
    v60 = v23 - (_WORD)v22 + v26;
    do
    {
      v28 = (unsigned __int16)XpressHashFunction[v22[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v22] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v22[1] + 256];
      *(_QWORD *)v27 = *(_QWORD *)&a6[8 * v28];
      v27 += 8;
      *(_QWORD *)&a6[8 * v28] = v22++;
    }
    while ( (unsigned __int64)v22 < v23 );
    v57 = v22;
  }
LABEL_17:
  while ( 2 )
  {
    v29 = (unsigned __int64)(v18 - 0x2000);
    while ( 1 )
    {
      if ( v18 >= v25 )
      {
        if ( (unsigned __int64)v18 >= v23 )
        {
          v17 = a9;
          v16 = (unsigned __int64)(v14 - 5);
          v19 = v60;
          v22 = v57;
          if ( v18 >= (char *)v14 - 5 )
          {
            v46 = v63;
            goto LABEL_94;
          }
          goto LABEL_9;
        }
        XpressCallback = RtlpMakeXpressCallback((__int64)v61, v23, (__int64)v18);
        v24 = a6;
        v25 = (char *)XpressCallback;
        v23 = v58;
      }
      v31 = *(_DWORD *)v18;
      v32 = *(_QWORD *)&v24[8 * ((0x2000 - (_WORD)a1 + (_WORD)v29) & 0x3FFF) + 0x40000];
      if ( v32 >= v29 )
      {
        v33 = v31 ^ *(_DWORD *)v32;
        if ( !v33 )
          goto LABEL_33;
        if ( (v33 & 0xFFFFFF) == 0 )
          goto LABEL_32;
        v32 = *(_QWORD *)&v24[8 * (((_WORD)v32 - (_WORD)a1) & 0x3FFF) + 0x40000];
        if ( v32 >= v29 )
        {
          v34 = v31 ^ *(_DWORD *)v32;
          if ( !v34 )
            goto LABEL_33;
          if ( (v34 & 0xFFFFFF) == 0 )
          {
LABEL_32:
            v36 = 0LL;
            v29 = (unsigned __int64)(v18 - 0x2000);
            v37 = 3LL;
            v13 = (__int64)&v18[-v32];
            goto LABEL_68;
          }
          v32 = *(_QWORD *)&v24[8 * (((_WORD)v32 - (_WORD)a1) & 0x3FFF) + 0x40000];
          if ( v32 >= v29 )
            break;
        }
      }
LABEL_30:
      *v21 = v31;
      ++v18;
      ++v21;
      ++v29;
      if ( v20 <= 0 )
      {
        v49 = v63;
        v50 = 2 * v20;
        v63 = (int *)v21;
        v46 = (int *)v21;
        v21 += 4;
        v20 = 1;
        *v49 = v50;
        if ( (unsigned __int64)v21 >= v56 )
          goto LABEL_94;
        goto LABEL_17;
      }
      v20 *= 2;
    }
    v35 = v31 ^ *(_DWORD *)v32;
    if ( v35 )
    {
      if ( (v35 & 0xFFFFFF) == 0 )
        goto LABEL_32;
      goto LABEL_30;
    }
LABEL_33:
    v37 = 3LL;
LABEL_34:
    v38 = v18;
    v39 = (unsigned __int8 *)(v18 + 4);
    v32 += 4LL;
    for ( i = v39 + 32; ; i += 32 )
    {
      if ( i >= v14 )
      {
        while ( v39 < v14 && *v39 == *(_BYTE *)v32 )
        {
          ++v39;
          ++v32;
        }
        goto LABEL_62;
      }
      if ( *(_DWORD *)v39 != *(_DWORD *)v32 )
        break;
      if ( *((_DWORD *)v39 + 1) != *(_DWORD *)(v32 + 4) )
      {
        v39 += 4;
        v32 += 4LL;
        break;
      }
      if ( *((_DWORD *)v39 + 2) != *(_DWORD *)(v32 + 8) )
      {
        v39 += 8;
        v32 += 8LL;
        break;
      }
      if ( *((_DWORD *)v39 + 3) != *(_DWORD *)(v32 + 12) )
      {
        v39 += 12;
        v32 += 12LL;
        break;
      }
      if ( *((_DWORD *)v39 + 4) != *(_DWORD *)(v32 + 16) )
      {
        v39 += 16;
        v32 += 16LL;
        break;
      }
      if ( *((_DWORD *)v39 + 5) != *(_DWORD *)(v32 + 20) )
      {
        v39 += 20;
        v32 += 20LL;
        break;
      }
      if ( *((_DWORD *)v39 + 6) != *(_DWORD *)(v32 + 24) )
      {
        v39 += 24;
        v32 += 24LL;
        break;
      }
      if ( *((_DWORD *)v39 + 7) != *(_DWORD *)(v32 + 28) )
      {
        v39 += 28;
        v32 += 28LL;
        break;
      }
      v32 += 32LL;
      v39 = i;
    }
    if ( *v39 == *(_BYTE *)v32 )
    {
      v24 = a6;
      if ( v39[1] == *(_BYTE *)(v32 + 1) )
      {
        if ( v39[2] == *(_BYTE *)(v32 + 2) )
        {
          v39 += 3;
          v32 += 3LL;
        }
        else
        {
          v39 += 2;
          v32 += 2LL;
        }
      }
      else
      {
        ++v39;
        ++v32;
      }
    }
LABEL_62:
    v41 = v39 - (unsigned __int8 *)v38;
    if ( v39 - (unsigned __int8 *)v38 <= v37 )
    {
      v36 = v41 + v54;
      goto LABEL_66;
    }
    v37 = v39 - (unsigned __int8 *)v38;
    v13 = (__int64)&v39[-v32];
    if ( v32 > (unsigned __int64)v38 )
    {
      v18 = v38;
    }
    else
    {
      v36 = v54;
LABEL_66:
      LOWORD(v32) = v32 - v41;
      v18 = v38;
      while ( 1 )
      {
        v54 = ++v36;
        if ( v36 >= 0x18 )
          break;
LABEL_68:
        v32 = *(_QWORD *)&v24[8 * (((_WORD)v32 - (_WORD)a1) & 0x3FFF) + 0x40000];
        if ( v32 < v29 )
          break;
        if ( v31 == *(_DWORD *)v32 )
          goto LABEL_34;
      }
    }
    v18 += v37;
    v54 = 0LL;
    v42 = 8 * v13 - 8;
    if ( v37 - 3 < 7 )
    {
      v13 = v37 - 3 + v42;
      *(_WORD *)v21 = v13;
      v21 += 2;
      goto LABEL_85;
    }
    v43 = v55;
    v13 = v42 | 7;
    *(_WORD *)v21 = v13;
    v44 = v37 - 10;
    v21 += 2;
    if ( v55 )
    {
      v55 = 0LL;
      if ( v44 >= 0xF )
      {
        *v43 |= 0xF0u;
        goto LABEL_80;
      }
      *v43 |= 16 * (_BYTE)v44;
    }
    else
    {
      v55 = v21;
      if ( v44 >= 0xF )
      {
        *v21++ = 15;
LABEL_80:
        v44 = v37 - 25;
        if ( v37 - 25 >= 0xFF )
        {
          v45 = v44 + 22;
          *v21 = -1;
          if ( v45 >= 0x10000 )
          {
            *(_WORD *)(v21 + 1) = 0;
            *(_DWORD *)(v21 + 3) = v45;
            v21 += 7;
          }
          else
          {
            *(_WORD *)(v21 + 1) = v45;
            v21 += 3;
          }
          goto LABEL_85;
        }
      }
      *v21++ = v44;
    }
LABEL_85:
    if ( v20 <= 0 )
    {
      v47 = v63;
      v48 = 2 * v20 + 1;
      v46 = (int *)v21;
      v63 = (int *)v21;
      v20 = 1;
      v21 += 4;
      *v47 = v48;
    }
    else
    {
      v46 = v63;
      v20 = 2 * v20 + 1;
    }
    if ( (unsigned __int64)v21 < v56 )
    {
      v23 = v58;
      continue;
    }
    break;
  }
LABEL_94:
  while ( v18 < (char *)v14 )
  {
    if ( (unsigned __int64)v21 >= v59 )
      return 3221225507LL;
    v51 = *v18++;
    *v21++ = v51;
    if ( v20 <= 0 )
    {
      v52 = 2 * v20;
      v20 = 1;
      *v46 = v52;
      v46 = (int *)v21;
      v21 += 4;
    }
    else
    {
      v20 *= 2;
    }
  }
  if ( (unsigned __int64)v21 >= v59 )
    return 3221225507LL;
  while ( v20 > 0 )
    v20 = 2 * v20 + 1;
  v53 = (_DWORD)v21 - v64;
  *v46 = 2 * v20 + 1;
  if ( v53 < 8 )
    v53 = 8;
  *a5 = v53;
  return 0LL;
}
