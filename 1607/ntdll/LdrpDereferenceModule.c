/*
 * XREFs of LdrpDereferenceModule @ 0x180032238
 * Callers:
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 *     LdrLoadDll @ 0x180011F30 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180012220 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x180012330 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180018F98 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800319E0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     LdrpFreeReplacedModule @ 0x18006B66C (LdrpFreeReplacedModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180073728 (LdrpLoadContextReplaceModule.c)
 *     LdrFindEntryForAddress @ 0x180076030 (LdrFindEntryForAddress.c)
 *     LdrGetDllHandleByMapping @ 0x1800784B0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllFullName @ 0x180079B30 (LdrGetDllFullName.c)
 *     LdrGetDllHandleByName @ 0x18007AEF0 (LdrGetDllHandleByName.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18007B434 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5EC (LdrpResolveProcedureAddress.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007DB40 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     LdrQueryModuleServiceTags @ 0x1800D0740 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D0B80 (LdrSetImplicitPathOptions.c)
 *     AVrfCallAPILookupCallback @ 0x1800D5DC0 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18000E8FC (LdrpFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpDestroyNode @ 0x1800747A0 (LdrpDestroyNode.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA84 (RtlRemoveInvertedFunctionTable.c)
 *     LdrpReleaseTlsEntry @ 0x18008410C (LdrpReleaseTlsEntry.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  bool v9; // si
  __int64 v10; // rdx
  __int64 v11; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
        v6 = *(_QWORD *)(a1 + 160);
        v7 = *(_QWORD **)(a1 + 168);
        if ( *(_QWORD *)(v6 + 8) != a1 + 160 || *v7 != a1 + 160 )
          __fastfail(3u);
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = *(_QWORD **)(a1 + 152);
        v9 = *v8 == (_QWORD)v8;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
          RtlRemoveInvertedFunctionTable(*(_QWORD *)(a1 + 48));
        v10 = *(_QWORD *)(a1 + 48);
        if ( v10 )
          NtUnmapViewOfSection(-1LL, v10);
        v11 = *(_QWORD *)(a1 + 136);
        if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v11);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0LL, a1);
        if ( v9 )
          return LdrpDestroyNode(v8);
      }
    }
  }
  return result;
}
