/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x180011798
 * Callers:
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000C4E4 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x180011F9C (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleByMapping @ 0x180076C10 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800788F0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 != -1 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 24) = v4 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v3 + 28);
    }
    else
    {
      v2 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
