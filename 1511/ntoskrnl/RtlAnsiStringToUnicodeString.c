/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1403E1384
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140133CE4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x1401AA1EC (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1403CCF50 (MiSnapThunk.c)
 *     RtlIntegerToUnicodeString @ 0x1403E126C (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1403E12EC (RtlInt64ToUnicodeString.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14051DCB4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14051E0D8 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14051E3E8 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x14051F904 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x140523A10 (CmpFindControlSet.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     PiGetDefaultMessageString @ 0x14053ED4C (PiGetDefaultMessageString.c)
 *     KsepStringAnsiToUnicode @ 0x140544F54 (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x14054B760 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1405E81F0 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x14060E6D4 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x1406216B4 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x140664830 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140672028 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140674EF4 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140680170 (AslStringAnsiToUnicode.c)
 *     VerifierRtlAnsiStringToUnicodeString @ 0x1406CF108 (VerifierRtlAnsiStringToUnicodeString.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpSetSystemBiosInformation @ 0x140744130 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140744438 (CmpSetVideoBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x140744EB4 (CmpInitializeSystemHive.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     PipSmBiosGetString @ 0x1407506C4 (PipSmBiosGetString.c)
 *     IopCreateArcNames @ 0x1407509D8 (IopCreateArcNames.c)
 *     WmipDriverEntry @ 0x140752B34 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x140753448 (IopMarkBootPartition.c)
 *     EmpParseEntryTypes @ 0x14075F2D4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140760228 (EmpInfParseGetGuidFromName.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     CmpAddAliasEntry @ 0x140781EB8 (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x140239B08 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1403E14E0 (RtlMultiByteToUnicodeN.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14051B04C (RtlxAnsiStringToUnicodeSize.c)
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
