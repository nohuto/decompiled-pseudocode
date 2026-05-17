/*
 * XREFs of LdrpLogDbgPrint @ 0x1800C9198
 * Callers:
 *     LdrpDetectDetour @ 0x1800049B8 (LdrpDetectDetour.c)
 *     LdrpProcessDetachNode @ 0x18000554C (LdrpProcessDetachNode.c)
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpDynamicShimModule @ 0x18000A5AC (LdrpDynamicShimModule.c)
 *     LdrpPrepareModuleForExecution @ 0x18000BAC0 (LdrpPrepareModuleForExecution.c)
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     LdrpFindKnownDll @ 0x18000E074 (LdrpFindKnownDll.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpMapViewOfSection @ 0x18000EA30 (LdrpMapViewOfSection.c)
 *     LdrpSendPostSnapNotifications @ 0x18000F730 (LdrpSendPostSnapNotifications.c)
 *     LdrpFindDllActivationContext @ 0x18000F8A0 (LdrpFindDllActivationContext.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDllInternal @ 0x18001138C (LdrpFindLoadedDllInternal.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpPreprocessDllName @ 0x1800121A0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrResolveDelayLoadedAPI @ 0x180031DC0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 *     LdrpInitializeTls @ 0x1800407A4 (LdrpInitializeTls.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     LdrpLoadWow64 @ 0x18004ED50 (LdrpLoadWow64.c)
 *     LdrShutdownProcess @ 0x18005B1A0 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180071F68 (LdrpInitializeNode.c)
 *     LdrpMergeNodes @ 0x180074CC8 (LdrpMergeNodes.c)
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     LdrpComputeLazyDllPath @ 0x18007B364 (LdrpComputeLazyDllPath.c)
 *     LdrGetKnownDllSectionHandle @ 0x18007FCD0 (LdrGetKnownDllSectionHandle.c)
 *     LdrpRelocateImage @ 0x1800802E4 (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800803C0 (LdrpProtectAndRelocateImage.c)
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180080E70 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x180080F60 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081A3C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800823DC (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 *     LdrInitShimEngineDynamic @ 0x1800CA7C0 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800CAB30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializationFailure @ 0x1800CAD44 (LdrpInitializationFailure.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800CADEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800CAFFC (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800CB0A4 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800CB178 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800C9290 (StringCbPrintfA.c)
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
      (&off_1801028A8)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
