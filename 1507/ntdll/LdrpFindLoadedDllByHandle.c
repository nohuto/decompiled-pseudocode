/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x180015F14
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x18003E1C0 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllFullName @ 0x18006C490 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18006F690 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpGetDelayloadExportDll @ 0x18007A108 (LdrpGetDelayloadExportDll.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     LdrQueryModuleServiceTags @ 0x1800BC630 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800BCAB0 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     LdrpCompareModuleBaseAddresses @ 0x1800164FC (LdrpCompareModuleBaseAddresses.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  _QWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v3 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v7 = (_QWORD *)LdrpModuleBaseAddressIndex;
      if ( LdrpModuleBaseAddressIndex )
      {
        do
        {
          v8 = LdrpCompareModuleBaseAddresses(a1, v7);
          if ( v8 < 0 )
          {
            v7 = (_QWORD *)*v7;
          }
          else
          {
            if ( v8 <= 0 )
              break;
            v7 = (_QWORD *)v7[1];
          }
        }
        while ( v7 );
        if ( v7 )
        {
          v3 = (__int64)(v7 - 25);
          v9 = *(v7 - 6);
          if ( *(_DWORD *)(v9 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v9 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
          if ( a3 )
            *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
        }
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
