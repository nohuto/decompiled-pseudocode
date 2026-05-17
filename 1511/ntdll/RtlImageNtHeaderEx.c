/*
 * XREFs of RtlImageNtHeaderEx @ 0x180034B30
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800058A8 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180005924 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18000FF68 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpValidateEntrySection @ 0x1800102A8 (LdrpValidateEntrySection.c)
 *     LdrpProcessMappedModule @ 0x1800102F0 (LdrpProcessMappedModule.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18003052C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031AD0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180031EE0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 *     LdrpResGetResourceDirectory @ 0x180037860 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800397F0 (LdrpResGetMappingSize.c)
 *     LdrpInitializeTls @ 0x1800407A4 (LdrpInitializeTls.c)
 *     CsrClientConnectToServer @ 0x180051EF0 (CsrClientConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076AA0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x180076C10 (LdrGetDllHandleByMapping.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x1800804B8 (LdrpSetProtection.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180087A00 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpLocateMrdata @ 0x1800CBB30 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800E7374 (RtlImageNtHeaderEx_ExceptionFilter.c)
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
