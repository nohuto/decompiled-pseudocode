/*
 * XREFs of LdrpPinModule @ 0x18007E418
 * Callers:
 *     LdrGetDllHandleEx @ 0x180012220 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1D70 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x18007E47C (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v6 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v6 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v6 + 24) )
      LdrpPinNodeRecurse();
    else
      v5 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v5;
}
