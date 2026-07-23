/*
 * XREFs of LdrpFastpthReloadedDll @ 0x180011F9C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180008D48 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x180011798 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x1800117F0 (LdrpBuildForwarderLink.c)
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(PUNICODE_STRING a1, __int16 a2, __int64 a3, __int64 *a4)
{
  int LoadedDllByName; // ebx
  _UNICODE_STRING *v7; // rdx
  char v9; // si
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v10) = 0;
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
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v7, (__int64)&v10);
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( (_DWORD)v10 != 9 )
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
        LdrpDrainWorkQueue(0LL);
      }
      LdrpDecrementModuleLoadCountEx(*a4, 0);
      if ( !v9 )
        LdrpDropLastInProgressCount();
    }
    if ( LoadedDllByName < 0 )
    {
LABEL_11:
      LdrpDereferenceModule((PVOID)*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)LoadedDllByName;
}
