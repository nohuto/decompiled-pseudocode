/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800C97D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 *     LdrpValidPathComponentsMask @ 0x1800D1CE8 (LdrpValidPathComponentsMask.c)
 */

NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  int v2; // ebx
  int valid; // eax
  int v4; // edx
  __int64 v5; // r9
  NTSTATUS LoadedDllByHandle; // edi
  char *v7; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = v1;
  valid = LdrpValidPathComponentsMask(ImplicitPathOptions);
  if ( (~valid & v4) != 0 || !v4 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(v5, (__int64 *)&BaseAddress, &v9);
  if ( LoadedDllByHandle >= 0 )
  {
    v7 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v2;
    LdrpDereferenceModule(v7);
  }
  return LoadedDllByHandle;
}
