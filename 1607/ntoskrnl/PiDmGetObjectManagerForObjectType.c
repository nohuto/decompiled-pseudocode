/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1404E2298
 * Callers:
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x1404E4280 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListAddObject @ 0x1404E8EF4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 *     PiDmGetObjectCount @ 0x14062F98C (PiDmGetObjectCount.c)
 *     PiDmListAddList @ 0x14062F9D4 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x14062FBC8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14062FDBC (PiDmListRemoveObject.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v4 = v2 - 1;
  if ( !v4 )
    return &PiDmDeviceInstallerClassManager;
  v5 = v4 - 1;
  if ( !v5 )
    return &PiDmDeviceInterfaceManager;
  v6 = v5 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  if ( v6 == 1 )
    return &PiDmDeviceContainerManager;
  return (void *)v1;
}
