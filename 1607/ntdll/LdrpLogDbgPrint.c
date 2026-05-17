/*
 * XREFs of LdrpLogDbgPrint @ 0x1800D057C
 * Callers:
 *     LdrShutdownProcess @ 0x180006F30 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18000BC04 (LdrpProcessDetachNode.c)
 *     LdrpComputeLazyDllPath @ 0x18000D37C (LdrpComputeLazyDllPath.c)
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x18000EBF0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000FA94 (LdrpResolveDllName.c)
 *     LdrpFindKnownDll @ 0x1800101B0 (LdrpFindKnownDll.c)
 *     LdrLoadDll @ 0x180011F30 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrGetDllHandleEx @ 0x180012220 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123F8 (LdrpFindLoadedDllInternal.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     LdrpPreprocessDllName @ 0x180015890 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrpDynamicShimModule @ 0x18002D734 (LdrpDynamicShimModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA88 (LdrpPrepareModuleForExecution.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4EC (LdrpSendPostSnapNotifications.c)
 *     LdrpMapViewOfSection @ 0x18002F354 (LdrpMapViewOfSection.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800319E0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpGetProcedureAddress @ 0x180032370 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     LdrpInitializeTls @ 0x180051188 (LdrpInitializeTls.c)
 *     LdrpAllocateTls @ 0x1800512B4 (LdrpAllocateTls.c)
 *     LdrpInitializeNode @ 0x180072384 (LdrpInitializeNode.c)
 *     LdrpDetectDetour @ 0x180073564 (LdrpDetectDetour.c)
 *     LdrpMergeNodes @ 0x1800747F4 (LdrpMergeNodes.c)
 *     LdrpLoadWow64 @ 0x180075DF0 (LdrpLoadWow64.c)
 *     LdrpFindDllActivationContext @ 0x180076FB8 (LdrpFindDllActivationContext.c)
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     LdrpReportError @ 0x18007AF88 (LdrpReportError.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007B728 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF78 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x18007E068 (LdrpGetShimEngineInterface.c)
 *     LdrpRelocateImage @ 0x180084B78 (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C40 (LdrpProtectAndRelocateImage.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800850B0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D2C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C48 (LdrpInitializeExecutionOptions.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1D70 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D20E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800D22F0 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2398 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D2690 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D2738 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D2808 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18005C428 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800D0688 (StringCbPrintfA.c)
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
      (&off_180108738)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
