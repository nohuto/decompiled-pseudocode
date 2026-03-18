/*
 * XREFs of ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C02B9998
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z @ 0x1C02B9748 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B9A60 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock(void)
{
  PVOID v0; // rbx

  v0 = UmfdFileviewLookup;
  if ( UmfdFileviewLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFileviewLookup + 6), 0);
    ExFreePoolWithTag(v0, 0);
    UmfdFileviewLookup = 0LL;
  }
}
