/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x18002F018
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180018F98 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 * Callees:
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x18002D51C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800D0D10 (LdrpDecrementNodeLoadCountLockHeld.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = (unsigned int)a2;
  if ( (_DWORD)a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 152);
  v8 = LdrpDecrementNodeLoadCountLockHeld(v7, v4, &v10);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v10 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v7);
    LdrpReleaseLoaderLock(v9, 8, 0);
  }
  return v8;
}
