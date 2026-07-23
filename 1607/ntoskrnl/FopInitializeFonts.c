/*
 * XREFs of FopInitializeFonts @ 0x1407D43C8
 * Callers:
 *     BgpFoInitialize @ 0x1407D42D4 (BgpFoInitialize.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x1401463F8 (FioFwReadUlongAtOffset.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     FopFreeFontData @ 0x140728AC0 (FopFreeFontData.c)
 *     BgpRasInitializeRasterizer @ 0x1407D44FC (BgpRasInitializeRasterizer.c)
 *     FopReadMappingTable @ 0x1407D46C8 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1407D49E4 (FopValidateFontNameTable.c)
 *     FopGetTableOffsetAndSize @ 0x1407D4CE8 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall FopInitializeFonts(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  unsigned int v4; // ebp
  unsigned int v5; // r15d
  _QWORD *Memory; // rax
  _QWORD *v7; // rdi
  int v8; // edx
  _QWORD *v9; // rcx
  int v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
    return (unsigned int)-1073741701;
  v5 = 12;
  do
  {
    Memory = (_QWORD *)BgpFwAllocateMemory(0x80uLL);
    v7 = Memory;
    if ( !Memory )
      goto LABEL_12;
    memset(Memory, 0, 0x80uLL);
    v7[14] = v7 + 13;
    v7[13] = v7 + 13;
    v7[2] = a1;
    *((_DWORD *)v7 + 10) = v4;
    if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
    {
      if ( (int)FioFwReadUlongAtOffset(*(_QWORD *)(a1 + 16), v5, &v11) < 0 )
        goto LABEL_15;
      v8 = v11;
    }
    else
    {
      v8 = 0;
      v11 = 0;
    }
    *((_DWORD *)v7 + 11) = v8;
    if ( (int)FopGetTableOffsetAndSize(*(_QWORD *)(a1 + 16), v8, 1668112752, (int)v7 + 48, (__int64)&v12) < 0
      || (int)FopValidateFontNameTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v7 + 11), v7 + 4) < 0
      || (int)FopReadMappingTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v7 + 12), v7 + 3) < 0
      || (int)BgpRasInitializeRasterizer(v7) < 0 )
    {
LABEL_15:
      FopFreeFontData(v7);
      goto LABEL_12;
    }
    v9 = *(_QWORD **)(a1 + 48);
    if ( *v9 != a1 + 40 )
      __fastfail(3u);
    *v7 = a1 + 40;
    ++v3;
    v7[1] = v9;
    *v9 = v7;
    *(_QWORD *)(a1 + 48) = v7;
LABEL_12:
    ++v4;
    v5 += 4;
  }
  while ( v4 < *(_DWORD *)(a1 + 24) );
  if ( !v3 )
    return (unsigned int)-1073741701;
  return v1;
}
