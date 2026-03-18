/*
 * XREFs of UmfdHostLifeTimeManager_MmMapViewOfSection @ 0x1401E6A00
 * Callers:
 *     <none>
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1401E6A60 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager_MmMapViewOfSection(
        void *a1,
        void **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6,
        enum _SECTION_INHERIT a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 *a10)
{
  return UmfdHostLifeTimeManager::MmMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
