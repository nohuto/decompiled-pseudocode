/*
 * XREFs of LdrpBuildForwarderLink @ 0x180073888
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180018F98 (LdrpFastpthReloadedDll.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpRecordModuleDependency @ 0x18007391C (LdrpRecordModuleDependency.c)
 */

__int64 __fastcall LdrpBuildForwarderLink(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v8 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LdrpRecordModuleDependency(a1, a2, 0LL, &v8);
      v4 = v8;
    }
    else
    {
      v4 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
  return v4;
}
