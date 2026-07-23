/*
 * XREFs of RtlNtStatusToDosError @ 0x180048C10
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x18000311C (EtwpReceiveReplyDataBlock.c)
 *     EtwpUseDescriptorType @ 0x180003388 (EtwpUseDescriptorType.c)
 *     EtwpProviderArrivalCallback @ 0x1800034E4 (EtwpProviderArrivalCallback.c)
 *     EtwReplyNotification @ 0x1800037D0 (EtwReplyNotification.c)
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     EtwpStartUmLogger @ 0x180044BE8 (EtwpStartUmLogger.c)
 *     EtwpAllocateTraceBufferPool @ 0x180045378 (EtwpAllocateTraceBufferPool.c)
 *     EtwTraceMessageVa @ 0x180047FF0 (EtwTraceMessageVa.c)
 *     EtwSendNotification @ 0x180048570 (EtwSendNotification.c)
 *     _ResCGetRegistryFlags @ 0x180048690 (_ResCGetRegistryFlags.c)
 *     _ResCMapCMFModule @ 0x180048A28 (_ResCMapCMFModule.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180048BC0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpEventWriteFull @ 0x180049D14 (EtwpEventWriteFull.c)
 *     ResCGetRegistryLatestIndex @ 0x18004BBEC (ResCGetRegistryLatestIndex.c)
 *     EtwLogTraceEvent @ 0x18004CC30 (EtwLogTraceEvent.c)
 *     EtwpSetProviderTraits @ 0x180053EFC (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x1800542E4 (EtwpRegisterProvider.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 *     EtwEventActivityIdControl @ 0x180071090 (EtwEventActivityIdControl.c)
 *     RtlGetUserInfoHeap @ 0x1800744C0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180074870 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18007AFE0 (EtwWriteUMSecurityEvent.c)
 *     EtwpTrackProviderBinary @ 0x18007EE08 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteNoRegistration @ 0x180084090 (EtwEventWriteNoRegistration.c)
 *     EtwRegisterSecurityProvider @ 0x180089B50 (EtwRegisterSecurityProvider.c)
 *     RtlCompactHeap @ 0x18008DFD0 (RtlCompactHeap.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EEC28 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EF078 (RtlDebugCreateTagHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800EF27C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800EF428 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800EFAE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800EFCB8 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800EFE54 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800EFFE4 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x1800F3AE0 (EtwEventWriteString.c)
 *     EtwSetMark @ 0x1800F3D10 (EtwSetMark.c)
 *     EtwTraceEventInstance @ 0x1800F3D40 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x1800F3EE4 (EtwpBufferingModeFlush.c)
 *     EtwpUpdateUmLogger @ 0x1800F431C (EtwpUpdateUmLogger.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
 *     ResCReleaseInitMutex @ 0x1800F8988 (ResCReleaseInitMutex.c)
 *     ResCultureNameToLCID @ 0x1800F8A8C (ResCultureNameToLCID.c)
 *     _ResCFlushMappedView @ 0x1800F8F28 (_ResCFlushMappedView.c)
 *     _ResCloseHandle @ 0x1800F914C (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x1800F91EC (_ResCreateFile.c)
 *     _ResCreateFileMapping @ 0x1800F93F8 (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x1800F9524 (_ResCreateMutex.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
 *     _ResGetFileAttributesEx @ 0x1800F9F9C (_ResGetFileAttributesEx.c)
 *     _ResGetFileSizeEx @ 0x1800FA194 (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x1800FA208 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x1800FA2C8 (_ResOpenFileMapping.c)
 *     _ResReadFile @ 0x1800FA374 (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x1800FA430 (_ResUnmapViewOfFile.c)
 *     _ResWaitForSingleObject @ 0x1800FA4A0 (_ResWaitForSingleObject.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
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
  v4 = 273;
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
      if ( v7 < (unsigned __int8)byte_18010E534[8 * v5] )
      {
        v10 = 8 * v5;
        v11 = (unsigned __int16)word_18010E536[4 * v5];
        if ( byte_18010E535[v10] == 1 )
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
