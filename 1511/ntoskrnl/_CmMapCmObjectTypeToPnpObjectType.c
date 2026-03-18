/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x14043CB7C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14043C4E0 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14043E564 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmGetCmObjectListFromCache @ 0x140496EA8 (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseCreateEvent @ 0x140517BFC (_CmRaiseCreateEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x14053AD60 (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseDeleteEvent @ 0x140696F64 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x140699CC8 (_PnpCmMatchCallbackRoutine.c)
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
