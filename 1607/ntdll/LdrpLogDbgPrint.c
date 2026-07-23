/*
 * XREFs of LdrpLogDbgPrint @ 0x1800D063C
 * Callers:
 *     LdrShutdownProcess @ 0x180006F20 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18000BBF4 (LdrpProcessDetachNode.c)
 *     LdrpComputeLazyDllPath @ 0x18000D36C (LdrpComputeLazyDllPath.c)
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     LdrpFindKnownDll @ 0x1800101A0 (LdrpFindKnownDll.c)
 *     LdrLoadDll @ 0x180011F20 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrGetDllHandleEx @ 0x180012210 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     LdrpPreprocessDllName @ 0x180015880 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrpDynamicShimModule @ 0x18002D724 (LdrpDynamicShimModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4DC (LdrpSendPostSnapNotifications.c)
 *     LdrpMapViewOfSection @ 0x18002F344 (LdrpMapViewOfSection.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800319D0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpGetProcedureAddress @ 0x180032360 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     LdrpInitializeTls @ 0x180051178 (LdrpInitializeTls.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
 *     LdrpInitializeNode @ 0x180072374 (LdrpInitializeNode.c)
 *     LdrpDetectDetour @ 0x180073554 (LdrpDetectDetour.c)
 *     LdrpMergeNodes @ 0x1800747E4 (LdrpMergeNodes.c)
 *     LdrpLoadWow64 @ 0x180075DE0 (LdrpLoadWow64.c)
 *     LdrpFindDllActivationContext @ 0x180076FA8 (LdrpFindDllActivationContext.c)
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 *     LdrpReportError @ 0x18007AF78 (LdrpReportError.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007B718 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007DF68 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x18007E058 (LdrpGetShimEngineInterface.c)
 *     LdrpRelocateImage @ 0x180084B68 (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C30 (LdrpProtectAndRelocateImage.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800850A0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D1C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1E30 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D21A0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800D23B0 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2458 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D2750 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D27F8 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D28C8 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18005C418 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800D0748 (StringCbPrintfA.c)
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
