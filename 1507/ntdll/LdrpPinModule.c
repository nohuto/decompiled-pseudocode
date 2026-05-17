/*
 * XREFs of LdrpPinModule @ 0x18007CDF4
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     LdrInitShimEngineDynamic @ 0x1800BDB20 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x18007D274 (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  v5 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, a2, a3, a4);
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
