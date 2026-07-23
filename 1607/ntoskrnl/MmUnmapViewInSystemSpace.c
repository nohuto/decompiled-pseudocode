/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140508E94
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F8494 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140131114 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14014A234 (LdrpMapResourceFile.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     KsepShimDbMapToMemory @ 0x140495B04 (KsepShimDbMapToMemory.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     KsepShimDbUnmapFromMemory @ 0x1404CEA10 (KsepShimDbUnmapFromMemory.c)
 *     MmUnmapViewInSessionSpace @ 0x1404D17F0 (MmUnmapViewInSessionSpace.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E868 (PspDeleteServerSiloGlobals.c)
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1406AED74 @ 0x1406AED74 (sub_1406AED74.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  void *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned __int64)MappedBase < qword_140326950
    || (unsigned __int64)MappedBase >= qword_140326950 + 0x8000000000LL )
  {
    v2 = &unk_1403268C0;
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
