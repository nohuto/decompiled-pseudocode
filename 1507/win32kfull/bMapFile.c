/*
 * XREFs of bMapFile @ 0x1C013CA40
 * Callers:
 *     InitFNTCache @ 0x1C013D3F0 (InitFNTCache.c)
 *     bReAllocCacheFile @ 0x1C015A00C (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0x1C015B4F8 (bInitCacheTable.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C027DEF4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C027E15C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     EngMapFile @ 0x1C027EB50 (EngMapFile.c)
 * Callees:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00AE1DC (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00F19B0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     Win32MapViewInSessionSpace @ 0x1C01E85B8 (Win32MapViewInSessionSpace.c)
 */

__int64 __fastcall bMapFile(const WCHAR *a1, _OWORD *a2, int a3, int *a4)
{
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  ULONG_PTR ViewSize[2]; // [rsp+38h] [rbp-9h] BYREF
  PVOID MappedBase[2]; // [rsp+48h] [rbp+7h] BYREF
  __int128 v13; // [rsp+58h] [rbp+17h]
  PVOID Section[2]; // [rsp+68h] [rbp+27h]
  __int128 v15; // [rsp+78h] [rbp+37h]
  __int128 v16; // [rsp+88h] [rbp+47h]

  v5 = 0;
  if ( (unsigned int)bCreateSection(a1, (struct _FILEVIEW *)MappedBase, a3, a4, 0) )
  {
    ViewSize[0] = 0LL;
    if ( Win32MapViewInSessionSpace(Section[0], &MappedBase[1], ViewSize) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)MappedBase);
    }
    else
    {
      v5 = 1;
      v6 = v13;
      *a2 = *(_OWORD *)MappedBase;
      v7 = *(_OWORD *)Section;
      a2[1] = v6;
      v8 = v15;
      a2[2] = v7;
      v9 = v16;
      a2[3] = v8;
      a2[4] = v9;
    }
  }
  return v5;
}
