/*
 * XREFs of RmpInitializeDefaultAccountSid @ 0x180021214
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 * Callees:
 *     ?RmpLookupDefaultSystemManagedAccount@@YAJXZ @ 0x180021260 (-RmpLookupDefaultSystemManagedAccount@@YAJXZ.c)
 *     ?RmpLookupDefAppsAccount@@YAJXZ @ 0x180021324 (-RmpLookupDefAppsAccount@@YAJXZ.c)
 */

__int64 RmpInitializeDefaultAccountSid()
{
  int v0; // ecx

  if ( *((_BYTE *)RmSvcGlobals + 2088) )
    return 0LL;
  v0 = RmpLookupDefAppsAccount();
  if ( v0 >= 0 || (v0 = RmpLookupDefaultSystemManagedAccount(), v0 >= 0) )
    *((_BYTE *)RmSvcGlobals + 2088) = 1;
  return (unsigned int)v0;
}
