/*
 * XREFs of RtlInitAnsiString @ 0x140074CF4
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14013BDE4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x14013CBAC (IopCheckDiskName.c)
 *     CmLogMcUpdateStatus @ 0x1401B53F8 (CmLogMcUpdateStatus.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     EtwpBuildProcessEvent @ 0x14045D860 (EtwpBuildProcessEvent.c)
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14055C8D4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14055CDF0 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14055D9A8 (CmpSetVersionData.c)
 *     PiGetDefaultMessageString @ 0x1405745C0 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x1405814A0 (WmipQueryWmiRegInfo.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140607904 (CmpCreateHwProfileFriendlyName.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140611640 (CmpAddRemoveContainerToCLFSLog.c)
 *     PnpLogVetoInformation @ 0x140642AE0 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x140653B04 (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x1406593A0 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1406A5048 (EtwWmitraceWorker.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140798AF8 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     IopGetBootDiskInformationLite @ 0x1407A7560 (IopGetBootDiskInformationLite.c)
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
