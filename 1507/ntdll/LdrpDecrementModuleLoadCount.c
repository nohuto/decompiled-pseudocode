/*
 * XREFs of LdrpDecrementModuleLoadCount @ 0x1800384B0
 * Callers:
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180020D34 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 */

void __fastcall LdrpDecrementModuleLoadCount(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rbx
  unsigned int v4; // r8d
  __int64 v6; // rcx
  int v7; // eax

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 != -1 && (*(_BYTE *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( v4 < (unsigned int)(*(_QWORD *)(v3 + 48) != 0LL) + 1 )
    {
      if ( !v4 && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v7 = *(_DWORD *)(v3 + 28);
        if ( v7 )
          *(_DWORD *)(v3 + 28) = v7 - 1;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 24) = v4 - 1;
      v2 = v4 == 1;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v2 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v3);
    LdrpReleaseLoaderLock(v6, 8, 0);
  }
}
