/*
 * XREFs of MmMapViewInSystemSpace @ 0x14049552C
 * Callers:
 *     LdrpMapResourceFile @ 0x140149CC4 (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x14047557C (NtGetNlsSectionPtr.c)
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     PspApiSetCopyToSystemSpace @ 0x14067E198 (PspApiSetCopyToSystemSpace.c)
 *     sub_1406AEC3C @ 0x1406AEC3C (sub_1406AEC3C.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x1407A426C (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140525ED4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+5Ch] [rbp+24h]

  v4 = 0;
  v5 = 0;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_140326880,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL);
}
