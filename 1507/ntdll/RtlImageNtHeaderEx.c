/*
 * XREFs of RtlImageNtHeaderEx @ 0x180015E10
 * Callers:
 *     CsrClientConnectToServer @ 0x180004320 (CsrClientConnectToServer.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180015594 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpGetProcedureAddress @ 0x180015BD0 (LdrpGetProcedureAddress.c)
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800170B8 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180018438 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpResGetResourceDirectory @ 0x180018C10 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x18001AFF0 (LdrpResGetMappingSize.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x180040E84 (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180041260 (LdrpFetchAddressOfSecurityCookie.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x180043A84 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180043B40 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpInitializeTls @ 0x180055594 (LdrpInitializeTls.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18006BFC4 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x18006C130 (LdrGetDllHandleByMapping.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x1800734DC (LdrpSetProtection.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18007F190 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     LdrpLocateMrdata @ 0x1800C14D4 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800E22D4 (RtlImageNtHeaderEx_ExceptionFilter.c)
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
