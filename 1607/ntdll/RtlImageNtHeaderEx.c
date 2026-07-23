/*
 * XREFs of RtlImageNtHeaderEx @ 0x1800348A0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF48 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C004 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x18002FAD4 (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002FEF0 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310D8 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031524 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800318EC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180031C10 (RtlImageNtHeader.c)
 *     LdrpGetProcedureAddress @ 0x180032360 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     LdrpResGetResourceDirectory @ 0x1800376B0 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x180039850 (LdrpResGetMappingSize.c)
 *     LdrpInitializeTls @ 0x180051178 (LdrpInitializeTls.c)
 *     CsrClientConnectToServer @ 0x1800751A0 (CsrClientConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007832C (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x1800784A0 (LdrGetDllHandleByMapping.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x180084D18 (LdrpSetProtection.c)
 *     LdrRelocateImage @ 0x180084E1C (LdrRelocateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE50 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpInitializeExceptionTable @ 0x1800D2664 (LdrpInitializeExceptionTable.c)
 *     LdrpLocateMrdata @ 0x1800D2F70 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800EB398 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800F0554 (RtlImageNtHeaderEx_ExceptionFilter.c)
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
