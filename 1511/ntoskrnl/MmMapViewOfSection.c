/*
 * XREFs of MmMapViewOfSection @ 0x1404644F4
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140461AE0 (NtGetNlsSectionPtr.c)
 *     NtInitializeNlsFiles @ 0x1404625A4 (NtInitializeNlsFiles.c)
 *     MiMapProcessExecutable @ 0x1404635E8 (MiMapProcessExecutable.c)
 *     MmMapApiSetView @ 0x140463CA4 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x140463D38 (MmCreatePeb.c)
 *     PspMapSystemDll @ 0x1404643E4 (PspMapSystemDll.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     VerifierMmMapViewOfSection @ 0x1406D00BC (VerifierMmMapViewOfSection.c)
 * Callees:
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        struct _KPROCESS *a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  int v11; // ecx
  bool v13; // zf

  v11 = MiMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 2, 0LL);
  if ( v11 < 0 )
  {
    if ( *a3 )
      ++dword_1402FED68;
    else
      ++dword_1402FED64;
    if ( *a3 )
      v13 = (MiAllocationDebug & 8) == 0;
    else
      v13 = (MiAllocationDebug & 4) == 0;
    if ( !v13 )
      __debugbreak();
  }
  return (unsigned int)v11;
}
