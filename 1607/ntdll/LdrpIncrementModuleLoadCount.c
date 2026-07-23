/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x180039C80
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x18000F88C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleEx @ 0x180012210 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x180018F88 (LdrpFastpthReloadedDll.c)
 *     LdrAddRefDll @ 0x180039C10 (LdrAddRefDll.c)
 *     LdrGetDllHandleByMapping @ 0x1800784A0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007AEE0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
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
