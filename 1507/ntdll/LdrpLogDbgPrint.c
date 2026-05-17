/*
 * XREFs of LdrpLogDbgPrint @ 0x1800BC478
 * Callers:
 *     LdrpLoadWow64 @ 0x180003478 (LdrpLoadWow64.c)
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpGetProcedureAddress @ 0x180015BD0 (LdrpGetProcedureAddress.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDllInternal @ 0x1800187EC (LdrpFindLoadedDllInternal.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpPreprocessDllName @ 0x180020EEC (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpFindKnownDll @ 0x18003FFC4 (LdrpFindKnownDll.c)
 *     LdrpPrepareModuleForExecution @ 0x180040558 (LdrpPrepareModuleForExecution.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpMapViewOfSection @ 0x180040BD0 (LdrpMapViewOfSection.c)
 *     LdrpDynamicShimModule @ 0x1800415EC (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x180041840 (LdrpSendPostSnapNotifications.c)
 *     LdrpComputeLazyDllPath @ 0x180042FC0 (LdrpComputeLazyDllPath.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x180043728 (LdrpProcessDetachNode.c)
 *     LdrpMergeNodes @ 0x1800441C0 (LdrpMergeNodes.c)
 *     LdrShutdownProcess @ 0x180044620 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180044DE4 (LdrpInitializeNode.c)
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeTls @ 0x180055594 (LdrpInitializeTls.c)
 *     LdrpAllocateTls @ 0x180055B88 (LdrpAllocateTls.c)
 *     LdrpFindDllActivationContext @ 0x18006A538 (LdrpFindDllActivationContext.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     LdrpRelocateImage @ 0x180073308 (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800733E4 (LdrpProtectAndRelocateImage.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800744A0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180074FC8 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpRedirectDelayloadFailure @ 0x180077574 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180079BA4 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x180079D5C (LdrpGetShimEngineInterface.c)
 *     LdrpDetectDetour @ 0x18007D6B8 (LdrpDetectDetour.c)
 *     LdrInitShimEngineDynamic @ 0x1800BDB20 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800BDE90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800BE0A4 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800BE14C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800C0830 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800C08D8 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800C09AC (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180010048 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800BC570 (StringCbPrintfA.c)
 */

struct _TEB *LdrpLogDbgPrint(_DWORD a1, _DWORD a2, const char *a3, int a4, char *a5, ...)
{
  struct _TEB *result; // rax
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF
  va_list va; // [rsp+188h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    StringCbPrintfA(
      pszDest,
      0x100uLL,
      "%04x:%04x @ %08d - %s - %s: ",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
      a3,
      (&off_180102778)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
