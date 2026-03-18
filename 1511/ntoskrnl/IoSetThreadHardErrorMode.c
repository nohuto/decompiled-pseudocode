/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140092448
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140106754 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x140208358 (SmKmEtwAppendObjectName.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     ObKillProcess @ 0x14044A8F4 (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     FsRtlSetFileSize @ 0x1404A2234 (FsRtlSetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 *     SmKmFileInfoCleanup @ 0x14065A208 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x14065A420 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14065A4DC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14065AEBC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14065B33C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14065B5B0 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14065B648 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14065BB3C (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14065BEB4 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1406662B0 (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rdx
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3, 4u);
  return v2 == 0;
}
