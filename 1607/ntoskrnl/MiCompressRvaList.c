/*
 * XREFs of MiCompressRvaList @ 0x14042E730
 * Callers:
 *     MiParseImageCfgBits @ 0x140508740 (MiParseImageCfgBits.c)
 * Callees:
 *     MiQueryFlagsForRvaEntry @ 0x1404BB4F0 (MiQueryFlagsForRvaEntry.c)
 */

__int64 __fastcall MiCompressRvaList(
        unsigned int *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        unsigned int *a7,
        int *a8)
{
  int v8; // ebp
  __int64 v12; // r15
  unsigned int v13; // r9d
  int FlagsForRvaEntry; // r12d
  unsigned int *v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // r10d
  _BYTE *v18; // rsi
  unsigned int v19; // r11d
  char v20; // dl
  int v21; // ecx
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  int v25; // [rsp+30h] [rbp-48h]
  unsigned int v26; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0;
  v12 = a4;
  v13 = 0;
  while ( 1 )
  {
    FlagsForRvaEntry = MiQueryFlagsForRvaEntry((_DWORD)a1, v12, (unsigned int)&v26, v13, a3, a5, v25, (__int64)&a6);
    if ( FlagsForRvaEntry < 0 )
      goto LABEL_41;
    if ( !a6 )
      break;
    v13 = v26;
    a1 = (unsigned int *)((char *)a1 + v12);
    if ( !--a2 )
      goto LABEL_25;
  }
  v15 = a7;
  v16 = v26;
  v17 = v26;
  if ( a7 )
  {
    *a7 = v26;
    v18 = v15 + 1;
  }
  else
  {
    v18 = 0LL;
  }
  v8 = 4;
  v19 = v16;
  while ( v17 != v16 )
  {
LABEL_13:
    v21 = 0;
    v22 = v19 - v17;
    while ( v22 < MiCfgCompressionTableScales[v21] )
    {
      if ( (unsigned int)++v21 >= 4 )
        goto LABEL_24;
    }
    v23 = MiCfgCompressionTableScales[v21];
    if ( v23 != 1 )
      v22 /= v23;
    if ( v22 >= 0x3F )
      v22 = 63;
    if ( v18 )
      *v18++ = v22 | ((_BYTE)v21 << 6);
    ++v8;
    v17 += v22 * v23;
    if ( v21 != 3 && v17 == v19 )
    {
      if ( v18 )
        *v18++ = -64;
      ++v8;
    }
LABEL_24:
    if ( !a2 )
      goto LABEL_25;
  }
  a1 = (unsigned int *)((char *)a1 + v12);
  if ( --a2 )
  {
    while ( 1 )
    {
      v19 = *a1;
      if ( *a1 <= v16 || v19 >= a3 )
        break;
      v20 = 1;
      if ( a5 )
      {
        v20 = (a5 & 1) == 0;
        if ( (a5 & 4) != 0 )
          v20 |= 2u;
      }
      v16 = *a1;
      FlagsForRvaEntry = 0;
      if ( (unsigned int)v12 <= 4 || ((unsigned __int8)v20 & (_BYTE)a1[1]) == 0 )
        goto LABEL_13;
      a1 = (unsigned int *)((char *)a1 + v12);
      if ( !--a2 )
        goto LABEL_25;
    }
    FlagsForRvaEntry = -1073741701;
LABEL_41:
    dword_1403267E8 = 14;
  }
LABEL_25:
  if ( !a7 )
    *a8 = v8;
  return (unsigned int)FlagsForRvaEntry;
}
