/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x18002F008
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180018F88 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002EF60 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 * Callees:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800D0DD0 (LdrpDecrementNodeLoadCountLockHeld.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, unsigned int a2)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v5 = *(_QWORD *)(a1 + 152);
  v6 = LdrpDecrementNodeLoadCountLockHeld(v5, a2, &v8);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v8 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v5);
    LdrpReleaseLoaderLock(v7, 8, 0);
  }
  return v6;
}
