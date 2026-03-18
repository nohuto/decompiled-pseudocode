/*
 * XREFs of WmipSendEnableRequest @ 0x1404AB6F4
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x1404AB4A8 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipReferenceEntry @ 0x1404A9FE0 (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 *     WmipReleaseCollectionEnabled @ 0x140556E2C (WmipReleaseCollectionEnabled.c)
 *     WmipWaitForCollectionEnabled @ 0x1406E247C (WmipWaitForCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(_DWORD *BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // eax

  if ( a2 )
  {
    v4 = BugCheckParameter2[22];
    v5 = 2;
    BugCheckParameter2[22] = v4 + 1;
  }
  else
  {
    v4 = BugCheckParameter2[23];
    v5 = 4;
    BugCheckParameter2[23] = v4 + 1;
  }
  if ( v4 || (v5 & BugCheckParameter2[4]) != 0 )
  {
    if ( !a2 && (v5 & BugCheckParameter2[4]) != 0 )
      WmipWaitForCollectionEnabled(BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry((ULONG_PTR)BugCheckParameter2);
    BugCheckParameter2[4] |= v5;
    do
    {
      v6 = WmipSendEnableDisableRequest(a2 != 0 ? 4 : 6, (__int64)BugCheckParameter2, a2);
      if ( a2 )
        v7 = BugCheckParameter2[22];
      else
        v7 = BugCheckParameter2[23];
      if ( v7 )
        break;
      v6 = WmipSendEnableDisableRequest(a2 != 0 ? 5 : 7, (__int64)BugCheckParameter2, a2);
    }
    while ( a2 ? BugCheckParameter2[22] : BugCheckParameter2[23] );
    BugCheckParameter2[4] &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry(&WmipGEChunkInfo, BugCheckParameter2);
  }
  return v6;
}
