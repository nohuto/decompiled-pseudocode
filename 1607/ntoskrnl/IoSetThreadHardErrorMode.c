/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140074CB8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003634 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140111B64 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x140220778 (SmKmEtwAppendObjectName.c)
 *     FsRtlGetFileSize @ 0x14042C454 (FsRtlGetFileSize.c)
 *     EtwTraceProcess @ 0x14045D50C (EtwTraceProcess.c)
 *     ObKillProcess @ 0x14045D694 (ObKillProcess.c)
 *     CmpDoFileSetSizeEx @ 0x14047E8FC (CmpDoFileSetSizeEx.c)
 *     EtwpKernelTraceRundown @ 0x140495B04 (EtwpKernelTraceRundown.c)
 *     CmpCmdHiveOpen @ 0x14049C7BC (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x14049FCA0 (CmpCmdHiveClose.c)
 *     FsRtlSetFileSize @ 0x1404ED434 (FsRtlSetFileSize.c)
 *     HvSyncHive @ 0x14060635C (HvSyncHive.c)
 *     SmKmFileInfoCleanup @ 0x140697DE0 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x140697FF8 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x140698108 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140698F68 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1406991DC (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140699274 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x140699764 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x140699ADC (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1406A7D1C (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rdx
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
