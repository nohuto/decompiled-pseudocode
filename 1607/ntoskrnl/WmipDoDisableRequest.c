/*
 * XREFs of WmipDoDisableRequest @ 0x140549CFC
 * Callers:
 *     WmipSendDisableRequest @ 0x1404B1F04 (WmipSendDisableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532884 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140537E28 (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x14054D464 (WmipReleaseCollectionEnabled.c)
 */

__int64 __fastcall WmipDoDisableRequest(_DWORD *a1, char a2, __int64 a3)
{
  int v3; // esi
  unsigned int v6; // ebp
  __int64 v7; // r8
  int v8; // ecx

  v3 = a3;
  do
  {
    LOBYTE(a3) = a2;
    v6 = WmipSendEnableDisableRequest(a2 != 0 ? 5 : 7, a1, a3);
    if ( a2 )
      v8 = a1[22];
    else
      v8 = a1[23];
    if ( !v8 )
      break;
    LOBYTE(v7) = a2;
    v6 = WmipSendEnableDisableRequest(a2 != 0 ? 4 : 6, a1, v7);
  }
  while ( !(a2 ? a1[22] : a1[23]) );
  a1[4] &= ~v3;
  if ( !a2 )
    WmipReleaseCollectionEnabled(a1);
  return v6;
}
