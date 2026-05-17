/*
 * XREFs of RtlFreeAnsiString @ 0x18001C980
 * Callers:
 *     LdrSetDllDirectory @ 0x180001750 (LdrSetDllDirectory.c)
 *     EtwpFlushUmLogger @ 0x180003A90 (EtwpFlushUmLogger.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000C5D0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlOpenCurrentUser @ 0x18000D2A0 (RtlOpenCurrentUser.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180015A2C (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure @ 0x180017D30 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure.c)
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180019080 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpLogDllStateEx2 @ 0x18002FABC (LdrpLogDllStateEx2.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrpQuerySxSMUIFile @ 0x18003CFD0 (LdrpQuerySxSMUIFile.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpGetRegistryHandle @ 0x180046F68 (RtlpGetRegistryHandle.c)
 *     EtwpCreateFile @ 0x1800470F0 (EtwpCreateFile.c)
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800628B0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateServiceSid @ 0x180062A60 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180065190 (RtlCreateVirtualAccountSid.c)
 *     RtlEqualDomainName @ 0x1800692D0 (RtlEqualDomainName.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180080234 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlpTpIoDllLoaded @ 0x18008D098 (RtlpTpIoDllLoaded.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800C9DB8 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800CA8C4 (LdrpCheckAppDirType.c)
 *     sxsisol_RespectDotLocal @ 0x1800D24BC (sxsisol_RespectDotLocal.c)
 *     RtlIsNameInExpression @ 0x1800E76B0 (RtlIsNameInExpression.c)
 *     EtwpUpdateUmLogger @ 0x1800F431C (EtwpUpdateUmLogger.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
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
