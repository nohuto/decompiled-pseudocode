/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x180020924
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x180020D34 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003F368 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByMapping @ 0x18006C130 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18006CF40 (LdrGetDllHandleByName.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
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
