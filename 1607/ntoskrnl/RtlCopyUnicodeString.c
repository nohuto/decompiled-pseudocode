/*
 * XREFs of RtlCopyUnicodeString @ 0x14002DD60
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000ED90 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14000F000 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140087EC0 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlPcToFileName @ 0x1401486E8 (RtlPcToFileName.c)
 *     QueryFeatureOverride @ 0x1401B8A54 (QueryFeatureOverride.c)
 *     IopQueryFullDriverPath @ 0x1401CA0E4 (IopQueryFullDriverPath.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F8710 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140484E1C (SdbMakeIndexKeyFromStringEx.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048DA8C (EtwpGetLoggerInfoFromContext.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1404A0CD8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 *     IopCheckTopDeviceHint @ 0x1404C92CC (IopCheckTopDeviceHint.c)
 *     PiDeferSetInterfaceState @ 0x1404ECF18 (PiDeferSetInterfaceState.c)
 *     IopBootLog @ 0x1404EFE0C (IopBootLog.c)
 *     FsRtlFindInTunnelCache @ 0x140501A80 (FsRtlFindInTunnelCache.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     PnpConcatenateUnicodeStrings @ 0x140538568 (PnpConcatenateUnicodeStrings.c)
 *     IopSymlinkUpdateECP @ 0x140540BD0 (IopSymlinkUpdateECP.c)
 *     PsRegisterSiloMonitor @ 0x140551E98 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140552054 (ObCreateObjectTypeEx.c)
 *     PopConnectToPolicyDevice @ 0x14056C0D8 (PopConnectToPolicyDevice.c)
 *     AdtpObjsInitialize @ 0x14056FBF0 (AdtpObjsInitialize.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140581730 (PnpCopyDeviceInstancePath.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x140617AE4 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14062238C (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14062BB04 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E0BC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x1406429B4 (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C090 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiEventQueryRemoveNotifyKernel @ 0x14064D1E8 (PiEventQueryRemoveNotifyKernel.c)
 *     PiEventRemovalOpenHandleVeto @ 0x14064D3E8 (PiEventRemovalOpenHandleVeto.c)
 *     PopFxRegisterComponentPerfStates @ 0x14066D104 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x14066E27C (PopProcessWakeSourceWork.c)
 *     RtlPcToFilePath @ 0x14068C048 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14069180C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x1406E4C1C (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E6284 (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 *     ExpandKnownDllsPath @ 0x1407A38A0 (ExpandKnownDllsPath.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
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
