/*
 * XREFs of MmMapViewInSystemSpace @ 0x1403B5C20
 * Callers:
 *     LdrpMapResourceFile @ 0x140140BCC (LdrpMapResourceFile.c)
 *     KsepShimDbMapToMemory @ 0x1403B5C58 (KsepShimDbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x140461AE0 (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     sub_1406695B8 @ 0x1406695B8 (sub_1406695B8.c)
 *     MiInitializeApiSets @ 0x14074CE5C (MiInitializeApiSets.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+5Ch] [rbp+24h]

  v4 = 0;
  v5 = 0;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_1402FE5C0,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL);
}
