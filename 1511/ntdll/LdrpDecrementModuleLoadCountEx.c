/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x180008D48
 * Callers:
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180011F9C (LdrpFastpthReloadedDll.c)
 * Callees:
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, int a2)
{
  bool v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v10; // rcx
  int v11; // eax

  v4 = 0;
  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  v5 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
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
    else if ( v7 <= 1 && a2 )
    {
      v5 = -1073741267;
    }
    else
    {
      *(_DWORD *)(v6 + 24) = v7 - 1;
      v4 = v7 == 1;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v4 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v6);
    LdrpReleaseLoaderLock(v10, 8LL);
  }
  return v5;
}
