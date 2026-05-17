/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1800FC530
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180002EF0 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1800FCAEC (RtlpMakeXpressCallback.c)
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
  __int64 v7; // r12
  unsigned __int64 v9; // rbx
  unsigned __int8 *v11; // rbp
  __int16 v13; // cx
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rdx
  int *v16; // r11
  int v17; // esi
  _BYTE *v18; // rbx
  unsigned __int8 *v19; // rdi
  unsigned __int8 *v20; // r10
  char *v21; // r8
  unsigned __int8 *v22; // r9
  unsigned __int8 *v23; // rax
  __int64 v24; // rcx
  char *v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r15
  __int64 XpressCallback; // rax
  int v29; // r10d
  unsigned __int64 v30; // rdx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r14
  unsigned __int8 *v36; // r9
  unsigned __int8 *v37; // rdi
  unsigned __int8 *i; // rcx
  __int64 v39; // rax
  __int64 v40; // r12
  _BYTE *v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  char v44; // al
  int v45; // eax
  unsigned int v46; // ebx
  _BYTE *v47; // [rsp+20h] [rbp-88h]
  int *v48; // [rsp+28h] [rbp-80h]
  unsigned __int64 v49; // [rsp+30h] [rbp-78h]
  unsigned __int8 *v50; // [rsp+38h] [rbp-70h]
  __int16 v51; // [rsp+40h] [rbp-68h]
  unsigned __int8 *v52; // [rsp+48h] [rbp-60h]
  unsigned __int64 v53; // [rsp+50h] [rbp-58h]
  _QWORD v54[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v55; // [rsp+68h] [rbp-40h]
  unsigned __int64 v56; // [rsp+B0h] [rbp+8h]
  int v57; // [rsp+C0h] [rbp+18h]
  __int64 v60; // [rsp+E8h] [rbp+40h]

  v57 = a3;
  v6 = a2;
  v7 = 0LL;
  v9 = a3 + a4;
  v53 = v9;
  v11 = &a1[a2];
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( (unsigned __int64)a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v48 = (int *)a3;
  v13 = 0;
  v49 = v9 - 41;
  v14 = *a1;
  v54[0] = 0LL;
  v15 = (unsigned __int64)(v11 - 5);
  v54[1] = 0LL;
  v16 = (int *)a3;
  *(_BYTE *)(a3 + 4) = v14;
  v17 = 2;
  v18 = (_BYTE *)(a3 + 5);
  v47 = 0LL;
  v55 = v6;
  v56 = 0LL;
  v19 = a1 + 1;
  v20 = a1;
  v52 = a1;
LABEL_6:
  v21 = a6;
  v22 = v20 + 0x2000;
  if ( (unsigned __int64)(v20 + 0x2000) > v15 )
    v22 = (unsigned __int8 *)v15;
  v23 = &v19[v6];
  v50 = v22;
  if ( v22 < v23 )
    v23 = v22;
  v24 = v13 & 0x3FFF;
  v60 = (__int64)v23;
  v51 = v24;
  if ( v20 < v22 )
  {
    v25 = &a6[8 * v24 + 0x40000];
    v51 = (_WORD)v22 - (_WORD)v20 + v24;
    do
    {
      v26 = (unsigned __int16)XpressHashFunction[v20[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v20] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v20[1] + 256];
      *(_QWORD *)v25 = *(_QWORD *)&a6[8 * v26];
      v25 += 8;
      *(_QWORD *)&a6[8 * v26] = v20++;
    }
    while ( v20 < v22 );
    v52 = v20;
LABEL_14:
    v23 = (unsigned __int8 *)v60;
  }
  v27 = (unsigned __int64)(v19 - 0x2000);
  while ( 1 )
  {
    if ( v19 >= v23 )
    {
      if ( v19 >= v22 )
      {
        v6 = a2;
        v15 = (unsigned __int64)(v11 - 5);
        v13 = v51;
        v20 = v52;
        if ( v19 >= v11 - 5 )
          goto LABEL_92;
        goto LABEL_6;
      }
      XpressCallback = RtlpMakeXpressCallback(v54, v22, v19);
      v16 = v48;
      v22 = v50;
      v21 = a6;
      v60 = XpressCallback;
    }
    v29 = *(_DWORD *)v19;
    v30 = *(_QWORD *)&v21[8 * ((0x2000 - (_WORD)a1 + (_WORD)v27) & 0x3FFF) + 0x40000];
    if ( v30 >= v27 )
    {
      v31 = v29 ^ *(_DWORD *)v30;
      if ( !v31 )
        goto LABEL_34;
      if ( (v31 & 0xFFFFFF) == 0 )
        goto LABEL_33;
      v30 = *(_QWORD *)&v21[8 * (((_WORD)v30 - (_WORD)a1) & 0x3FFF) + 0x40000];
      if ( v30 >= v27 )
      {
        v32 = v29 ^ *(_DWORD *)v30;
        if ( !v32 )
          goto LABEL_34;
        if ( (v32 & 0xFFFFFF) == 0 )
        {
LABEL_33:
          v34 = 0LL;
          v27 = (unsigned __int64)(v19 - 0x2000);
          v35 = 3LL;
          v7 = (__int64)&v19[-v30];
          goto LABEL_69;
        }
        v30 = *(_QWORD *)&v21[8 * (((_WORD)v30 - (_WORD)a1) & 0x3FFF) + 0x40000];
        if ( v30 >= v27 )
          break;
      }
    }
LABEL_28:
    *v18 = v29;
    ++v19;
    ++v18;
    ++v27;
    if ( v17 <= 0 )
    {
      v48 = (int *)v18;
      *v16 = 2 * v17;
      v17 = 1;
      v16 = (int *)v18;
      v18 += 4;
      if ( (unsigned __int64)v18 >= v49 )
        goto LABEL_92;
    }
    else
    {
      v17 *= 2;
    }
    v23 = (unsigned __int8 *)v60;
  }
  v33 = v29 ^ *(_DWORD *)v30;
  if ( v33 )
  {
    if ( (v33 & 0xFFFFFF) == 0 )
      goto LABEL_33;
    goto LABEL_28;
  }
LABEL_34:
  v35 = 3LL;
LABEL_35:
  v36 = v19;
  v37 = v19 + 4;
  v30 += 4LL;
  for ( i = v37 + 32; ; i += 32 )
  {
    if ( i >= v11 )
    {
      while ( v37 < v11 && *v37 == *(_BYTE *)v30 )
      {
        ++v37;
        ++v30;
      }
      goto LABEL_63;
    }
    if ( *(_DWORD *)v37 != *(_DWORD *)v30 )
      break;
    if ( *((_DWORD *)v37 + 1) != *(_DWORD *)(v30 + 4) )
    {
      v37 += 4;
      v30 += 4LL;
      break;
    }
    if ( *((_DWORD *)v37 + 2) != *(_DWORD *)(v30 + 8) )
    {
      v37 += 8;
      v30 += 8LL;
      break;
    }
    if ( *((_DWORD *)v37 + 3) != *(_DWORD *)(v30 + 12) )
    {
      v37 += 12;
      v30 += 12LL;
      break;
    }
    if ( *((_DWORD *)v37 + 4) != *(_DWORD *)(v30 + 16) )
    {
      v37 += 16;
      v30 += 16LL;
      break;
    }
    if ( *((_DWORD *)v37 + 5) != *(_DWORD *)(v30 + 20) )
    {
      v37 += 20;
      v30 += 20LL;
      break;
    }
    if ( *((_DWORD *)v37 + 6) != *(_DWORD *)(v30 + 24) )
    {
      v37 += 24;
      v30 += 24LL;
      break;
    }
    if ( *((_DWORD *)v37 + 7) != *(_DWORD *)(v30 + 28) )
    {
      v37 += 28;
      v30 += 28LL;
      break;
    }
    v30 += 32LL;
    v37 = i;
  }
  if ( *v37 == *(_BYTE *)v30 )
  {
    v21 = a6;
    if ( v37[1] == *(_BYTE *)(v30 + 1) )
    {
      if ( v37[2] == *(_BYTE *)(v30 + 2) )
      {
        v37 += 3;
        v30 += 3LL;
      }
      else
      {
        v37 += 2;
        v30 += 2LL;
      }
    }
    else
    {
      ++v37;
      ++v30;
    }
  }
LABEL_63:
  v39 = v37 - v36;
  if ( v37 - v36 <= v35 )
  {
    v34 = v39 + v56;
    goto LABEL_67;
  }
  v35 = v37 - v36;
  v7 = (__int64)&v37[-v30];
  if ( v30 > (unsigned __int64)v36 )
  {
    v19 = v36;
  }
  else
  {
    v34 = v56;
LABEL_67:
    LOWORD(v30) = v30 - v39;
    v19 = v36;
    while ( 1 )
    {
      v56 = ++v34;
      if ( v34 >= 0x18 )
        break;
LABEL_69:
      v30 = *(_QWORD *)&v21[8 * (((_WORD)v30 - (_WORD)a1) & 0x3FFF) + 0x40000];
      if ( v30 < v27 )
        break;
      if ( v29 == *(_DWORD *)v30 )
        goto LABEL_35;
    }
  }
  v19 += v35;
  v56 = 0LL;
  v40 = 8 * v7 - 8;
  if ( v35 - 3 < 7 )
  {
    v7 = v35 - 3 + v40;
    *(_WORD *)v18 = v7;
    v18 += 2;
    goto LABEL_86;
  }
  v41 = v47;
  v7 = v40 | 7;
  *(_WORD *)v18 = v7;
  v42 = v35 - 10;
  v18 += 2;
  if ( v47 )
  {
    v47 = 0LL;
    if ( v42 >= 0xF )
    {
      *v41 |= 0xF0u;
      goto LABEL_81;
    }
    *v41 |= 16 * (_BYTE)v42;
  }
  else
  {
    v47 = v18;
    if ( v42 >= 0xF )
    {
      *v18++ = 15;
LABEL_81:
      v42 = v35 - 25;
      if ( v35 - 25 >= 0xFF )
      {
        v43 = v42 + 22;
        *v18 = -1;
        if ( v43 >= 0x10000 )
        {
          *(_WORD *)(v18 + 1) = 0;
          *(_DWORD *)(v18 + 3) = v43;
          v18 += 7;
        }
        else
        {
          *(_WORD *)(v18 + 1) = v43;
          v18 += 3;
        }
        goto LABEL_86;
      }
    }
    *v18++ = v42;
  }
LABEL_86:
  if ( v17 <= 0 )
  {
    v48 = (int *)v18;
    *v16 = 2 * v17 + 1;
    v17 = 1;
    v16 = (int *)v18;
    v18 += 4;
  }
  else
  {
    v17 = 2 * v17 + 1;
  }
  if ( (unsigned __int64)v18 < v49 )
  {
    v22 = v50;
    goto LABEL_14;
  }
LABEL_92:
  while ( v19 < v11 )
  {
    if ( (unsigned __int64)v18 >= v53 )
      return 3221225507LL;
    v44 = *v19++;
    *v18++ = v44;
    if ( v17 <= 0 )
    {
      v45 = 2 * v17;
      v17 = 1;
      *v16 = v45;
      v16 = (int *)v18;
      v18 += 4;
    }
    else
    {
      v17 *= 2;
    }
  }
  if ( (unsigned __int64)v18 >= v53 )
    return 3221225507LL;
  while ( v17 > 0 )
    v17 = 2 * v17 + 1;
  v46 = (_DWORD)v18 - v57;
  *v16 = 2 * v17 + 1;
  if ( v46 < 8 )
    v46 = 8;
  *a5 = v46;
  return 0LL;
}
