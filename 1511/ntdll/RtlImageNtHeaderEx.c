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

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  _IMAGE_NT_HEADERS64 *v6; // r10
  char v7; // cl
  ULONG64 v8; // r8

  result = 0;
  v6 = 0LL;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage != 23117 )
  {
LABEL_16:
    result = -1073741701;
    goto LABEL_19;
  }
  v8 = *((unsigned int *)BaseOfImage + 15);
  if ( v7 && (v8 >= Size || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= Size) )
  {
    result = -1073741701;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( (unsigned int)v8 < 0x10000000 )
  {
    v6 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v8);
    if ( (char *)BaseOfImage + v8 >= BaseOfImage && v6->Signature == 17744 )
      goto LABEL_19;
    goto LABEL_16;
  }
  result = -1073741701;
  v6 = 0LL;
LABEL_19:
  if ( result >= 0 )
    *OutHeaders = v6;
  return result;
}
