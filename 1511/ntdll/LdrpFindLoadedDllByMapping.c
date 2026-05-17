/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x180076CC0
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x180076AA0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x180076C10 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031AD0 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(__int64 a1, __int64 a2, volatile signed __int32 **a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = *(_DWORD *)(a2 + 8);
  v11 = *(_DWORD *)(a2 + 80);
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (char *)a2, (__int64)a3, (__int64)a4);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, (const void *)a2, &v10, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)*a3 + 19) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
