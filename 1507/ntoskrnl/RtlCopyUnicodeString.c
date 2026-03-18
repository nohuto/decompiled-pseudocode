/*
 * XREFs of RtlCopyUnicodeString @ 0x140047E40
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14010DB6C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x1401F70FC (IoQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x14024A240 (RtlPcToFileName.c)
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     FsRtlFindInTunnelCache @ 0x14043A2FC (FsRtlFindInTunnelCache.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405277A4 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopCheckTopDeviceHint @ 0x14052D3D4 (IopCheckTopDeviceHint.c)
 *     PnpProcessRelation @ 0x140535938 (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     PiDeferSetInterfaceState @ 0x140556B68 (PiDeferSetInterfaceState.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     PnpConcatenateUnicodeStrings @ 0x140571E00 (PnpConcatenateUnicodeStrings.c)
 *     IopBootLog @ 0x140572968 (IopBootLog.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140578004 (SdbMakeIndexKeyFromStringEx.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14058D3C4 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14058D9C4 (PnpQueryRemoveLockedDeviceNode.c)
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x1405C2C80 (PnpCopyDeviceInstancePath.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14067C6F4 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRebalanceWorker @ 0x140680CF0 (PnpQueryRebalanceWorker.c)
 *     PnpFinalizeVetoedRemove @ 0x14068E430 (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     ObGetRootDirectoryNameByPointer @ 0x1406AEB94 (ObGetRootDirectoryNameByPointer.c)
 *     PopFxRegisterComponentPerfStates @ 0x1406B43E8 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1406B57B8 (PopProcessWakeSourceWork.c)
 *     RtlPcToFilePath @ 0x1406CF870 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x14071E6BC (AhcCacheQueryHwId.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 *     ExpandKnownDllsPath @ 0x1407BD718 (ExpandKnownDllsPath.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
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
