/*
 * XREFs of MmMapViewOfSection @ 0x14046AEB8
 * Callers:
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     MmMapApiSetView @ 0x14046AC1C (MmMapApiSetView.c)
 *     PspMapSystemDll @ 0x14046ADA8 (PspMapSystemDll.c)
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 *     MiMapProcessExecutable @ 0x14046BCB8 (MiMapProcessExecutable.c)
 *     NtGetNlsSectionPtr @ 0x14047444C (NtGetNlsSectionPtr.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     NtInitializeNlsFiles @ 0x1404B66CC (NtInitializeNlsFiles.c)
 * Callees:
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        _KPROCESS *a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 result; // rax

  result = MiMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 2, 0LL);
  if ( (int)result < 0 )
  {
    if ( *a3 )
      ++dword_140327178;
    else
      ++dword_140327174;
  }
  return result;
}
