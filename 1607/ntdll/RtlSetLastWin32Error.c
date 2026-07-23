/*
 * XREFs of RtlSetLastWin32Error @ 0x18005A460
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002A1A4 (EtwpSetProviderTraits.c)
 *     EtwRegisterTraceGuidsW @ 0x18002A2E0 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x18002A3B0 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x18002A400 (EtwNotificationRegister.c)
 *     TppSetTimer @ 0x18003C378 (TppSetTimer.c)
 *     EtwUnregisterTraceGuids @ 0x180059690 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x1800596F0 (EtwNotificationUnregister.c)
 *     EvtIntReportEventWorker @ 0x1800598CC (EvtIntReportEventWorker.c)
 *     ResCKeOpenRuntimeView @ 0x18005A004 (ResCKeOpenRuntimeView.c)
 *     _ResCMapCMFModule @ 0x18005A1A0 (_ResCMapCMFModule.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18005A440 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     ResCDirectoryValidateHeader @ 0x18005D090 (ResCDirectoryValidateHeader.c)
 *     ResCGetRegistryLatestIndex @ 0x18005D658 (ResCGetRegistryLatestIndex.c)
 *     EtwEventActivityIdControl @ 0x18006E510 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18007D850 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwpTrackProviderBinary @ 0x180083FD0 (EtwpTrackProviderBinary.c)
 *     EtwGetTraceLoggerHandle @ 0x1800862E0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableFlags @ 0x180086770 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceEnableLevel @ 0x1800867B0 (EtwGetTraceEnableLevel.c)
 *     ResCDirectoryGetEntryIndexEx @ 0x18008A138 (ResCDirectoryGetEntryIndexEx.c)
 *     ResCDirectoryGetEntryCopyAndIndex @ 0x18008A1B0 (ResCDirectoryGetEntryCopyAndIndex.c)
 *     EtwRegisterSecurityProvider @ 0x18008E1D0 (EtwRegisterSecurityProvider.c)
 *     ResCRuntimeGetResourceDataEx @ 0x180095F0C (ResCRuntimeGetResourceDataEx.c)
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
 *     ResCDirectoryFree @ 0x1800FFD50 (ResCDirectoryFree.c)
 *     ResCDirectoryGetSegmentName @ 0x1800FFE78 (ResCDirectoryGetSegmentName.c)
 *     ResCDirectoryValidate @ 0x1800FFED4 (ResCDirectoryValidate.c)
 *     ResCHitsEntryHit @ 0x1800FFF8C (ResCHitsEntryHit.c)
 *     ResCHitsFree @ 0x1800FFFF4 (ResCHitsFree.c)
 *     ResCSegmentCreateMapping @ 0x1801001BC (ResCSegmentCreateMapping.c)
 *     ResCSegmentFree @ 0x180100250 (ResCSegmentFree.c)
 *     ResCReleaseInitMutex @ 0x18010325C (ResCReleaseInitMutex.c)
 *     ResCultureNameToLCID @ 0x180103360 (ResCultureNameToLCID.c)
 *     _ResCCreateMappingExclusive @ 0x1801034B8 (_ResCCreateMappingExclusive.c)
 *     _ResCDupString @ 0x180103754 (_ResCDupString.c)
 *     _ResCFlushMappedView @ 0x1801037FC (_ResCFlushMappedView.c)
 *     _ResCLoadFixedSize @ 0x180103848 (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x180103978 (_ResCOpenMapping.c)
 *     _ResCloseHandle @ 0x180103A20 (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
 *     _ResCreateFileMapping @ 0x180103CD0 (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x180103DFC (_ResCreateMutex.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x1801041AC (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x180104664 (_ResFindNextFileW.c)
 *     _ResGetFileAttributesEx @ 0x180104888 (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x1801049B4 (_ResGetFileAttributesW.c)
 *     _ResGetFileSizeEx @ 0x180104A80 (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x180104AF4 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x180104BB4 (_ResOpenFileMapping.c)
 *     _ResReadFile @ 0x180104C60 (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x180104D1C (_ResUnmapViewOfFile.c)
 *     _ResWaitForSingleObject @ 0x180104D8C (_ResWaitForSingleObject.c)
 *     ResCCreateCultureMap @ 0x180105584 (ResCCreateCultureMap.c)
 *     ResCCultureMapCreateAndPopulate @ 0x180105700 (ResCCultureMapCreateAndPopulate.c)
 *     ResCCultureMapPopulate @ 0x1801057A0 (ResCCultureMapPopulate.c)
 *     ResCGetCultureID @ 0x180105904 (ResCGetCultureID.c)
 *     ResCReloadCultureMap @ 0x180105A60 (ResCReloadCultureMap.c)
 *     ResCDirectoryCreateAndPopulate @ 0x180105C1C (ResCDirectoryCreateAndPopulate.c)
 *     ResCDirectoryValidateEntries @ 0x180105D68 (ResCDirectoryValidateEntries.c)
 *     ResCHitsCreateAndPopulate @ 0x180105F1C (ResCHitsCreateAndPopulate.c)
 *     ResCSegmentCreateAndPopulate @ 0x180106000 (ResCSegmentCreateAndPopulate.c)
 *     ResCSegmentPopulate @ 0x1801060A0 (ResCSegmentPopulate.c)
 * Callees:
 *     EtwEventWrite @ 0x18005AF10 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  bool v2; // zf
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF
  LONG v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = Win32Error;
  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v2 = g_isErrorOriginProviderEnabled == 0;
    v1->LastErrorValue = Win32Error;
    if ( !v2 )
    {
      if ( v4 )
      {
        UserData.Ptr = (unsigned __int64)&v4;
        *(_QWORD *)&UserData.Size = 4LL;
        EtwEventWrite(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 1u, &UserData);
      }
    }
  }
}
