/*
 * XREFs of LdrFindEntryForAddress @ 0x180076030
 * Callers:
 *     LdrpGetDataModulePath @ 0x18002C940 (LdrpGetDataModulePath.c)
 *     LdrpIsReparsePoint @ 0x180075EF4 (LdrpIsReparsePoint.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1D70 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x180076080 (LdrpFindLoadedDllByAddress.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, __int64 *a2)
{
  char *v3; // rdx
  int LoadedDllByAddress; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    LoadedDllByAddress = LdrpFindLoadedDllByAddress(a1, &v10, &v9);
    if ( LoadedDllByAddress >= 0 )
    {
      v7 = v10;
      *a2 = v10;
      LdrpDereferenceModule(v7, v3, v5, v6);
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)LoadedDllByAddress;
}
