/*
 * XREFs of MmMapViewOfSection @ 0x14046BFE8
 * Callers:
 *     AlpcpCreateView @ 0x14040D220 (AlpcpCreateView.c)
 *     MmMapApiSetView @ 0x14046BD4C (MmMapApiSetView.c)
 *     PspMapSystemDll @ 0x14046BED8 (PspMapSystemDll.c)
 *     MmCreatePeb @ 0x14046C0B8 (MmCreatePeb.c)
 *     MiMapProcessExecutable @ 0x14046CDE8 (MiMapProcessExecutable.c)
 *     NtGetNlsSectionPtr @ 0x14047557C (NtGetNlsSectionPtr.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     NtInitializeNlsFiles @ 0x1404D2C2C (NtInitializeNlsFiles.c)
 * Callees:
 *     MiMapViewOfSection @ 0x140433010 (MiMapViewOfSection.c)
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
      ++dword_140327138;
    else
      ++dword_140327134;
  }
  return result;
}
