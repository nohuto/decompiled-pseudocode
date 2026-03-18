/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1400EFE84
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140139A14 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1402575EC (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     FsRtlSetFileSize @ 0x1404B1144 (FsRtlSetFileSize.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 *     ObKillProcess @ 0x14050BA98 (ObKillProcess.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 *     SmKmFileInfoCleanup @ 0x1406DC94C (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1406DCB64 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1406DCC20 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1406DD710 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1406DDB90 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1406DDE04 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1406DDE9C (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1406DE390 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1406DE708 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1406E9468 (EtwpPsProvCaptureState.c)
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
