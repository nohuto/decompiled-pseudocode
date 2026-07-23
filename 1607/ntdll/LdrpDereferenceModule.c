/*
 * XREFs of LdrpDereferenceModule @ 0x180032228
 * Callers:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     LdrLoadDll @ 0x180011F20 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180012210 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x180012320 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180018F88 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002EF60 (LdrUnloadDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800319D0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrAddRefDll @ 0x180039C10 (LdrAddRefDll.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAE0 (RtlQueryInformationActivationContext.c)
 *     LdrpFreeReplacedModule @ 0x18006B65C (LdrpFreeReplacedModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180073718 (LdrpLoadContextReplaceModule.c)
 *     LdrFindEntryForAddress @ 0x180076020 (LdrFindEntryForAddress.c)
 *     LdrGetDllHandleByMapping @ 0x1800784A0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllFullName @ 0x180079B20 (LdrGetDllFullName.c)
 *     LdrGetDllHandleByName @ 0x18007AEE0 (LdrGetDllHandleByName.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18007B424 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5DC (LdrpResolveProcedureAddress.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007DB30 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 *     LdrQueryModuleServiceTags @ 0x1800D0800 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D0C40 (LdrSetImplicitPathOptions.c)
 *     AVrfCallAPILookupCallback @ 0x1800D5E80 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18000E8EC (LdrpFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18003B780 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpDestroyNode @ 0x180074790 (LdrpDestroyNode.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA74 (RtlRemoveInvertedFunctionTable.c)
 *     LdrpReleaseTlsEntry @ 0x1800840FC (LdrpReleaseTlsEntry.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 */

int __fastcall LdrpDereferenceModule(char *BaseAddress)
{
  __int64 *v1; // rax
  char **v3; // r8
  PVOID *v4; // rdx
  _QWORD *v5; // rdi
  bool v6; // si
  void *v7; // rdx
  _ACTIVATION_CONTEXT *v8; // rcx

  v1 = (__int64 *)*((_QWORD *)BaseAddress + 19);
  if ( *((_DWORD *)v1 + 6) != -1 )
  {
    v1 = (__int64 *)*v1;
    if ( (*(_BYTE *)(v1 - 7) & 0x20) == 0 )
    {
      LODWORD(v1) = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF);
      if ( (_DWORD)v1 == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = (char **)*((_QWORD *)BaseAddress + 20);
        v4 = (PVOID *)*((_QWORD *)BaseAddress + 21);
        if ( v3[1] != BaseAddress + 160 || *v4 != BaseAddress + 160 )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v6 = *v5 == (_QWORD)v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)BaseAddress + 55) )
          LdrpReleaseTlsEntry(BaseAddress, 0LL);
        if ( (*((_DWORD *)BaseAddress + 26) & 0x200) != 0 )
          RtlRemoveInvertedFunctionTable(*((_QWORD *)BaseAddress + 6));
        v7 = (void *)*((_QWORD *)BaseAddress + 6);
        if ( v7 )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
        v8 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( (unsigned __int64)&v8[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v8);
        if ( *((_QWORD *)BaseAddress + 10) )
          LdrpFreeUnicodeString((__int64)(BaseAddress + 72));
        LODWORD(v1) = RtlFreeHeap(LdrpHeap, 0, BaseAddress);
        if ( v6 )
          LODWORD(v1) = LdrpDestroyNode(v5);
      }
    }
  }
  return (int)v1;
}
