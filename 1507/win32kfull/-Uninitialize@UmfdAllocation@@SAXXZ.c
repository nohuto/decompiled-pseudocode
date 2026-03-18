/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C0131884
 * Callers:
 *     UmfdSessionUninitialize @ 0x1C0131800 (UmfdSessionUninitialize.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C014E9C8 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01318B8 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void UmfdAllocation::Uninitialize(void)
{
  if ( UmfdAllocation::s_allocationLookup )
  {
    NSInstrumentation::CPointerHashTable::Destroy(UmfdAllocation::s_allocationLookup);
    UmfdAllocation::s_allocationLookup = 0LL;
  }
  if ( UmfdAllocation::s_allocationLookupLock )
    EngFreeMem(UmfdAllocation::s_allocationLookupLock);
}
