/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800D0C40
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180031C40 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  int v2; // ebx
  int v3; // eax
  NTSTATUS LoadedDllByHandle; // edi
  char *v5; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = v1;
  v3 = 32512;
  if ( (LdrpPolicyBits & 4) == 0 )
    v3 = 31488;
  if ( (~v3 & v1) != 0 || !v1 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(*(__int64 *)&ImplicitPathOptions, (__int64 *)&BaseAddress, &v7);
  if ( LoadedDllByHandle >= 0 )
  {
    v5 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v2;
    LdrpDereferenceModule(v5);
  }
  return LoadedDllByHandle;
}
