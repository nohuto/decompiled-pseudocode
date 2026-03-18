/*
 * XREFs of RtlInitAnsiString @ 0x140092408
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140133CE4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140135044 (IopCheckDiskName.c)
 *     CmLogMcUpdateStatus @ 0x1401AA1EC (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     EtwpBuildProcessEvent @ 0x140449F40 (EtwpBuildProcessEvent.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14051DCB4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14051E0D8 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14051F904 (CmpSetVersionData.c)
 *     PiGetDefaultMessageString @ 0x14053ED4C (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x14054B760 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1405E81F0 (CmpCreateHwProfileFriendlyName.c)
 *     PnpLogVetoInformation @ 0x14060E6D4 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x14061E88C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1406216B4 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x140664830 (EtwWmitraceWorker.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpSetSystemBiosInformation @ 0x140744130 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140744438 (CmpSetVideoBiosInformation.c)
 *     CmpInitializeSystemHive @ 0x140744EB4 (CmpInitializeSystemHive.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1407509D8 (IopCreateArcNames.c)
 *     WmipDriverEntry @ 0x140752B34 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x140753448 (IopMarkBootPartition.c)
 *     EmpParseEntryTypes @ 0x14075F2D4 (EmpParseEntryTypes.c)
 *     IopGetBootDiskInformationLite @ 0x14075F42C (IopGetBootDiskInformationLite.c)
 *     EmpInfParseGetGuidFromName @ 0x140760228 (EmpInfParseGetGuidFromName.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     CmpAddAliasEntry @ 0x140781EB8 (CmpAddAliasEntry.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
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
