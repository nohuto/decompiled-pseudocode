/*
 * XREFs of UmfdSessionInitialize @ 0x1C014E770
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C014E7CC (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C014E9C8 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C014EAC4 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     bEnableFontDriver @ 0x1C014EB20 (bEnableFontDriver.c)
 */

__int64 UmfdSessionInitialize()
{
  unsigned int v0; // ebx

  GreInitializePushLock(&UmfdFileViewPushLock);
  v0 = 0;
  if ( !(unsigned int)bEnableFontDriver(UmfdEnableDriver, 16LL)
    || !UmfdHostLifeTimeManager::SessionInitialize()
    || !UmfdAllocation::Initialize() )
  {
    return 3221225473LL;
  }
  if ( (int)UmfdCallSessionInitialize() < 0 )
    return (unsigned int)-1073741823;
  return v0;
}
