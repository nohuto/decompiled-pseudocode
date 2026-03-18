/*
 * XREFs of MiCompressRvaList @ 0x140416A20
 * Callers:
 *     MiParseImageCfgBits @ 0x1403C6C80 (MiParseImageCfgBits.c)
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
  unsigned int *v12; // rsi
  _BYTE *v13; // rbx
  unsigned int v14; // r11d
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // eax
  bool v22; // r12

  v7 = *a1;
  v8 = 0;
  v9 = a4;
  v12 = a1;
  v22 = (a5 & 1) == 0;
  if ( !*a1 || v7 >= a3 )
    return 3221225595LL;
  if ( a4 > 4 )
  {
    if ( (v22 & (_BYTE)a1[1]) != 0 )
    {
      while ( 1 )
      {
        v12 = (unsigned int *)((char *)v12 + a4);
        if ( !--a2 )
          break;
        if ( (v22 & (_BYTE)v12[1]) == 0 )
          goto LABEL_37;
      }
LABEL_32:
      if ( !a6 )
        *a7 = v8;
      return 0LL;
    }
LABEL_37:
    v7 = *v12;
  }
  if ( !a2 )
    goto LABEL_32;
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
      goto LABEL_13;
    v12 = (unsigned int *)((char *)v12 + v9);
    v15 = v14;
    if ( !--a2 )
      goto LABEL_32;
    if ( (unsigned int)v9 > 4 && (v22 & (_BYTE)v12[1]) != 0 )
      break;
LABEL_11:
    v14 = *v12;
    if ( *v12 <= v15 || v14 >= a3 )
    {
      dword_1402FE4E0 = 13;
      return 3221225595LL;
    }
    do
    {
LABEL_13:
      v16 = v14 - v7;
      v17 = 0LL;
      while ( v16 < MiCfgCompressionTableScales[v17] )
      {
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= 4 )
          goto LABEL_8;
      }
      v18 = MiCfgCompressionTableScales[v17];
      v19 = v16 / v18;
      if ( v19 >= 0x3F )
        v19 = 63;
      if ( v13 )
        *v13++ = v19 | ((_BYTE)v17 << 6);
      ++v8;
      v7 += v19 * v18;
    }
    while ( v7 != v14 );
    if ( (_DWORD)v17 != 3 )
    {
      if ( v13 )
        *v13++ = -64;
      ++v8;
    }
  }
  while ( 1 )
  {
    v20 = *v12;
    if ( *v12 <= v15 || v20 >= a3 )
      break;
    v12 = (unsigned int *)((char *)v12 + v9);
    v15 = v20;
    if ( !--a2 )
      goto LABEL_32;
    if ( (v22 & (_BYTE)v12[1]) == 0 )
      goto LABEL_11;
  }
  dword_1402FE4E0 = 14;
  return 3221225595LL;
}
