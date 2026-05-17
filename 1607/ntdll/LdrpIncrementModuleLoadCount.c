/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x180039C90
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x18000F89C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleEx @ 0x180012220 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x180018F98 (LdrpFastpthReloadedDll.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     LdrGetDllHandleByMapping @ 0x1800784B0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007AEF0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 != -1 )
  {
    if ( v7 )
    {
      *(_DWORD *)(v6 + 24) = v7 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v6 + 28);
    }
    else
    {
      v5 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v5;
}
