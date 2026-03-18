/*
 * XREFs of ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C02BC1C0
 * Callers:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0021474 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     vUnmapRemoteFonts @ 0x1C027D0D0 (vUnmapRemoteFonts.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C015740C (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmUnmapViewOfSection(void *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v6);
  if ( UmfdHostLifeTimeManager::s_Ready && a2 == UmfdHostLifeTimeManager::s_UmfdHostGenerationId )
    v4 = MmUnmapViewOfSection(UmfdHostLifeTimeManager::s_UmfdHostProcess, a1);
  else
    v4 = -1073741823;
  if ( v6 )
  {
    GreReleasePushLockShared(v6);
    KeLeaveCriticalRegion();
  }
  return v4;
}
