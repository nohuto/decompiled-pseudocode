/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x14043D718
 * Callers:
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x140440A34 (PiDmEnumObjectsWithCallback.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1404E4F54 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E5114 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x140518AC0 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x1406058EC (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x140605934 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140605B28 (PiDmListRemoveObject.c)
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
