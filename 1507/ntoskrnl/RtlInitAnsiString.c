/*
 * XREFs of RtlInitAnsiString @ 0x1400F001C
 * Callers:
 *     IopCheckDiskName @ 0x14016178C (IopCheckDiskName.c)
 *     CmLogMcUpdateStatus @ 0x1401E0138 (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     PnpLogVetoInformation @ 0x14058EADC (PnpLogVetoInformation.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405A5580 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1405A5A9C (CmpInitializeRegistryNode.c)
 *     PiGetDefaultMessageString @ 0x1405B298C (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x1405C2B14 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14065F708 (CmpCreateHwProfileFriendlyName.c)
 *     KsepGetModuleInfoByName @ 0x14069D60C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1406A0D4C (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1407B5FE8 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1407B65F4 (IopMarkBootPartition.c)
 *     WmipDriverEntry @ 0x1407B9CBC (WmipDriverEntry.c)
 *     EmpParseEntryTypes @ 0x1407CDB50 (EmpParseEntryTypes.c)
 *     IopGetBootDiskInformationLite @ 0x1407CDCA8 (IopGetBootDiskInformationLite.c)
 *     EmpInfParseGetGuidFromName @ 0x1407CEAA0 (EmpInfParseGetGuidFromName.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmpInitializeSystemHive @ 0x1407D6AC0 (CmpInitializeSystemHive.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 *     CmpAddAliasEntry @ 0x1407F828C (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
