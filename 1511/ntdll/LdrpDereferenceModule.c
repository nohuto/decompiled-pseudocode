/*
 * XREFs of LdrpDereferenceModule @ 0x180032630
 * Callers:
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x1800112C4 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180011F9C (LdrpFastpthReloadedDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180031DC0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveDelayloadAddress @ 0x1800323F0 (LdrpResolveDelayloadAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 *     LdrFindEntryForAddress @ 0x18003EFF0 (LdrFindEntryForAddress.c)
 *     LdrpFreeReplacedModule @ 0x18006E7CC (LdrpFreeReplacedModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18007665C (LdrpLoadContextReplaceModule.c)
 *     LdrGetDllHandleByMapping @ 0x180076C10 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllFullName @ 0x180078250 (LdrGetDllFullName.c)
 *     LdrGetDllHandleByName @ 0x1800788F0 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007AB10 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180081FEC (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrQueryModuleServiceTags @ 0x1800C9350 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800C97D0 (LdrSetImplicitPathOptions.c)
 *     AVrfCallAPILookupCallback @ 0x1800CDE10 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDestroyNode @ 0x180074C74 (LdrpDestroyNode.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007881C (RtlRemoveInvertedFunctionTable.c)
 *     LdrpReleaseTlsEntry @ 0x18007F9B0 (LdrpReleaseTlsEntry.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpDereferenceModule(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  bool v9; // si
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx

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
        v11 = *(volatile signed __int32 **)(a1 + 136);
        if ( (unsigned __int64)v11 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v11);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0, a1);
        if ( v9 )
          return LdrpDestroyNode(v8);
      }
    }
  }
  return result;
}
