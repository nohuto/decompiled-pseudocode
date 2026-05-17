/*
 * XREFs of RtlSetLastWin32Error @ 0x18005A470
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002A1B4 (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x18002A2F0 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x18002A3C0 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x18002A410 (EtwNotificationRegister.c)
 *     TppSetTimer @ 0x18003C388 (TppSetTimer.c)
 *     EtwUnregisterTraceGuids @ 0x1800596A0 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x180059700 (EtwNotificationUnregister.c)
 *     EvtIntReportEventWorker @ 0x1800598DC (EvtIntReportEventWorker.c)
 *     ResCKeOpenRuntimeView @ 0x18005A014 (ResCKeOpenRuntimeView.c)
 *     _ResCMapCMFModule @ 0x18005A1B0 (_ResCMapCMFModule.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18005A450 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     ResCDirectoryValidateHeader @ 0x18005D0A0 (ResCDirectoryValidateHeader.c)
 *     ResCGetRegistryLatestIndex @ 0x18005D668 (ResCGetRegistryLatestIndex.c)
 *     EtwEventActivityIdControl @ 0x18006E520 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18007D860 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwpTrackProviderBinary @ 0x180083FE0 (EtwpTrackProviderBinary.c)
 *     EtwGetTraceLoggerHandle @ 0x1800862F0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableFlags @ 0x180086780 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceEnableLevel @ 0x1800867C0 (EtwGetTraceEnableLevel.c)
 *     ResCDirectoryGetEntryIndexEx @ 0x18008A148 (ResCDirectoryGetEntryIndexEx.c)
 *     ResCDirectoryGetEntryCopyAndIndex @ 0x18008A1C0 (ResCDirectoryGetEntryCopyAndIndex.c)
 *     EtwRegisterSecurityProvider @ 0x18008E1E0 (EtwRegisterSecurityProvider.c)
 *     ResCRuntimeGetResourceDataEx @ 0x180095F1C (ResCRuntimeGetResourceDataEx.c)
 *     EtwCreateTraceInstanceId @ 0x1800FD020 (EtwCreateTraceInstanceId.c)
 *     EtwpUseDescriptorType @ 0x1800FD3D0 (EtwpUseDescriptorType.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 *     ResCKeGetCacheIndices @ 0x1800FF240 (ResCKeGetCacheIndices.c)
 *     ResCRuntimeGetCultureID @ 0x1800FF388 (ResCRuntimeGetCultureID.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x1800FF43C (ResCRuntimeGetSegmentDataEx.c)
 *     ResCRuntimeUnmapSegment @ 0x1800FF6FC (ResCRuntimeUnmapSegment.c)
 *     ResCRuntimeViewLoadCultureMap @ 0x1800FF784 (ResCRuntimeViewLoadCultureMap.c)
 *     ??$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@I@Z @ 0x1800FF860 (--$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@.c)
 *     ??$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@@Z @ 0x1800FF8F0 (--$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCAC.c)
 *     ResCDirectoryFree @ 0x1800FFE18 (ResCDirectoryFree.c)
 *     ResCDirectoryGetSegmentName @ 0x1800FFF40 (ResCDirectoryGetSegmentName.c)
 *     ResCDirectoryValidate @ 0x1800FFF9C (ResCDirectoryValidate.c)
 *     ResCHitsEntryHit @ 0x180100054 (ResCHitsEntryHit.c)
 *     ResCHitsFree @ 0x1801000BC (ResCHitsFree.c)
 *     ResCSegmentCreateMapping @ 0x180100284 (ResCSegmentCreateMapping.c)
 *     ResCSegmentFree @ 0x180100318 (ResCSegmentFree.c)
 *     ResCReleaseInitMutex @ 0x18010331C (ResCReleaseInitMutex.c)
 *     ResCultureNameToLCID @ 0x180103420 (ResCultureNameToLCID.c)
 *     _ResCCreateMappingExclusive @ 0x180103578 (_ResCCreateMappingExclusive.c)
 *     _ResCDupString @ 0x180103814 (_ResCDupString.c)
 *     _ResCFlushMappedView @ 0x1801038BC (_ResCFlushMappedView.c)
 *     _ResCLoadFixedSize @ 0x180103908 (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x180103A38 (_ResCOpenMapping.c)
 *     _ResCloseHandle @ 0x180103AE0 (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x180103B80 (_ResCreateFile.c)
 *     _ResCreateFileMapping @ 0x180103D90 (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x180103EBC (_ResCreateMutex.c)
 *     _ResCreateSecurityDescriptor @ 0x180103F4C (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x18010426C (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x180104314 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x180104724 (_ResFindNextFileW.c)
 *     _ResGetFileAttributesEx @ 0x180104948 (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x180104A74 (_ResGetFileAttributesW.c)
 *     _ResGetFileSizeEx @ 0x180104B40 (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x180104BB4 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x180104C74 (_ResOpenFileMapping.c)
 *     _ResReadFile @ 0x180104D20 (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x180104DDC (_ResUnmapViewOfFile.c)
 *     _ResWaitForSingleObject @ 0x180104E4C (_ResWaitForSingleObject.c)
 *     ResCCreateCultureMap @ 0x180105644 (ResCCreateCultureMap.c)
 *     ResCCultureMapCreateAndPopulate @ 0x1801057C0 (ResCCultureMapCreateAndPopulate.c)
 *     ResCCultureMapPopulate @ 0x180105860 (ResCCultureMapPopulate.c)
 *     ResCGetCultureID @ 0x1801059C4 (ResCGetCultureID.c)
 *     ResCReloadCultureMap @ 0x180105B20 (ResCReloadCultureMap.c)
 *     ResCDirectoryCreateAndPopulate @ 0x180105C14 (ResCDirectoryCreateAndPopulate.c)
 *     ResCDirectoryValidateEntries @ 0x180105D60 (ResCDirectoryValidateEntries.c)
 *     ResCHitsCreateAndPopulate @ 0x180105F14 (ResCHitsCreateAndPopulate.c)
 *     ResCSegmentCreateAndPopulate @ 0x180106000 (ResCSegmentCreateAndPopulate.c)
 *     ResCSegmentPopulate @ 0x1801060A0 (ResCSegmentPopulate.c)
 * Callees:
 *     EtwEventWrite @ 0x18005AF20 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

struct _TEB *__fastcall RtlSetLastWin32Error(unsigned int a1)
{
  struct _TEB *result; // rax
  bool v2; // zf
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1;
  result = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && a1 == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( result->LastErrorValue != a1 )
  {
    v2 = g_isErrorOriginProviderEnabled == 0;
    result->LastErrorValue = a1;
    if ( !v2 )
    {
      if ( v4 )
      {
        v3[0] = &v4;
        v3[1] = 4LL;
        return (struct _TEB *)EtwEventWrite(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 1LL, v3);
      }
    }
  }
  return result;
}
