/*
 * XREFs of MmMapViewOfSection @ 0x140466864
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14040FF20 (NtGetNlsSectionPtr.c)
 *     NtInitializeNlsFiles @ 0x140465080 (NtInitializeNlsFiles.c)
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 *     MmMapApiSetView @ 0x140465A3C (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 *     PspMapSystemDll @ 0x140466740 (PspMapSystemDll.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     VerifierMmMapViewOfSection @ 0x140753B88 (VerifierMmMapViewOfSection.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  return MiMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 2, 0LL);
}
