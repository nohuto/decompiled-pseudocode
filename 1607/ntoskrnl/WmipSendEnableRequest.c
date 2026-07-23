/*
 * XREFs of WmipSendEnableRequest @ 0x1404D0C2C
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x140473E70 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x14054D464 (WmipReleaseCollectionEnabled.c)
 *     WmipWaitForCollectionEnabled @ 0x14069FA08 (WmipWaitForCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(_DWORD *BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // ebp
  __int64 v8; // r8
  int v9; // eax

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
      LOBYTE(v6) = a2;
      v7 = WmipSendEnableDisableRequest(a2 != 0 ? 4 : 6, BugCheckParameter2, v6);
      if ( a2 )
        v9 = BugCheckParameter2[22];
      else
        v9 = BugCheckParameter2[23];
      if ( v9 )
        break;
      LOBYTE(v8) = a2;
      v7 = WmipSendEnableDisableRequest(a2 != 0 ? 5 : 7, BugCheckParameter2, v8);
    }
    while ( a2 ? BugCheckParameter2[22] : BugCheckParameter2[23] );
    BugCheckParameter2[4] &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry(&WmipGEChunkInfo, BugCheckParameter2);
  }
  return v7;
}
