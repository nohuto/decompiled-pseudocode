/*
 * XREFs of RtlCopyUnicodeString @ 0x140043CB0
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140004C40 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140005FD0 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     IopQueryFullDriverPath @ 0x1401BC2AC (IopQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x1401FB4AC (RtlPcToFileName.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1403B7A18 (SdbMakeIndexKeyFromStringEx.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1403C2188 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     FsRtlFindInTunnelCache @ 0x140492444 (FsRtlFindInTunnelCache.c)
 *     PnpProcessRelation @ 0x14049EE70 (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     IopCheckTopDeviceHint @ 0x1404A7514 (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1404C0B58 (IopSymlinkUpdateECP.c)
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 *     PiDeferSetInterfaceState @ 0x1404EA11C (PiDeferSetInterfaceState.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     PnpConcatenateUnicodeStrings @ 0x140508254 (PnpConcatenateUnicodeStrings.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140519D5C (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140519EF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x14054B8D0 (PnpCopyDeviceInstancePath.c)
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x140601AB8 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140603CC0 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpQueryRebalanceWorker @ 0x140605F98 (PnpQueryRebalanceWorker.c)
 *     PnpFinalizeVetoedRemove @ 0x14060E5A8 (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     ObGetRootDirectoryNameByPointer @ 0x140630A1C (ObGetRootDirectoryNameByPointer.c)
 *     PopFxRegisterComponentPerfStates @ 0x140634CF4 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x140635ED4 (PopProcessWakeSourceWork.c)
 *     RtlPcToFilePath @ 0x14064C7EC (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x14069E060 (AhcCacheQueryHwId.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 *     ExpandKnownDllsPath @ 0x14075CCB4 (ExpandKnownDllsPath.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // eax
  wchar_t *Buffer; // r9
  wchar_t *v5; // rsi
  unsigned __int16 MaximumLength; // cx
  unsigned __int64 v7; // rdi

  if ( SourceString )
  {
    Length = SourceString->Length;
    Buffer = SourceString->Buffer;
    v5 = DestinationString->Buffer;
    MaximumLength = DestinationString->MaximumLength;
    if ( (unsigned __int16)Length > MaximumLength )
      Length = MaximumLength;
    DestinationString->Length = Length;
    v7 = Length;
    memmove(v5, Buffer, Length);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v5[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
