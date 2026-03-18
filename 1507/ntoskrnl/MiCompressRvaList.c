/*
 * XREFs of MiCompressRvaList @ 0x1404B8F40
 * Callers:
 *     MiParseImageCfgBits @ 0x140442CC0 (MiParseImageCfgBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompressRvaList(
        unsigned int *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int v7; // r10d
  int v8; // edi
  __int64 v9; // rbp
  unsigned int *v12; // r14
  _BYTE *v13; // rbx
  unsigned int v14; // r11d
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // eax
  bool v21; // r13

  v7 = *a1;
  v8 = 0;
  v9 = a4;
  v12 = a1;
  v21 = (a5 & 1) == 0;
  if ( !*a1 || v7 >= a3 )
    return 3221225595LL;
  if ( a4 > 4 )
  {
    if ( (v21 & (_BYTE)a1[1]) != 0 )
    {
      do
      {
        if ( !a2 )
          break;
        v12 = (unsigned int *)((char *)v12 + a4);
        --a2;
      }
      while ( (v21 & (_BYTE)v12[1]) != 0 );
    }
    v7 = *v12;
  }
  if ( !a2 )
    goto LABEL_35;
  if ( a6 )
  {
    *a6 = v7;
    v13 = a6 + 1;
  }
  else
  {
    v13 = 0LL;
  }
  v8 = 4;
  v14 = v7;
  while ( 1 )
  {
LABEL_8:
    if ( v7 != v14 )
      goto LABEL_14;
    v12 = (unsigned int *)((char *)v12 + v9);
    v15 = v14;
    if ( !--a2 )
      goto LABEL_35;
    if ( (unsigned int)v9 > 4 && (v21 & (_BYTE)v12[1]) != 0 )
      break;
LABEL_11:
    if ( !a2 )
      goto LABEL_35;
    v14 = *v12;
    if ( *v12 <= v15 || v14 >= a3 )
    {
      dword_14034E9A8 = 13;
      return 3221225595LL;
    }
    do
    {
LABEL_14:
      v16 = v14 - v7;
      v17 = 0LL;
      while ( v16 < MiCfgCompressionTableScales[v17] )
      {
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= 4 )
          goto LABEL_8;
      }
      v18 = MiCfgCompressionTableScales[v17];
      if ( v18 != 1 )
        v16 /= v18;
      if ( v16 >= 0x3F )
        v16 = 63;
      if ( v13 )
        *v13++ = v16 | ((_BYTE)v17 << 6);
      ++v8;
      v7 += v16 * v18;
    }
    while ( v7 != v14 );
    if ( (_DWORD)v17 != 3 )
    {
      if ( v13 )
        *v13++ = -64;
      ++v8;
    }
  }
  while ( a2 )
  {
    v19 = *v12;
    if ( *v12 <= v15 || v19 >= a3 )
    {
      dword_14034E9A8 = 14;
      return 3221225595LL;
    }
    v12 = (unsigned int *)((char *)v12 + v9);
    --a2;
    v15 = v19;
    if ( (v21 & (_BYTE)v12[1]) == 0 )
      goto LABEL_11;
  }
LABEL_35:
  if ( !a6 )
    *a7 = v8;
  return 0LL;
}
