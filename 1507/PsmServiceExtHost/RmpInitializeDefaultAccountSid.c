/*
 * XREFs of RmpInitializeDefaultAccountSid @ 0x180019D50
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 * Callees:
 *     ?RmpLookupDefaultSystemManagedAccount@@YAJXZ @ 0x180019D9C (-RmpLookupDefaultSystemManagedAccount@@YAJXZ.c)
 *     ?RmpLookupDefAppsAccount@@YAJXZ @ 0x180019E60 (-RmpLookupDefAppsAccount@@YAJXZ.c)
 */

__int64 RmpInitializeDefaultAccountSid()
{
  int v0; // ecx

  if ( *((_BYTE *)RmSvcGlobals + 2072) )
    return 0LL;
  v0 = RmpLookupDefAppsAccount();
  if ( v0 >= 0 || (v0 = RmpLookupDefaultSystemManagedAccount(), v0 >= 0) )
    *((_BYTE *)RmSvcGlobals + 2072) = 1;
  return (unsigned int)v0;
}
