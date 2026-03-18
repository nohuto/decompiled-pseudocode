/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x1404FE32C
 * Callers:
 *     PiDmGetCmObjectListFromCache @ 0x1404E2AA8 (PiDmGetCmObjectListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1404FE1F8 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140500534 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x140571678 (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseCreateEvent @ 0x1406DBEF0 (_CmRaiseCreateEvent.c)
 *     _CmRaiseDeleteEvent @ 0x1406DBF64 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x1406DFC40 (_PnpCmMatchCallbackRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapCmObjectTypeToPnpObjectType(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  if ( v5 == 1 )
    return 5LL;
  return 0LL;
}
