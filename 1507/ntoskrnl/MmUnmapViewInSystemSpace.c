/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x14051BEC8
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x140025AE4 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14002A0FC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016D60C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14016E980 (LdrpMapResourceFile.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     MmUnmapViewInSessionSpace @ 0x14051B2A8 (MmUnmapViewInSessionSpace.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     KsepShimDbMapToMemory @ 0x140572334 (KsepShimDbMapToMemory.c)
 *     KsepShimDbUnmapFromMemory @ 0x140578CBC (KsepShimDbUnmapFromMemory.c)
 *     sub_1405A99E4 @ 0x1405A99E4 (sub_1405A99E4.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  __int64 v1; // r9
  _KPROCESS *Process; // rcx
  void *v4; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (unsigned __int64)MappedBase + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    v4 = &unk_14034EA70;
LABEL_3:
    MiRemoveFromSystemSpace((__int64)v4, (ULONG_PTR)MappedBase, 1, v1);
    return 0;
  }
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v4 = (void *)(Process[1].ActiveProcessors.Bitmap[2] + 2880);
    goto LABEL_3;
  }
  return -1073741799;
}
