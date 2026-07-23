/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14054D464
 * Callers:
 *     WmipSendEnableRequest @ 0x1404D0C2C (WmipSendEnableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532884 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140537E28 (WmipEnableCollectionForNewGuid.c)
 *     WmipDoDisableRequest @ 0x140549CFC (WmipDoDisableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
