/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1403F6600
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14013BDE4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x1401B53F8 (CmLogMcUpdateStatus.c)
 *     PopEmModuleAddressMatchCallback @ 0x14020D360 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     RtlIntegerToUnicodeString @ 0x1403F5E20 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1403F6568 (RtlInt64ToUnicodeString.c)
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14046CB34 (MiSnapThunk.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14055C8D4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14055CDF0 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14055D9A8 (CmpSetVersionData.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14055FCEC (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpFindControlSet @ 0x14055FE7C (CmpFindControlSet.c)
 *     PiGetDefaultMessageString @ 0x1405745C0 (PiGetDefaultMessageString.c)
 *     KsepStringAnsiToUnicode @ 0x140579004 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1405814A0 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140607904 (CmpCreateHwProfileFriendlyName.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140611640 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopInitializeBootLogging @ 0x14062188C (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x140642AE0 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x1406593A0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1406A5048 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4D28 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x1406B7834 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x1406C523C (AslStringAnsiToUnicode.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140798AF8 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 *     PipSmBiosGetString @ 0x14079A3B4 (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1407A8524 (EmpInfParseGetGuidFromName.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmpAddAliasEntry @ 0x1407CD4E0 (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1403F6760 (RtlMultiByteToUnicodeN.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14054C968 (RtlxAnsiStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
  wchar_t *StringRoutine; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbCodePageTag )
    v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  else
    v6 = 2 * SourceString->Length + 2;
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v8 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
