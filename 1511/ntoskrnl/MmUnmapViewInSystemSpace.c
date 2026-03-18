/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1403C7C24
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x1400DD174 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DD8F4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14013FDE8 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x140140BCC (LdrpMapResourceFile.c)
 *     KsepShimDbMapToMemory @ 0x1403B5C58 (KsepShimDbMapToMemory.c)
 *     KsepShimDbUnmapFromMemory @ 0x1403B5DE0 (KsepShimDbUnmapFromMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     MmUnmapViewInSessionSpace @ 0x1404C4EC4 (MmUnmapViewInSessionSpace.c)
 *     sub_140668B98 @ 0x140668B98 (sub_140668B98.c)
 *     sub_1406695B8 @ 0x1406695B8 (sub_1406695B8.c)
 *     sub_14066994C @ 0x14066994C (sub_14066994C.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  void *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned __int64)MappedBase + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    v2 = &unk_1402FE5C0;
LABEL_3:
    MiRemoveFromSystemSpace((__int64)v2, (ULONG_PTR)MappedBase, 1);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v2 = (void *)(Process[1].ActiveProcessors.Bitmap[2] + 2880);
    goto LABEL_3;
  }
  return -1073741799;
}
