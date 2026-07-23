/*
 * XREFs of LdrpPinModule @ 0x18007E408
 * Callers:
 *     LdrGetDllHandleEx @ 0x180012210 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrAddRefDll @ 0x180039C10 (LdrAddRefDll.c)
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1E30 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x18007E46C (LdrpPinNodeRecurse.c)
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
      LdrpPinNodeRecurse();
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
