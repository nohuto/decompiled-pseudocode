/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140556E2C
 * Callers:
 *     WmipDisableCollectionForRemovedGuid @ 0x1404A9688 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableRequest @ 0x1404AB6F4 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x140556DB4 (WmipDoDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x14057D87C (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
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
