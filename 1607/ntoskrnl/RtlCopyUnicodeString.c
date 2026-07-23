/*
 * XREFs of RtlCopyUnicodeString @ 0x14002D8E0
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14000EB80 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14010C0B0 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlPcToFileName @ 0x140148C58 (RtlPcToFileName.c)
 *     QueryFeatureOverride @ 0x1401B9A20 (QueryFeatureOverride.c)
 *     IopQueryFullDriverPath @ 0x1401C9F84 (IopQueryFullDriverPath.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F75D0 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048E51C (EtwpGetLoggerInfoFromContext.c)
 *     IopCheckTopDeviceHint @ 0x1404AF04C (IopCheckTopDeviceHint.c)
 *     PiDeferSetInterfaceState @ 0x1404CF084 (PiDeferSetInterfaceState.c)
 *     IopBootLog @ 0x1404D1E28 (IopBootLog.c)
 *     FsRtlFindInTunnelCache @ 0x1404E4A10 (FsRtlFindInTunnelCache.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1405141A4 (SdbMakeIndexKeyFromStringEx.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405190E4 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 *     PnpConcatenateUnicodeStrings @ 0x140538AA8 (PnpConcatenateUnicodeStrings.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     PsRegisterSiloMonitor @ 0x1405523D8 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 *     PopConnectToPolicyDevice @ 0x14056C618 (PopConnectToPolicyDevice.c)
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 *     IoReportRootDevice @ 0x140578358 (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140581BDC (PnpCopyDeviceInstancePath.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140622440 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14062BBB8 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E170 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x140642A98 (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C174 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiEventQueryRemoveNotifyKernel @ 0x14064D2CC (PiEventQueryRemoveNotifyKernel.c)
 *     PiEventRemovalOpenHandleVeto @ 0x14064D4CC (PiEventRemovalOpenHandleVeto.c)
 *     PopFxRegisterComponentPerfStates @ 0x14066D1E8 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x14066E360 (PopProcessWakeSourceWork.c)
 *     RtlPcToFilePath @ 0x14068C12C (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x1406E4D54 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E63BC (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 *     ExpandKnownDllsPath @ 0x1407A38A0 (ExpandKnownDllsPath.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
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
