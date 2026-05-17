/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x180031C50
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001136C (LdrpGetDelayloadExportDll.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800319E0 (LdrResolveDelayLoadedAPI.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllFullName @ 0x180079B30 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007DB40 (LdrDisableThreadCalloutsForDll.c)
 *     LdrQueryModuleServiceTags @ 0x1800D0740 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D0B80 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCompareModuleBaseAddresses @ 0x180032218 (LdrpCompareModuleBaseAddresses.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 v10; // rax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v4 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, (__int64)a3, a4);
      v8 = (_QWORD *)LdrpModuleBaseAddressIndex;
      if ( LdrpModuleBaseAddressIndex )
      {
        do
        {
          v9 = LdrpCompareModuleBaseAddresses(a1, v8);
          if ( v9 < 0 )
          {
            v8 = (_QWORD *)*v8;
          }
          else
          {
            if ( v9 <= 0 )
              break;
            v8 = (_QWORD *)v8[1];
          }
        }
        while ( v8 );
        if ( v8 )
        {
          v4 = (__int64)(v8 - 25);
          v10 = *(v8 - 6);
          if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v4 + 276));
          if ( a3 )
            *a3 = *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL);
        }
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *(_QWORD *)a2 = v4;
  return v4 == 0 ? 0xC0000135 : 0;
}
