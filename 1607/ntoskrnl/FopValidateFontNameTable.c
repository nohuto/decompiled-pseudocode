/*
 * XREFs of FopValidateFontNameTable @ 0x1407D49E4
 * Callers:
 *     FopInitializeFonts @ 0x1407D43C8 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1401294A4 (FioFwReadBytesAtOffset.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     FopReadNamingTable @ 0x1407D4B64 (FopReadNamingTable.c)
 *     FopGetTableOffsetAndSize @ 0x1407D4CE8 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall FopValidateFontNameTable(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rsi
  int TableOffsetAndSize; // edi
  unsigned int v7; // r15d
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax
  SIZE_T v13; // rcx
  void *Memory; // rax
  unsigned int i; // edx
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = 0LL;
  TableOffsetAndSize = FopGetTableOffsetAndSize(a1, a2, 1851878757, (unsigned int)&v20, (__int64)&v18);
  if ( TableOffsetAndSize < 0 )
    return (unsigned int)TableOffsetAndSize;
  v7 = v20;
  v8 = FopReadNamingTable(a1, v20, &v19);
  v9 = v19;
  TableOffsetAndSize = v8;
  if ( v8 >= 0 )
  {
    v10 = v19 + 6;
    v11 = 0;
    if ( !*(_WORD *)(v19 + 2) )
    {
LABEL_17:
      TableOffsetAndSize = -1073741701;
      goto LABEL_12;
    }
    while ( *(_DWORD *)v10 != 65539 || *(_DWORD *)(v10 + 4) != 66569 )
    {
      ++v11;
      v10 += 12LL;
      if ( v11 >= *(unsigned __int16 *)(v19 + 2) )
        goto LABEL_17;
    }
    v12 = *(unsigned __int16 *)(v10 + 8);
    v13 = v12 + 2;
    if ( (unsigned int)v13 < v12 )
    {
      TableOffsetAndSize = -1073741675;
    }
    else
    {
      Memory = (void *)BgpFwAllocateMemory(v13);
      v4 = (__int64)Memory;
      if ( Memory )
      {
        TableOffsetAndSize = FioFwReadBytesAtOffset(
                               a1,
                               v7 + *(unsigned __int16 *)(v10 + 10) + *(unsigned __int16 *)(v9 + 4),
                               *(unsigned __int16 *)(v10 + 8),
                               Memory);
        if ( TableOffsetAndSize < 0 )
          goto LABEL_20;
        *(_WORD *)(v10 + 8) >>= 1;
        for ( i = 0; i < *(unsigned __int16 *)(v10 + 8); *(_WORD *)(v4 + 2 * v16) = __ROR2__(
                                                                                      *(_WORD *)(v4 + 2 * v16),
                                                                                      8) )
          v16 = i++;
        *(_WORD *)(v4 + 2LL * i) = 0;
        *a3 = v4;
LABEL_12:
        if ( TableOffsetAndSize >= 0 )
          goto LABEL_13;
LABEL_20:
        if ( v4 )
          BgpFwFreeMemory(v4);
        goto LABEL_13;
      }
      TableOffsetAndSize = -1073741801;
    }
  }
LABEL_13:
  if ( v9 )
    BgpFwFreeMemory(v9);
  return (unsigned int)TableOffsetAndSize;
}
