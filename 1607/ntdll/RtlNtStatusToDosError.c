/*
 * XREFs of RtlNtStatusToDosError @ 0x18005A4D0
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x180002768 (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180003030 (EtwReplyNotification.c)
 *     EtwEventWriteNoRegistration @ 0x180008A60 (EtwEventWriteNoRegistration.c)
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     EtwpSetProviderTraits @ 0x18002A1A4 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18002A4F4 (EtwpRegisterProvider.c)
 *     RtlSizeHeap @ 0x180046170 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpStopUmLogger @ 0x1800533F0 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x18005395C (EtwpStartUmLogger.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054620 (EtwpAllocateTraceBufferPool.c)
 *     EtwSendNotification @ 0x180059CF0 (EtwSendNotification.c)
 *     _ResCGetRegistryFlags @ 0x180059E10 (_ResCGetRegistryFlags.c)
 *     _ResCMapCMFModule @ 0x18005A1A0 (_ResCMapCMFModule.c)
 *     EtwTraceMessageVa @ 0x18005A370 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18005A440 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpEventWriteFull @ 0x18005AF94 (EtwpEventWriteFull.c)
 *     EtwLogTraceEvent @ 0x18005B870 (EtwLogTraceEvent.c)
 *     ResCGetRegistryLatestIndex @ 0x18005D658 (ResCGetRegistryLatestIndex.c)
 *     EtwEventActivityIdControl @ 0x18006E510 (EtwEventActivityIdControl.c)
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 *     EtwpProviderArrivalCallback @ 0x180079848 (EtwpProviderArrivalCallback.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18007D7A0 (EtwWriteUMSecurityEvent.c)
 *     EtwpTrackProviderBinary @ 0x180083FD0 (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008E1D0 (EtwRegisterSecurityProvider.c)
 *     RtlCompactHeap @ 0x1800909F0 (RtlCompactHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800FA590 (RtlDebugCreateTagHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800FA938 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FB4C8 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x1800FD1A0 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x1800FD3D0 (EtwpUseDescriptorType.c)
 *     EtwSetMark @ 0x1800FD4C0 (EtwSetMark.c)
 *     EtwTraceEventInstance @ 0x1800FD4F0 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x1800FD694 (EtwpBufferingModeFlush.c)
 *     EtwpUpdateUmLogger @ 0x1800FDAC8 (EtwpUpdateUmLogger.c)
 *     EtwpGenerateFileName @ 0x1800FDE14 (EtwpGenerateFileName.c)
 *     ResCReleaseInitMutex @ 0x18010325C (ResCReleaseInitMutex.c)
 *     ResCultureNameToLCID @ 0x180103360 (ResCultureNameToLCID.c)
 *     _ResCFlushMappedView @ 0x1801037FC (_ResCFlushMappedView.c)
 *     _ResCloseHandle @ 0x180103A20 (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
 *     _ResCreateFileMapping @ 0x180103CD0 (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x180103DFC (_ResCreateMutex.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
 *     _ResGetFileAttributesEx @ 0x180104888 (_ResGetFileAttributesEx.c)
 *     _ResGetFileSizeEx @ 0x180104A80 (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x180104AF4 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x180104BB4 (_ResOpenFileMapping.c)
 *     _ResReadFile @ 0x180104C60 (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x180104D1C (_ResUnmapViewOfFile.c)
 *     _ResWaitForSingleObject @ 0x180104D8C (_ResWaitForSingleObject.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  unsigned __int32 v1; // edx
  struct _TEB *v2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  __int64 v10; // rcx
  int v11; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
    return Status;
  if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
    return (unsigned __int16)v1;
  if ( (Status & 0xF0000000) == 0xD0000000 )
    v1 = Status & 0xCFFFFFFF;
  v3 = 0;
  v4 = 287;
  do
  {
    v5 = (v4 + v3) >> 1;
    v6 = RtlpRunTable[2 * v5];
    v7 = v1 - v6;
    if ( v1 < v6 )
    {
      v4 = v5 - 1;
    }
    else
    {
      if ( v7 < (unsigned __int8)byte_18011AF44[8 * v5] )
      {
        v10 = 8 * v5;
        v11 = (unsigned __int16)word_18011AF46[4 * v5];
        if ( byte_18011AF45[v10] == 1 )
          return (unsigned __int16)RtlpStatusTable[v7 + v11];
        else
          return (unsigned __int16)RtlpStatusTable[2 * v7 + v11] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v11] << 16);
      }
      v3 = v5 + 1;
    }
  }
  while ( v3 <= v4 );
  if ( (v1 & 0xFFFF0000) == 0xC0010000 )
    return (unsigned __int16)v1;
  DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
  DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
  DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
  return 317;
}
