/*
 * XREFs of MmMapViewInSystemSpace @ 0x14051B270
 * Callers:
 *     LdrpMapResourceFile @ 0x14016E980 (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x14040FF20 (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     KsepShimDbMapToMemory @ 0x140572334 (KsepShimDbMapToMemory.c)
 *     sub_1405A99E4 @ 0x1405A99E4 (sub_1405A99E4.c)
 *     MiInitializeApiSets @ 0x1407C9714 (MiInitializeApiSets.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x14051BF64 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+5Ch] [rbp+24h]

  v4 = 0;
  v5 = 0;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_14034EA70,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL);
}
