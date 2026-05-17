/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x180032760
 * Callers:
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     LdrpGetDelayloadExportDll @ 0x1800104CC (LdrpGetDelayloadExportDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180031DC0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetDllFullName @ 0x180078250 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007AB10 (LdrDisableThreadCalloutsForDll.c)
 *     LdrQueryModuleServiceTags @ 0x1800C9350 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800C97D0 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCompareModuleBaseAddresses @ 0x180032D38 (LdrpCompareModuleBaseAddresses.c)
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
