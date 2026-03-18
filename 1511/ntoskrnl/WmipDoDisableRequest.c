/*
 * XREFs of WmipDoDisableRequest @ 0x14048C6CC
 * Callers:
 *     WmipDisableCollectOrEvent @ 0x14048C614 (WmipDisableCollectOrEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1404C1BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140506FE4 (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x1403D2308 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x14048C508 (WmipReleaseCollectionEnabled.c)
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
    WmipReleaseCollectionEnabled((__int64)a1);
  return v6;
}
