/*
 * XREFs of LdrpFastpthReloadedDll @ 0x180018F88
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3CC (LdrpFindLoadedDllByName.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F008 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C80 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x180073878 (LdrpBuildForwarderLink.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(PUNICODE_STRING a1, __int16 a2, __int64 a3, PVOID *a4)
{
  int LoadedDllByName; // ebx
  _UNICODE_STRING *v7; // rdx
  char v9; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v14) = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)LoadedDllByName;
    v7 = a1;
    a1 = 0LL;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v7, (__int64)&v14);
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( (_DWORD)v14 != 9 )
      goto LABEL_11;
    LoadedDllByName = LdrpIncrementModuleLoadCount(*a4);
    if ( LoadedDllByName < 0 )
      goto LABEL_11;
    LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
    if ( LoadedDllByName < 0 )
    {
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 0;
        LdrpDrainWorkQueue(0);
      }
      LdrpDecrementModuleLoadCountEx(*a4, 0LL);
      if ( !v9 )
        LdrpDropLastInProgressCount(v11, v10, v12, v13);
    }
    if ( LoadedDllByName < 0 )
    {
LABEL_11:
      LdrpDereferenceModule(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)LoadedDllByName;
}
