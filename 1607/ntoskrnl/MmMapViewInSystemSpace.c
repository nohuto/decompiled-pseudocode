/*
 * XREFs of MmMapViewInSystemSpace @ 0x140495FBC
 * Callers:
 *     LdrpMapResourceFile @ 0x14014A234 (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x14047444C (NtGetNlsSectionPtr.c)
 *     KsepShimDbMapToMemory @ 0x140495B04 (KsepShimDbMapToMemory.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     PspApiSetCopyToSystemSpace @ 0x14067E27C (PspApiSetCopyToSystemSpace.c)
 *     sub_1406AED74 @ 0x1406AED74 (sub_1406AED74.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x1407A426C (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+5Ch] [rbp+24h]

  v4 = 0;
  v5 = 0;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_1403268C0,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL);
}
