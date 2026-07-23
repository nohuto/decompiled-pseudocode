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
