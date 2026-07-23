/*
 * XREFs of BgpGxFindSubRectangle @ 0x140727760
 * Callers:
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     BgpGxRectangleCreate @ 0x1407276DC (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxFindSubRectangle(unsigned int *a1, int a2, __int64 *a3, unsigned int *a4, _BYTE *a5)
{
  unsigned int *v5; // r13
  __int64 *v6; // r12
  unsigned int *v7; // r14
  unsigned int v8; // r11d
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // r15d
  unsigned int v16; // ebp
  unsigned int v17; // edx
  unsigned int i; // ecx
  int v19; // ebx
  __int64 v20; // rdi
  __int64 result; // rax
  unsigned int v22; // ecx
  size_t v23; // rbx
  char *v24; // rsi
  char *v25; // r14
  __int64 v26; // r12
  unsigned int v27; // r10d
  unsigned int j; // ecx
  char v29; // [rsp+20h] [rbp-68h]
  _DWORD v30[24]; // [rsp+28h] [rbp-60h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v8 = a1[2];
  if ( ((v8 - 24) & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  v9 = *a1;
  v10 = a1[1];
  v11 = 0;
  v12 = *((_QWORD *)a1 + 3);
  v13 = 0;
  v14 = v8 >> 3;
  v15 = *a1;
  v29 = 0;
  v16 = v10;
  if ( a2 == -16777216 && v14 == 4 )
  {
    v17 = 0;
    if ( !v9 )
    {
LABEL_33:
      *v6 = 0LL;
      *a5 = 1;
      return 0LL;
    }
    do
    {
      for ( i = 0; i < v10; ++i )
      {
        if ( *(_DWORD *)v12 )
        {
          v29 = 1;
          if ( i < v16 )
            v16 = i;
          if ( i > v13 )
            v13 = i;
          if ( v17 < v15 )
            v15 = v17;
          if ( v17 > v11 )
            v11 = v17;
        }
        v12 += 4LL;
      }
      ++v17;
    }
    while ( v17 < v9 );
  }
  else
  {
    v27 = 0;
    if ( !v9 )
      goto LABEL_33;
    do
    {
      for ( j = 0; j < v10; ++j )
      {
        if ( *(_BYTE *)(v12 + 2) != BYTE2(a2) || *(_WORD *)v12 != (_WORD)a2 )
        {
          v29 = 1;
          if ( j < v16 )
            v16 = j;
          if ( j > v13 )
            v13 = j;
          if ( v27 < v15 )
            v15 = v27;
          if ( v27 > v11 )
            v11 = v27;
        }
        v12 += v14;
      }
      ++v27;
    }
    while ( v27 < v9 );
    v7 = a1;
    v5 = a4;
    v6 = a3;
  }
  if ( !v29 )
    goto LABEL_33;
  v19 = v13 - v16 + 1;
  v20 = v11 - v15 + 1;
  v30[0] = v19;
  v30[1] = v20;
  if ( !v15 && !v16 && v19 == v10 && (_DWORD)v20 == v9 )
    return 3221226021LL;
  result = BgpGxRectangleCreate(v30, v8, v6);
  if ( (int)result >= 0 )
  {
    v22 = v14 * v7[1];
    v23 = v14 * v19;
    v24 = (char *)(*((_QWORD *)v7 + 3) + v15 * v22 + v16 * v14);
    v25 = *(char **)(*v6 + 24);
    if ( (_DWORD)v20 )
    {
      v26 = v22;
      do
      {
        memmove(v25, v24, v23);
        v25 += v23;
        v24 += v26;
        --v20;
      }
      while ( v20 );
    }
    *v5 = v16;
    v5[1] = v15;
    *a5 = 0;
    return 0LL;
  }
  return result;
}
