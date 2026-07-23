/*
 * XREFs of RtlNtStatusToDosError @ 0x18000F0C0
 * Callers:
 *     EtwpTrackProviderBinary @ 0x180001410 (EtwpTrackProviderBinary.c)
 *     EtwpReceiveReplyDataBlock @ 0x180001AB0 (EtwpReceiveReplyDataBlock.c)
 *     EtwpProviderArrivalCallback @ 0x1800027E4 (EtwpProviderArrivalCallback.c)
 *     EtwReplyNotification @ 0x180002A90 (EtwReplyNotification.c)
 *     EtwpUseDescriptorType @ 0x180002AD8 (EtwpUseDescriptorType.c)
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     EtwpStopUmLogger @ 0x18000A520 (EtwpStopUmLogger.c)
 *     EtwpSetProviderTraits @ 0x18000E1DC (EtwpSetProviderTraits.c)
 *     EtwTraceMessageVa @ 0x18000E510 (EtwTraceMessageVa.c)
 *     EtwSendNotification @ 0x18000EA20 (EtwSendNotification.c)
 *     _ResCGetRegistryFlags @ 0x18000EB40 (_ResCGetRegistryFlags.c)
 *     _ResCMapCMFModule @ 0x18000EED8 (_ResCMapCMFModule.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18000F070 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpEventWriteFull @ 0x18000F734 (EtwpEventWriteFull.c)
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     EtwpRegisterProvider @ 0x180038A60 (EtwpRegisterProvider.c)
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpSetUserValueHeapInternal @ 0x180058098 (RtlpSetUserValueHeapInternal.c)
 *     EtwEventActivityIdControl @ 0x180063E10 (EtwEventActivityIdControl.c)
 *     EtwWriteUMSecurityEvent @ 0x18006E250 (EtwWriteUMSecurityEvent.c)
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800766E0 (EtwpAllocateTraceBufferPool.c)
 *     EtwEventWriteNoRegistration @ 0x180077C30 (EtwEventWriteNoRegistration.c)
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 *     EtwLogTraceEvent @ 0x18007EF30 (EtwLogTraceEvent.c)
 *     EtwRegisterSecurityProvider @ 0x180081B40 (EtwRegisterSecurityProvider.c)
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x1800DD7F8 (RtlpSizeHeapInternal.c)
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EC190 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EC5E0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800ECAF0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800ECC9C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800ED358 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800ED52C (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800ED6C8 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800ED858 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x1800F3C40 (EtwEventWriteString.c)
 *     EtwSetMark @ 0x1800F3E70 (EtwSetMark.c)
 *     EtwTraceEventInstance @ 0x1800F3EA0 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x1800F4044 (EtwpBufferingModeFlush.c)
 *     EtwpUpdateUmLogger @ 0x1800F4918 (EtwpUpdateUmLogger.c)
 *     EtwpGenerateFileName @ 0x1800F4D30 (EtwpGenerateFileName.c)
 *     ResCGetRegistryLatestIndex @ 0x1800F8FB0 (ResCGetRegistryLatestIndex.c)
 *     ResCReleaseInitMutex @ 0x1800F9070 (ResCReleaseInitMutex.c)
 *     ResCultureNameToLCID @ 0x1800F9174 (ResCultureNameToLCID.c)
 *     _ResCFlushMappedView @ 0x1800F9610 (_ResCFlushMappedView.c)
 *     _ResCloseHandle @ 0x1800F9834 (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
 *     _ResCreateFileMapping @ 0x1800F9AE0 (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x1800F9C0C (_ResCreateMutex.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 *     _ResGetFileAttributesEx @ 0x1800FA684 (_ResGetFileAttributesEx.c)
 *     _ResGetFileSizeEx @ 0x1800FA87C (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x1800FA8F0 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x1800FA9B0 (_ResOpenFileMapping.c)
 *     _ResReadFile @ 0x1800FAA5C (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 *     _ResWaitForSingleObject @ 0x1800FAB88 (_ResWaitForSingleObject.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
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
  __int64 v9; // rcx
  int v10; // eax

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
  v4 = 275;
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
      if ( v7 < (unsigned __int8)byte_180108AE4[8 * v5] )
      {
        v9 = 8 * v5;
        v10 = (unsigned __int16)word_180108AE6[4 * v5];
        if ( byte_180108AE5[v9] == 1 )
          return (unsigned __int16)RtlpStatusTable[v7 + v10];
        else
          return (unsigned __int16)RtlpStatusTable[2 * v7 + v10] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v10] << 16);
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
