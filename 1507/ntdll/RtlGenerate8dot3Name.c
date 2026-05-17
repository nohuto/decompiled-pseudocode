/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800DFD70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     GetNextWchar @ 0x1800DFBF4 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800DFCF0 (RtlComputeLfnChecksum.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, unsigned __int16 *a4)
{
  char v5; // r8
  unsigned __int16 *v6; // r15
  char v9; // r12
  unsigned int v10; // esi
  __int16 NextWchar; // ax
  unsigned int v12; // edi
  __int64 v13; // r15
  bool v14; // zf
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // cx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned int v19; // r8d
  unsigned __int16 v20; // r11
  __int16 v21; // dx
  __int64 v22; // rax
  __int16 v23; // dx
  unsigned int v24; // edi
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int16 v29; // ax
  int v30; // r11d
  unsigned __int16 v31; // r9
  __int64 v32; // r8
  _WORD *v33; // r10
  __int16 v34; // ax
  unsigned __int16 v35; // cx
  unsigned int v36; // ecx
  unsigned int v37; // edi
  char v38; // bp
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int i; // edx
  int v45; // eax
  unsigned int v47; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+24h] [rbp-64h] BYREF
  int v49; // [rsp+28h] [rbp-60h]
  _QWORD v50[2]; // [rsp+30h] [rbp-58h] BYREF

  v50[0] = a4;
  v5 = 0;
  LOBYTE(v49) = 1;
  v6 = a4;
  if ( !a2 || (v9 = 1, !NlsMbOemCodePageTag) )
    v9 = 0;
  if ( !*(_BYTE *)(a3 + 3) )
  {
    v10 = -1;
    v47 = 0;
    if ( *a1 && **((_WORD **)a1 + 1) == 46 )
      v5 = 1;
    while ( 1 )
    {
      NextWchar = GetNextWchar(a1, &v47, v5, a2);
      if ( !NextWchar )
        break;
      v5 = 0;
      if ( NextWchar == 46 )
        v10 = v47;
    }
    v12 = 0;
    v13 = NlsUnicodeToMbOemData;
    v14 = v10 == *a1 >> 1;
    v47 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    if ( v14 )
      v10 = -1;
    v48 = v10;
    while ( 1 )
    {
      v15 = GetNextWchar(a1, &v47, 1, a2);
      v16 = v15;
      if ( !v15 || v47 >= v10 || *(_BYTE *)(a3 + 3) >= 6u )
        break;
      if ( v9 )
      {
        if ( v15 <= 0x7Fu || (v14 = *(_BYTE *)(v13 + 2LL * v15 + 1) == 0, v17 = 2, v14) )
          v17 = 1;
        v12 += v17;
        if ( v12 > 6 )
          break;
      }
      *(_WORD *)(a3 + 2LL * (unsigned __int8)(*(_BYTE *)(a3 + 3))++ + 4) = v16;
    }
    if ( !v9 )
      v12 = *(unsigned __int8 *)(a3 + 3);
    v6 = (unsigned __int16 *)v50[0];
    if ( v12 <= 2 )
    {
      v18 = RtlComputeLfnChecksum(a1);
      v19 = 0;
      *(_WORD *)a3 = v18;
      v20 = v18;
      do
      {
        v21 = 55;
        if ( (v20 & 0xFu) <= 9 )
          v21 = 48;
        v22 = v19 + *(unsigned __int8 *)(a3 + 3);
        v23 = (v20 & 0xF) + v21;
        v20 >>= 4;
        ++v19;
        *(_WORD *)(a3 + 2 * v22 + 4) = v23;
      }
      while ( v19 < 4 );
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v10 == -1 )
    {
      *(_DWORD *)(a3 + 20) = 0;
    }
    else
    {
      *(_WORD *)(a3 + 24) = 46;
      v24 = 1;
      for ( *(_DWORD *)(a3 + 20) = 1; ; ++*(_DWORD *)(a3 + 20) )
      {
        v25 = GetNextWchar(a1, &v48, 1, a2);
        v26 = v25;
        if ( !v25 )
          break;
        if ( *(_DWORD *)(a3 + 20) >= 4u )
          goto LABEL_41;
        if ( v9 )
        {
          if ( v25 <= 0x7Fu || (v27 = v25, v28 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v27 + 1)) )
            v28 = 1;
          v24 += v28;
          if ( v24 > 4 )
          {
LABEL_41:
            *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 20) - 1) + 24) = 126;
            break;
          }
        }
        *(_WORD *)(a3 + 2LL * *(unsigned int *)(a3 + 20) + 24) = v26;
      }
    }
  }
  if ( ++*(_DWORD *)(a3 + 32) > 4u && !*(_BYTE *)(a3 + 2) )
  {
    v29 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v29;
    v31 = v29;
    if ( 2 - v30 < (unsigned int)(6 - v30) )
    {
      v32 = 4LL;
      v33 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v30) + 2LL));
      do
      {
        v34 = 55;
        v35 = v31 & 0xF;
        if ( v35 <= 9u )
          v34 = 48;
        v31 >>= 4;
        *v33++ = v35 + v34;
        --v32;
      }
      while ( v32 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v30;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v36 = *(_DWORD *)(a3 + 32);
  v37 = 1;
  v38 = v49;
  do
  {
    if ( !v36 )
      break;
    v39 = v36 / 0xA;
    v40 = 8 - v37;
    v41 = v36 % 0xA + 48;
    if ( (_WORD)v41 != 57 )
      v38 = 0;
    ++v37;
    *((_WORD *)v50 + v40) = v41;
    v36 = v39;
  }
  while ( v37 <= 7 );
  *((_WORD *)v50 + 8 - v37) = 126;
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 3) - 1) > 0xBu )
  {
    *v6 = 0;
  }
  else
  {
    memmove(*((void **)v6 + 1), (const void *)(a3 + 4), 2 * *(unsigned __int8 *)(a3 + 3));
    *v6 = 2 * *(unsigned __int8 *)(a3 + 3);
  }
  memmove((void *)(*((_QWORD *)v6 + 1) + 2 * ((unsigned __int64)*v6 >> 1)), (char *)v50 + 2 * (8 - v37), 2 * v37);
  *v6 += 2 * v37;
  v42 = *(_DWORD *)(a3 + 20);
  if ( v42 )
  {
    memmove(
      (void *)(*((_QWORD *)v6 + 1) + 2 * ((unsigned __int64)*v6 >> 1)),
      (const void *)(a3 + 24),
      (unsigned int)(2 * v42));
    *v6 += 2 * *(_WORD *)(a3 + 20);
  }
  if ( !v38 )
    return 0LL;
  if ( v9 )
  {
    v43 = 0;
    for ( i = 0; v43 < *(unsigned __int8 *)(a3 + 3); ++v43 )
    {
      if ( *(_WORD *)(a3 + 2LL * v43 + 4) <= 0x7Fu
        || (v45 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * *(unsigned __int16 *)(a3 + 2LL * v43 + 4) + 1)) )
      {
        v45 = 1;
      }
      i += v45;
      if ( i > 7 - v37 )
        break;
    }
    *(_BYTE *)(a3 + 3) = v43;
  }
  else
  {
    --*(_BYTE *)(a3 + 3);
  }
  if ( *(_BYTE *)(a3 + 3) )
    return 0LL;
  else
    return 3221226535LL;
}
