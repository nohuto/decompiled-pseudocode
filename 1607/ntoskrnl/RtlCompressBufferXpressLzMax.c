/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1402177D0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x140080D7C (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x14011469C (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140114480 (RtlpMakeXpressCallback.c)
 *     memset @ 0x140171AC0 (memset.c)
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
  __int64 v10; // r12
  unsigned __int64 v12; // rdi
  unsigned __int8 *v14; // rbp
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  char *v18; // rdi
  int *v19; // r11
  int v20; // esi
  _BYTE *v21; // rbx
  __int16 v22; // r10
  unsigned __int8 *v23; // r14
  char *v24; // r8
  unsigned __int64 v25; // r9
  char *v26; // rax
  __int64 v27; // r10
  char *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r15
  unsigned __int64 XpressCallback; // rax
  int v32; // r10d
  unsigned __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r14
  char *v39; // r9
  unsigned __int8 *v40; // rdi
  unsigned __int8 *i; // rcx
  __int64 v42; // rax
  __int64 v43; // r12
  _BYTE *v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  char v47; // al
  int v48; // eax
  unsigned int v49; // ebx
  unsigned __int64 v50; // [rsp+28h] [rbp-90h]
  _BYTE *v51; // [rsp+30h] [rbp-88h]
  int *v52; // [rsp+38h] [rbp-80h]
  unsigned __int64 v53; // [rsp+40h] [rbp-78h]
  unsigned __int64 v54; // [rsp+48h] [rbp-70h]
  __int16 v55; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v56; // [rsp+58h] [rbp-60h]
  unsigned __int64 v57; // [rsp+60h] [rbp-58h]
  _QWORD v58[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-40h]
  unsigned __int64 v60; // [rsp+C0h] [rbp+8h]
  int v61; // [rsp+D0h] [rbp+18h]

  v61 = a3;
  v10 = 0LL;
  v12 = a3 + a4;
  v57 = v12;
  v14 = &a1[a2];
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( (unsigned __int64)a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v53 = v12 - 41;
  v16 = (unsigned __int64)(v14 - 5);
  v51 = 0LL;
  if ( !a7 || (v17 = a9, a9 > a2) )
  {
    v17 = a2;
    a9 = a2;
  }
  v58[0] = a7;
  v18 = (char *)(a1 + 1);
  v58[1] = a8;
  v19 = (int *)a3;
  v20 = 2;
  *(_BYTE *)(a3 + 4) = *a1;
  v21 = (_BYTE *)(a3 + 5);
  v52 = (int *)a3;
  v60 = 0LL;
  v22 = 0;
  v59 = v17;
  v23 = a1;
  v56 = a1;
LABEL_9:
  v24 = a6;
  v25 = (unsigned __int64)(v23 + 0x2000);
  if ( (unsigned __int64)(v23 + 0x2000) > v16 )
    v25 = v16;
  v26 = &v18[v17];
  v54 = v25;
  if ( v25 < (unsigned __int64)v26 )
    v26 = (char *)v25;
  v27 = v22 & 0x3FFF;
  v50 = (unsigned __int64)v26;
  v55 = v27;
  if ( (unsigned __int64)v23 < v25 )
  {
    v28 = &a6[8 * v27 + 0x40000];
    v55 = v25 - (_WORD)v23 + v27;
    do
    {
      v29 = (unsigned __int16)XpressHashFunction[v23[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v23] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v23[1] + 256];
      *(_QWORD *)v28 = *(_QWORD *)&a6[8 * v29];
      v28 += 8;
      *(_QWORD *)&a6[8 * v29] = v23++;
    }
    while ( (unsigned __int64)v23 < v25 );
    v56 = v23;
LABEL_17:
    v26 = (char *)v50;
  }
  v30 = (unsigned __int64)(v18 - 0x2000);
  while ( 1 )
  {
    if ( v18 >= v26 )
    {
      if ( (unsigned __int64)v18 >= v25 )
      {
        v17 = a9;
        v16 = (unsigned __int64)(v14 - 5);
        v22 = v55;
        v23 = v56;
        if ( v18 >= (char *)v14 - 5 )
          goto LABEL_95;
        goto LABEL_9;
      }
      XpressCallback = RtlpMakeXpressCallback((__int64)v58, v25, (__int64)v18);
      v19 = v52;
      v24 = a6;
      v25 = v54;
      v50 = XpressCallback;
    }
    v32 = *(_DWORD *)v18;
    v33 = *(_QWORD *)&v24[8 * ((0x2000 - (_WORD)a1 + (_WORD)v30) & 0x3FFF) + 0x40000];
    if ( v33 >= v30 )
    {
      v34 = v32 ^ *(_DWORD *)v33;
      if ( !v34 )
        goto LABEL_37;
      if ( (v34 & 0xFFFFFF) == 0 )
        goto LABEL_36;
      v33 = *(_QWORD *)&v24[8 * (((_WORD)v33 - (_WORD)a1) & 0x3FFF) + 0x40000];
      if ( v33 >= v30 )
      {
        v35 = v32 ^ *(_DWORD *)v33;
        if ( !v35 )
          goto LABEL_37;
        if ( (v35 & 0xFFFFFF) == 0 )
        {
LABEL_36:
          v37 = 0LL;
          v30 = (unsigned __int64)(v18 - 0x2000);
          v38 = 3LL;
          v10 = (__int64)&v18[-v33];
          goto LABEL_72;
        }
        v33 = *(_QWORD *)&v24[8 * (((_WORD)v33 - (_WORD)a1) & 0x3FFF) + 0x40000];
        if ( v33 >= v30 )
          break;
      }
    }
LABEL_31:
    *v21 = v32;
    ++v18;
    ++v21;
    ++v30;
    if ( v20 <= 0 )
    {
      v52 = (int *)v21;
      *v19 = 2 * v20;
      v20 = 1;
      v19 = (int *)v21;
      v21 += 4;
      if ( (unsigned __int64)v21 >= v53 )
        goto LABEL_95;
    }
    else
    {
      v20 *= 2;
    }
    v26 = (char *)v50;
  }
  v36 = v32 ^ *(_DWORD *)v33;
  if ( v36 )
  {
    if ( (v36 & 0xFFFFFF) == 0 )
      goto LABEL_36;
    goto LABEL_31;
  }
LABEL_37:
  v38 = 3LL;
LABEL_38:
  v39 = v18;
  v40 = (unsigned __int8 *)(v18 + 4);
  v33 += 4LL;
  for ( i = v40 + 32; ; i += 32 )
  {
    if ( i >= v14 )
    {
      while ( v40 < v14 && *v40 == *(_BYTE *)v33 )
      {
        ++v40;
        ++v33;
      }
      goto LABEL_66;
    }
    if ( *(_DWORD *)v40 != *(_DWORD *)v33 )
      break;
    if ( *((_DWORD *)v40 + 1) != *(_DWORD *)(v33 + 4) )
    {
      v40 += 4;
      v33 += 4LL;
      break;
    }
    if ( *((_DWORD *)v40 + 2) != *(_DWORD *)(v33 + 8) )
    {
      v40 += 8;
      v33 += 8LL;
      break;
    }
    if ( *((_DWORD *)v40 + 3) != *(_DWORD *)(v33 + 12) )
    {
      v40 += 12;
      v33 += 12LL;
      break;
    }
    if ( *((_DWORD *)v40 + 4) != *(_DWORD *)(v33 + 16) )
    {
      v40 += 16;
      v33 += 16LL;
      break;
    }
    if ( *((_DWORD *)v40 + 5) != *(_DWORD *)(v33 + 20) )
    {
      v40 += 20;
      v33 += 20LL;
      break;
    }
    if ( *((_DWORD *)v40 + 6) != *(_DWORD *)(v33 + 24) )
    {
      v40 += 24;
      v33 += 24LL;
      break;
    }
    if ( *((_DWORD *)v40 + 7) != *(_DWORD *)(v33 + 28) )
    {
      v40 += 28;
      v33 += 28LL;
      break;
    }
    v33 += 32LL;
    v40 = i;
  }
  if ( *v40 == *(_BYTE *)v33 )
  {
    v24 = a6;
    if ( v40[1] == *(_BYTE *)(v33 + 1) )
    {
      if ( v40[2] == *(_BYTE *)(v33 + 2) )
      {
        v40 += 3;
        v33 += 3LL;
      }
      else
      {
        v40 += 2;
        v33 += 2LL;
      }
    }
    else
    {
      ++v40;
      ++v33;
    }
  }
LABEL_66:
  v42 = v40 - (unsigned __int8 *)v39;
  if ( v40 - (unsigned __int8 *)v39 <= v38 )
  {
    v37 = v42 + v60;
    goto LABEL_70;
  }
  v38 = v40 - (unsigned __int8 *)v39;
  v10 = (__int64)&v40[-v33];
  if ( v33 > (unsigned __int64)v39 )
  {
    v18 = v39;
  }
  else
  {
    v37 = v60;
LABEL_70:
    LOWORD(v33) = v33 - v42;
    v18 = v39;
    while ( 1 )
    {
      v60 = ++v37;
      if ( v37 >= 0x18 )
        break;
LABEL_72:
      v33 = *(_QWORD *)&v24[8 * (((_WORD)v33 - (_WORD)a1) & 0x3FFF) + 0x40000];
      if ( v33 < v30 )
        break;
      if ( v32 == *(_DWORD *)v33 )
        goto LABEL_38;
    }
  }
  v18 += v38;
  v60 = 0LL;
  v43 = 8 * v10 - 8;
  if ( v38 - 3 < 7 )
  {
    v10 = v38 - 3 + v43;
    *(_WORD *)v21 = v10;
    v21 += 2;
    goto LABEL_89;
  }
  v44 = v51;
  v10 = v43 | 7;
  *(_WORD *)v21 = v10;
  v45 = v38 - 10;
  v21 += 2;
  if ( v51 )
  {
    v51 = 0LL;
    if ( v45 >= 0xF )
    {
      *v44 |= 0xF0u;
      goto LABEL_84;
    }
    *v44 |= 16 * (_BYTE)v45;
  }
  else
  {
    v51 = v21;
    if ( v45 >= 0xF )
    {
      *v21++ = 15;
LABEL_84:
      v45 = v38 - 25;
      if ( v38 - 25 >= 0xFF )
      {
        v46 = v45 + 22;
        *v21 = -1;
        if ( v46 >= 0x10000 )
        {
          *(_WORD *)(v21 + 1) = 0;
          *(_DWORD *)(v21 + 3) = v46;
          v21 += 7;
        }
        else
        {
          *(_WORD *)(v21 + 1) = v46;
          v21 += 3;
        }
        goto LABEL_89;
      }
    }
    *v21++ = v45;
  }
LABEL_89:
  if ( v20 <= 0 )
  {
    v52 = (int *)v21;
    *v19 = 2 * v20 + 1;
    v20 = 1;
    v19 = (int *)v21;
    v21 += 4;
  }
  else
  {
    v20 = 2 * v20 + 1;
  }
  if ( (unsigned __int64)v21 < v53 )
  {
    v25 = v54;
    goto LABEL_17;
  }
LABEL_95:
  while ( v18 < (char *)v14 )
  {
    if ( (unsigned __int64)v21 >= v57 )
      return 3221225507LL;
    v47 = *v18++;
    *v21++ = v47;
    if ( v20 <= 0 )
    {
      v48 = 2 * v20;
      v20 = 1;
      *v19 = v48;
      v19 = (int *)v21;
      v21 += 4;
    }
    else
    {
      v20 *= 2;
    }
  }
  if ( (unsigned __int64)v21 >= v57 )
    return 3221225507LL;
  while ( v20 > 0 )
    v20 = 2 * v20 + 1;
  v49 = (_DWORD)v21 - v61;
  *v19 = 2 * v20 + 1;
  if ( v49 < 8 )
    v49 = 8;
  *a5 = v49;
  return 0LL;
}
