/*
 * XREFs of RtlImageNtHeaderEx @ 0x1800348B0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF58 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C014 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpProcessMappedModule @ 0x18002F938 (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x18002FAE4 (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002FF00 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310E8 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031534 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800318FC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     LdrpGetProcedureAddress @ 0x180032370 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     LdrpResGetResourceDirectory @ 0x1800376C0 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x180039860 (LdrpResGetMappingSize.c)
 *     LdrpInitializeTls @ 0x180051188 (LdrpInitializeTls.c)
 *     CsrClientConnectToServer @ 0x1800751B0 (CsrClientConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007833C (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x1800784B0 (LdrGetDllHandleByMapping.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x180084D28 (LdrpSetProtection.c)
 *     LdrRelocateImage @ 0x180084E2C (LdrRelocateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE60 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpInitializeExceptionTable @ 0x1800D25A4 (LdrpInitializeExceptionTable.c)
 *     LdrpLocateMrdata @ 0x1800D2EB0 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800EB2D8 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800F0554 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  char v7; // cl
  unsigned __int64 v8; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_16:
    result = 3221225595LL;
    goto LABEL_19;
  }
  v8 = *(unsigned int *)(a2 + 60);
  if ( v7 && (v8 >= a3 || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( (unsigned int)v8 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v8);
    if ( a2 + v8 >= a2 && *v6 == 17744 )
      goto LABEL_19;
    goto LABEL_16;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_19:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
