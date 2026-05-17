/*
 * XREFs of LdrpFastpthReloadedDll @ 0x180018F98
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F018 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C90 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x180073888 (LdrpBuildForwarderLink.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(int a1, int a2, __int64 a3, _QWORD *a4)
{
  int LoadedDllByName; // ebx
  int v7; // r8d
  int v8; // edx
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a2;
    v8 = 0;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)LoadedDllByName;
    v7 = a2;
    v8 = a1;
    a1 = 0;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v8, v7, (_DWORD)a4, (__int64)&v15);
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( v15 != 9 )
      goto LABEL_11;
    LoadedDllByName = LdrpIncrementModuleLoadCount(*a4);
    if ( LoadedDllByName < 0 )
      goto LABEL_11;
    LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
    if ( LoadedDllByName < 0 )
    {
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v10 = 1;
      }
      else
      {
        v10 = 0;
        LdrpDrainWorkQueue(0);
      }
      LdrpDecrementModuleLoadCountEx(*a4, 0LL);
      if ( !v10 )
        LdrpDropLastInProgressCount(v12, v11, v13, v14);
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
