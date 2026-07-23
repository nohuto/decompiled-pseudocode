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

__int64 __fastcall LdrpFindLoadedDllByHandle(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  _RTL_BALANCED_NODE *Root; // rdi
  int v8; // eax
  _RTL_BALANCED_NODE *v9; // rax

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
      Root = LdrpModuleBaseAddressIndex.Root;
      if ( LdrpModuleBaseAddressIndex.Root )
      {
        do
        {
          v8 = LdrpCompareModuleBaseAddresses(a1, Root);
          if ( v8 < 0 )
          {
            Root = Root->Children[0];
          }
          else
          {
            if ( v8 <= 0 )
              break;
            Root = Root->Children[1];
          }
        }
        while ( Root );
        if ( Root )
        {
          v3 = (__int64)&Root[-9].16;
          v9 = Root[-2].Children[0];
          if ( LODWORD(v9[1].Children[0]) != -1 && (*(_BYTE *)&v9->Children[0][-3].0 & 0x20) == 0 )
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
