/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x18003F368
 * Callers:
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpIncrementModuleLoadCount @ 0x180020924 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x180040198 (LdrpAllocatePlaceHolder.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        PUNICODE_STRING a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  int v10; // ebp
  int LoadedDllByName; // eax
  int PlaceHolder; // ebx

  v10 = (int)a1;
  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a3, (__int64)a6, 0LL);
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(0LL, a1, a3, (__int64)a6, 0LL);
LABEL_4:
    PlaceHolder = LoadedDllByName;
    goto LABEL_5;
  }
  PlaceHolder = -1073741515;
LABEL_5:
  if ( PlaceHolder == -1073741515 )
  {
    PlaceHolder = LdrpAllocatePlaceHolder(v10, a2, a3, a4, a5, (__int64)a6, a7);
    if ( PlaceHolder >= 0 )
      return (unsigned int)LdrpLoadKnownDll(*(_QWORD *)(*a6 + 176));
  }
  else
  {
    LdrpIncrementModuleLoadCount(*a6);
  }
  return (unsigned int)PlaceHolder;
}
