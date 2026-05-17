/*
 * XREFs of RtlFreeAnsiString @ 0x180027410
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     EtwpFlushUmLogger @ 0x180002EE4 (EtwpFlushUmLogger.c)
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001FB60 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure @ 0x180026EA4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure.c)
 *     LdrpLogDllStateEx2 @ 0x180036BEC (LdrpLogDllStateEx2.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlOpenCurrentUser @ 0x180049B90 (RtlOpenCurrentUser.c)
 *     RtlCreateServiceSid @ 0x18004F110 (RtlCreateServiceSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180050F90 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x180052D20 (RtlCreateVirtualAccountSid.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18005329C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlEqualDomainName @ 0x18005D940 (RtlEqualDomainName.c)
 *     RtlDosSearchPath_Ustr @ 0x18005FCB0 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x18006E354 (LdrpQuerySxSMUIFile.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180072510 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 *     EtwpCreateFile @ 0x1800787B8 (EtwpCreateFile.c)
 *     RtlpTpIoDllLoaded @ 0x18007ED38 (RtlpTpIoDllLoaded.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800BD098 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800BDC24 (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     sxsisol_RespectDotLocal @ 0x1800C99DC (sxsisol_RespectDotLocal.c)
 *     RtlIsNameInExpression @ 0x1800E2610 (RtlIsNameInExpression.c)
 *     EtwpUpdateUmLogger @ 0x1800F4918 (EtwpUpdateUmLogger.c)
 *     EtwpGenerateFileName @ 0x1800F4D30 (EtwpGenerateFileName.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  unsigned __int16 *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    NtdllpFreeStringRoutine(Buffer);
    *(_QWORD *)&UnicodeString->Length = 0LL;
    UnicodeString->Buffer = 0LL;
  }
}
