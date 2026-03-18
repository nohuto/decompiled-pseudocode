/*
 * XREFs of FopValidateFontNameTable @ 0x1407FE37C
 * Callers:
 *     FopInitializeFonts @ 0x1407FDD50 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140151FEC (FioFwReadBytesAtOffset.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     FopReadNamingTable @ 0x1407FE4F0 (FopReadNamingTable.c)
 *     FopGetTableOffsetAndSize @ 0x1407FE6A4 (FopGetTableOffsetAndSize.c)
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
  unsigned int v13; // eax
  SIZE_T v14; // rcx
  void *Memory; // rax
  unsigned int i; // edx
  __int64 v17; // rcx
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
LABEL_7:
      TableOffsetAndSize = -1073741701;
      goto LABEL_8;
    }
    while ( *(_DWORD *)v10 != 65539 || *(_DWORD *)(v10 + 4) != 66569 )
    {
      ++v11;
      v10 += 12LL;
      if ( v11 >= *(unsigned __int16 *)(v19 + 2) )
        goto LABEL_7;
    }
    v13 = *(unsigned __int16 *)(v10 + 8);
    v14 = v13 + 2;
    if ( (unsigned int)v14 >= v13 )
    {
      Memory = (void *)BgpFwAllocateMemory(v14);
      v4 = (__int64)Memory;
      if ( !Memory )
      {
        TableOffsetAndSize = -1073741801;
        goto LABEL_11;
      }
      TableOffsetAndSize = FioFwReadBytesAtOffset(
                             a1,
                             v7 + *(unsigned __int16 *)(v10 + 10) + *(unsigned __int16 *)(v9 + 4),
                             *(unsigned __int16 *)(v10 + 8),
                             Memory);
      if ( TableOffsetAndSize < 0 )
      {
LABEL_9:
        if ( v4 )
          BgpFwFreeMemory(v4);
        goto LABEL_11;
      }
      *(_WORD *)(v10 + 8) >>= 1;
      for ( i = 0; i < *(unsigned __int16 *)(v10 + 8); *(_WORD *)(v4 + 2 * v17) = __ROR2__(*(_WORD *)(v4 + 2 * v17), 8) )
        v17 = i++;
      *(_WORD *)(v4 + 2LL * i) = 0;
      *a3 = v4;
LABEL_8:
      if ( TableOffsetAndSize >= 0 )
        goto LABEL_11;
      goto LABEL_9;
    }
    TableOffsetAndSize = -1073741675;
  }
LABEL_11:
  if ( v9 )
    BgpFwFreeMemory(v9);
  return (unsigned int)TableOffsetAndSize;
}
