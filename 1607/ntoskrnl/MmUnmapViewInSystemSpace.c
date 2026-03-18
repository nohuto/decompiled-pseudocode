/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140525E34
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400FA708 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140130BA4 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014921C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x140149CC4 (LdrpMapResourceFile.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042F650 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbUnmapFromMemory @ 0x140499B78 (KsepShimDbUnmapFromMemory.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     MmUnmapViewInSessionSpace @ 0x1404EF7D4 (MmUnmapViewInSessionSpace.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E784 (PspDeleteServerSiloGlobals.c)
 *     sub_1406AE414 @ 0x1406AE414 (sub_1406AE414.c)
 *     sub_1406AEC3C @ 0x1406AEC3C (sub_1406AEC3C.c)
 *     sub_1406AF038 @ 0x1406AF038 (sub_1406AF038.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140100090 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  void *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned __int64)MappedBase < qword_140326910
    || (unsigned __int64)MappedBase >= qword_140326910 + 0x8000000000LL )
  {
    v2 = &unk_140326880;
LABEL_4:
    MiRemoveFromSystemSpace((__int64)v2, (ULONG_PTR)MappedBase, 1);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v2 = (void *)(Process[1].ActiveProcessors.Bitmap[2] + 2880);
    goto LABEL_4;
  }
  return -1073741799;
}
