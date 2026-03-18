/*
 * XREFs of ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C02B9874
 * Callers:
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C00F5F68 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     cMapRemoteFonts @ 0x1C027EF80 (cMapRemoteFonts.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0127548 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmMapViewOfSection(
        void *a1,
        void **a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6,
        enum _SECTION_INHERIT a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 *a10)
{
  unsigned int v13; // ebx
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v15);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v13 = MmMapViewOfSection(a1, UmfdHostLifeTimeManager::s_UmfdHostProcess, a2, 0LL, a4, a5, a6, 2, 0x400000, 2);
    *a10 = UmfdHostLifeTimeManager::s_UmfdHostGenerationId;
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v15 )
  {
    GreReleasePushLockShared(v15);
    KeLeaveCriticalRegion();
  }
  return v13;
}
