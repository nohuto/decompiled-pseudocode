/*
 * XREFs of LdrpDereferenceModule @ 0x18001651C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x180016890 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180016B20 (LdrpHandleProtectedDelayload.c)
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x18001870C (LdrpFindLoadedDll.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180020D34 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x18003E1C0 (RtlQueryInformationActivationContext.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 *     LdrpFreeReplacedModule @ 0x180061FF8 (LdrpFreeReplacedModule.c)
 *     LdrFindEntryForAddress @ 0x180069EB0 (LdrFindEntryForAddress.c)
 *     LdrGetDllHandleByMapping @ 0x18006C130 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllFullName @ 0x18006C490 (LdrGetDllFullName.c)
 *     LdrGetDllHandleByName @ 0x18006CF40 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18006F690 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180079C94 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     LdrQueryModuleServiceTags @ 0x1800BC630 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800BCAB0 (LdrSetImplicitPathOptions.c)
 *     AVrfCallAPILookupCallback @ 0x1800C4AE0 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x18004416C (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x1800451C8 (LdrpReleaseTlsEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18006CB9C (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  bool v6; // si

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = *(_QWORD *)(a1 + 160);
        v4 = *(_QWORD **)(a1 + 168);
        if ( *(_QWORD *)(v3 + 8) != a1 + 160 || *v4 != a1 + 160 )
          __fastfail(3u);
        *v4 = v3;
        *(_QWORD *)(v3 + 8) = v4;
        v5 = *(_QWORD **)(a1 + 152);
        v6 = *v5 == (_QWORD)v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
          RtlRemoveInvertedFunctionTable(*(_QWORD *)(a1 + 48));
        if ( *(_QWORD *)(a1 + 48) )
          NtUnmapViewOfSection(-1LL);
        if ( (unsigned __int64)(*(_QWORD *)(a1 + 136) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext();
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0LL, a1);
        if ( v6 )
          return LdrpDestroyNode(v5);
      }
    }
  }
  return result;
}
