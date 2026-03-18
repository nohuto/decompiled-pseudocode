/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14054CF24
 * Callers:
 *     WmipSendEnableRequest @ 0x1404EEB64 (WmipSendEnableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532344 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405378E8 (WmipEnableCollectionForNewGuid.c)
 *     WmipDoDisableRequest @ 0x1405497BC (WmipDoDisableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
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
