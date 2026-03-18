/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x140439B88
 * Callers:
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x14043BDF4 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListAddObject @ 0x1404DF9D4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x14058C898 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x1406804BC (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x140680530 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140680838 (PiDmListRemoveObject.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v3 = v2 - 1;
  if ( !v3 )
    return &PiDmDeviceInstallerClassManager;
  v4 = v3 - 1;
  if ( !v4 )
    return &PiDmDeviceInterfaceManager;
  v6 = v4 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  if ( v6 == 1 )
    return &PiDmDeviceContainerManager;
  return (void *)v1;
}
