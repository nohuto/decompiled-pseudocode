/*
 * XREFs of WmipDoDisableRequest @ 0x140556DB4
 * Callers:
 *     WmipDisableCollectionForRemovedGuid @ 0x1404A9688 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDisableCollectOrEvent @ 0x140556CFC (WmipDisableCollectOrEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x14057D87C (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140556E2C (WmipReleaseCollectionEnabled.c)
 */

__int64 __fastcall WmipDoDisableRequest(_DWORD *a1, char a2, int a3)
{
  unsigned int v6; // ebp
  int v7; // ecx

  do
  {
    v6 = WmipSendEnableDisableRequest(a2 != 0 ? 5 : 7, (__int64)a1, a2);
    if ( a2 )
      v7 = a1[22];
    else
      v7 = a1[23];
    if ( !v7 )
      break;
    v6 = WmipSendEnableDisableRequest(a2 != 0 ? 4 : 6, (__int64)a1, a2);
  }
  while ( !(a2 ? a1[22] : a1[23]) );
  a1[4] &= ~a3;
  if ( !a2 )
    WmipReleaseCollectionEnabled(a1);
  return v6;
}
