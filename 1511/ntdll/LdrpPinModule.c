/*
 * XREFs of LdrpPinModule @ 0x18000813C
 * Callers:
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800CA7C0 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpPinNodeRecurse @ 0x180005294 (LdrpPinNodeRecurse.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v3 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v3 + 24) )
      LdrpPinNodeRecurse((__int64 *)v3);
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
