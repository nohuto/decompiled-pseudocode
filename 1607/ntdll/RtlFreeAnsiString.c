/*
 * XREFs of RtlFreeAnsiString @ 0x1800427E0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     sxsisol_RespectDotLocal @ 0x1800033F8 (sxsisol_RespectDotLocal.c)
 *     RtlCreateVirtualAccountSid @ 0x180008FE0 (RtlCreateVirtualAccountSid.c)
 *     RtlCreateServiceSid @ 0x18000B8E0 (RtlCreateServiceSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18000C630 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpLogDllStateEx2 @ 0x18000CA78 (LdrpLogDllStateEx2.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F010 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800152A0 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001A964 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 *     RtlDosSearchPath_Ustr @ 0x180042810 (RtlDosSearchPath_Ustr.c)
 *     EtwpFreeLoggerContext @ 0x180051E5C (EtwpFreeLoggerContext.c)
 *     EtwpCreateFile @ 0x180054F48 (EtwpCreateFile.c)
 *     EtwpInitLoggerContext @ 0x1800550E0 (EtwpInitLoggerContext.c)
 *     RtlEqualDomainName @ 0x180055590 (RtlEqualDomainName.c)
 *     RtlpGetRegistryHandle @ 0x1800582AC (RtlpGetRegistryHandle.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006893C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlOpenCurrentUser @ 0x1800718A0 (RtlOpenCurrentUser.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1FC (LdrpQuerySxSMUIFile.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180084AC8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlpTpIoDllLoaded @ 0x180090048 (RtlpTpIoDllLoaded.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D129C (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800D1E74 (LdrpCheckAppDirType.c)
 *     RtlIsNameInExpression @ 0x1800F0890 (RtlIsNameInExpression.c)
 *     EtwpFlushUmLogger @ 0x1800FD8D4 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800FDAC8 (EtwpUpdateUmLogger.c)
 *     EtwpGenerateFileName @ 0x1800FDE14 (EtwpGenerateFileName.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    NtdllpFreeStringRoutine((__int64)Buffer);
    *(_QWORD *)&UnicodeString->Length = 0LL;
    UnicodeString->Buffer = 0LL;
  }
}
