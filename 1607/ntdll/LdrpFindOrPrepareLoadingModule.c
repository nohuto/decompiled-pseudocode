/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x18000F88C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpAllocatePlaceHolder @ 0x18000F5E4 (LdrpAllocatePlaceHolder.c)
 *     LdrpLoadKnownDll @ 0x180012030 (LdrpLoadKnownDll.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3CC (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C80 (LdrpIncrementModuleLoadCount.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        PUNICODE_STRING a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  int LoadedDllByName; // eax
  int PlaceHolder; // ebx

  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, 0LL);
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(0LL, a1, 0LL);
LABEL_4:
    PlaceHolder = LoadedDllByName;
    goto LABEL_5;
  }
  PlaceHolder = -1073741515;
LABEL_5:
  if ( PlaceHolder == -1073741515 )
  {
    PlaceHolder = LdrpAllocatePlaceHolder((const void **)a1, a2, a3, a4, a5, a6, a7);
    if ( PlaceHolder >= 0 )
      return (unsigned int)LdrpLoadKnownDll(*(_QWORD *)(*a6 + 176));
  }
  else
  {
    LdrpIncrementModuleLoadCount(*a6);
  }
  return (unsigned int)PlaceHolder;
}
