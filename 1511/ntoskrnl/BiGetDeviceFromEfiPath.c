/*
 * XREFs of BiGetDeviceFromEfiPath @ 0x1406906E0
 * Callers:
 *     BiCreateMergedBootEntry @ 0x14068FCFC (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiTranslateFilePath @ 0x140691130 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiGetDeviceFromEfiPath(unsigned __int64 Src, _QWORD *a2, unsigned int *a3)
{
  const void *v4; // rdi
  int v5; // ebx
  _BYTE *i; // rbx
  unsigned int v7; // ebx
  _FILE_PATH *PoolWithTag; // rax
  _FILE_PATH *v9; // rsi
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  _DWORD *v12; // rax
  _DWORD *v13; // r14

  v4 = (const void *)Src;
  if ( (*(_BYTE *)Src & 0x7F) == 0x7F )
  {
    return (unsigned int)-1073741766;
  }
  else
  {
    for ( i = (_BYTE *)(*(unsigned __int8 *)(Src + 2) | (unsigned __int64)(*(unsigned __int8 *)(Src + 3) << 8));
          ;
          Src = (unsigned __int8)i[2] | (unsigned __int64)((unsigned __int8)i[3] << 8) )
    {
      i += Src;
      if ( (*i & 0x7F) == 0x7F || *i == 4 && i[1] == 4 )
        break;
    }
    v7 = (_DWORD)i - (_DWORD)v4;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v7 + 16, 0x4B444342u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->Version = 1;
      PoolWithTag->Length = v7 + 16;
      PoolWithTag->Type = 4;
      memmove(PoolWithTag->FilePath, v4, v7);
      v9->FilePath[v7] = 127;
      *(_WORD *)&v9->FilePath[v7 + 1] = 1279;
      v9->FilePath[v7 + 3] = 0;
      v5 = BiTranslateFilePath(v9, 3u);
      if ( v5 >= 0 )
      {
        v10 = MEMORY[4] - 12;
        v11 = MEMORY[4] - 12 + 20;
        v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x4B444342u);
        v13 = v12;
        if ( v12 )
        {
          memset(v12, 0, v10 + 20);
          *v13 = 2;
          memmove(v13 + 5, (const void *)0xC, v10);
          *a3 = v11;
          *a2 = v13;
        }
        else
        {
          v5 = -1073741670;
        }
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
