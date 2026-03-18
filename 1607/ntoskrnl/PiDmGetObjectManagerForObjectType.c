/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1404FF308
 * Callers:
 *     PiDmGetObject @ 0x1404FF000 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405012F0 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListAddObject @ 0x140505F64 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140506180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140506288 (PiDmAddCacheReferenceForObject.c)
 *     PiDmGetObjectCount @ 0x14062F8D8 (PiDmGetObjectCount.c)
 *     PiDmListAddList @ 0x14062F920 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x14062FB14 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14062FD08 (PiDmListRemoveObject.c)
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
