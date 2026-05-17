/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x18006C1E0
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x18006BFC4 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x18006C130 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800170B8 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(__int64 a1, __int64 a2, volatile signed __int32 **a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = *(_DWORD *)(a2 + 8);
  v11 = *(_DWORD *)(a2 + 80);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, (char *)a2, (__int64)a3, (__int64)a4);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, (const void *)a2, &v10, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)*a3 + 19) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
