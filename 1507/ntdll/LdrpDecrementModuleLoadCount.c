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

signed __int64 __fastcall LdrpDecrementModuleLoadCount(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  bool v5; // di
  __int64 v6; // rbx
  unsigned int v7; // r8d
  signed __int64 result; // rax
  __int64 v10; // rcx
  int v11; // eax

  v5 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 != -1 && (*(_BYTE *)(*(_QWORD *)v6 - 56LL) & 0x20) == 0 )
  {
    if ( v7 < (unsigned int)(*(_QWORD *)(v6 + 48) != 0LL) + 1 )
    {
      if ( !v7 && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v11 = *(_DWORD *)(v6 + 28);
        if ( v11 )
          *(_DWORD *)(v6 + 28) = v11 - 1;
      }
    }
    else
    {
      *(_DWORD *)(v6 + 24) = v7 - 1;
      v5 = v7 == 1;
    }
  }
  result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v5 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v6);
    return LdrpReleaseLoaderLock(v10, 8, 0);
  }
  return result;
}
