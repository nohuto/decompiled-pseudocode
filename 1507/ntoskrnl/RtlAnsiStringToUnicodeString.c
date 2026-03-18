/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1404FE988
 * Callers:
 *     CmLogMcUpdateStatus @ 0x1401E0138 (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     RtlInt64ToUnicodeString @ 0x1404FE870 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1404FE908 (RtlIntegerToUnicodeString.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405758EC (MiSnapThunk.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     PnpLogVetoInformation @ 0x14058EADC (PnpLogVetoInformation.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     CmpFindControlSet @ 0x140590E08 (CmpFindControlSet.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1405A5548 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405A5580 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405A5A9C (CmpInitializeRegistryNode.c)
 *     PiGetDefaultMessageString @ 0x1405B298C (PiGetDefaultMessageString.c)
 *     KsepStringAnsiToUnicode @ 0x1405BBAFC (KsepStringAnsiToUnicode.c)
 *     WmipQueryWmiRegInfo @ 0x1405C2B14 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14065F708 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     MiLogFailedDriverLoad @ 0x1406A0D4C (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406F61FC (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x1406F9624 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140704FA4 (AslStringAnsiToUnicode.c)
 *     VerifierRtlAnsiStringToUnicodeString @ 0x140752BD4 (VerifierRtlAnsiStringToUnicodeString.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1407B5FE8 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1407B65F4 (IopMarkBootPartition.c)
 *     PipSmBiosGetString @ 0x1407B7AF4 (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x1407B9CBC (WmipDriverEntry.c)
 *     EmpParseEntryTypes @ 0x1407CDB50 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1407CEAA0 (EmpInfParseGetGuidFromName.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmpInitializeSystemHive @ 0x1407D6AC0 (CmpInitializeSystemHive.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 *     CmpAddAliasEntry @ 0x1407F828C (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1404FEAF0 (RtlMultiByteToUnicodeN.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406C7C48 (RtlxOemStringToUnicodeSize.c)
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
    v6 = RtlxOemStringToUnicodeSize(SourceString);
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
