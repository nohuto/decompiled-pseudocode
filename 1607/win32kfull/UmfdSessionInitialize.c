/*
 * XREFs of UmfdSessionInitialize @ 0x1C0127D80
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C0127DDC (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C0127FD8 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C01280D4 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     bEnableFontDriver @ 0x1C0128160 (bEnableFontDriver.c)
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
